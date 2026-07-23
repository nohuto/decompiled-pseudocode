/*
 * XREFs of MiWsleFlush @ 0x140201004
 * Callers:
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 * Callees:
 *     MiPteForProtoPoolMadeDemandFill @ 0x140200488 (MiPteForProtoPoolMadeDemandFill.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x14020050C (MiLockedPageTableHasActiveLargeEntries.c)
 *     MiCheckReservePageFileSpace @ 0x140201420 (MiCheckReservePageFileSpace.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MiPteForTrimmedProto @ 0x140202660 (MiPteForTrimmedProto.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 */

__int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  ULONG_PTR v13; // rax
  int v14; // edx
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 result; // rax
  unsigned int v18; // ebx
  ULONG_PTR v19; // rax
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v4 = a4;
  v5 = a2;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MI_READ_PTE_LOCK_FREE(v7, a2, a3);
  v9 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( ((*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v9 + 40) < 0)
    && ((*(_DWORD *)(a1 + 184) & 0xF) == 0 || (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u) )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v4 = a4;
      if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v9 + 40) >= 0
        || (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
      {
        if ( 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) != 0x220000000000LL )
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
    }
    else
    {
      v10 = 0LL;
      if ( *(__int64 *)(v9 + 40) >= 0
        && v7 <= 0xFFFFF6BFFFFFFF78uLL
        && v7 >= 0xFFFFF68000000000uLL
        && (v8 & 0x42) != 0
        && (*(_DWORD *)(a1 - 1024 + 500) & 0x8000) != 0 )
      {
        MiCaptureWriteWatchDirtyBit(a1 - 1024, v5, 0LL);
      }
    }
    v11 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
    v12 = 0LL;
    if ( *(__int64 *)(v9 + 40) < 0 )
    {
      v13 = MiPteForTrimmedProto(a1, v5, v20);
    }
    else
    {
      if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 4 && (_UNKNOWN *)a1 == &unk_140E38100 )
        {
          v19 = MiPteForProtoPoolMadeDemandFill(v9);
          v11 |= 4uLL;
          v15 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v7, v19);
          if ( v15 )
          {
            v5 &= 0xFFFFFFFFFFFFF000uLL;
            MiFlushSingleTbEntry(v5, 1LL, 1LL);
            v15 = 0;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_19;
        }
      }
      else
      {
        MiLockNestedPageTable(a1, v7);
        if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || (unsigned int)MiLockedPageTableHasActiveLargeEntries(v5) )
        {
          MiUnlockPageTableInternal(a1, v7);
          if ( v10 )
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v12 = 1LL;
      }
      v13 = MiSwizzleInvalidPte(v8 & 0xFFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v9 + 16) >> 5) & 0x1F | 0x40LL)), v12);
      if ( v14 )
      {
        MiUnlockNestedPageTableWritePte(a1, v7, v13, 0LL);
        v15 = 1;
        goto LABEL_15;
      }
    }
    v15 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v7, v13) != 0;
LABEL_15:
    if ( v10 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( *(__int64 *)(v9 + 40) >= 0 )
      MiCheckReservePageFileSpace(v9, v7, a1);
LABEL_19:
    *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 12376) + 12384) = v11;
    v16 = *(unsigned int *)(v4 + 16488);
    ++*(_DWORD *)(v4 + 12376);
    *(_QWORD *)(v4 + 8 * v16 + 16496) = v5;
    result = v15;
    ++*(_DWORD *)(v4 + 16488);
    return result;
  }
  return 0LL;
}
