/*
 * XREFs of MiWsleFlush @ 0x1402479D4
 * Callers:
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteForTrimmedProto @ 0x1402476D0 (MiPteForTrimmedProto.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiCheckReservePageFileSpace @ 0x1402480F0 (MiCheckReservePageFileSpace.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x14047AA38 (MiLockedPageTableHasActiveLargeEntries.c)
 *     MiPteForProtoPoolMadeDemandFill @ 0x140498A8C (MiPteForProtoPoolMadeDemandFill.c)
 */

__int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // rax
  int v14; // edx
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 result; // rax
  unsigned int v18; // ebx
  ULONG_PTR v19; // rax

  v4 = a4;
  v5 = a2;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MI_READ_PTE_LOCK_FREE(v7);
  v9 = 0xFFFFFFFFFFLL;
  v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( ((*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v10 + 40) < 0)
    && ((*(_DWORD *)(a1 + 184) & 0xF) == 0 || (unsigned __int16)*(_DWORD *)(v10 + 32) <= 1u) )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v11 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      v4 = a4;
      if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v10 + 40) >= 0
        || (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(v10 + 32) > 1u )
      {
        if ( 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) != 0x220000000000LL )
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
    }
    else
    {
      v11 = 0LL;
      if ( *(__int64 *)(v10 + 40) >= 0
        && v7 <= 0xFFFFF6BFFFFFFF78uLL
        && v7 >= 0xFFFFF68000000000uLL
        && (v8 & 0x42) != 0
        && (*(_DWORD *)(a1 - 1024 + 500) & 0x8000) != 0 )
      {
        MiCaptureWriteWatchDirtyBit(a1 - 1024, v5, 0LL);
      }
    }
    v12 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( *(__int64 *)(v10 + 40) < 0 )
    {
      v13 = MiPteForTrimmedProto(a1, v5, a3);
    }
    else
    {
      if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 4 && (_UNKNOWN *)a1 == &unk_140E37D80 )
        {
          v19 = MiPteForProtoPoolMadeDemandFill(v10, 0LL);
          v12 |= 4uLL;
          v15 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v7, v19);
          if ( v15 )
          {
            v5 &= 0xFFFFFFFFFFFFF000uLL;
            MiFlushSingleTbEntry(v5, 1, 1);
            v15 = 0;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_18;
        }
      }
      else
      {
        MiLockNestedPageTable(a1, v7);
        if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || (unsigned int)MiLockedPageTableHasActiveLargeEntries(v5) )
        {
          MiUnlockPageTable(a1, v7);
          if ( v11 )
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
      }
      v13 = MiSwizzleInvalidPte(v8 & 0xFFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v10 + 16) >> 5) & 0x1F | 0x40LL)));
      if ( v14 )
      {
        MiUnlockNestedPageTableWritePte(a1, v7, v13, 0LL);
        v15 = 1;
        goto LABEL_14;
      }
    }
    v15 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v7, v13) != 0;
LABEL_14:
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( *(__int64 *)(v10 + 40) >= 0 )
      MiCheckReservePageFileSpace(v10, v7, a1);
LABEL_18:
    *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 12376) + 12384) = v12;
    v16 = *(unsigned int *)(v4 + 16488);
    ++*(_DWORD *)(v4 + 12376);
    *(_QWORD *)(v4 + 8 * v16 + 16496) = v5;
    result = v15;
    ++*(_DWORD *)(v4 + 16488);
    return result;
  }
  return 0LL;
}
