/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x14020E950
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiInsertRecursiveTbFlushEntries @ 0x14020EDF8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiEvictPageTableLock @ 0x14020EE7C (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiBadRefCount @ 0x14029D568 (MiBadRefCount.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(__int64 a1, unsigned __int64 *a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  int v9; // ecx
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  _DWORD *v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 ProcessorFlushList; // rax
  BOOL v25; // ecx
  ULONG_PTR LeafVa; // rax
  ULONG_PTR v27; // r10
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-78h] BYREF
  int v31; // [rsp+88h] [rbp+10h]
  unsigned __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v4 = *a2;
  v32 = v4;
  if ( (v4 & 1) != 0 && a3 <= 1 )
  {
    v9 = a3;
    for ( BugCheckParameter4 = 1LL; v9; --v9 )
      BugCheckParameter4 <<= 9;
    v11 = *(__int64 **)(a1 + 184);
    if ( (v4 & 0x80u) != 0LL )
    {
      if ( (*((_DWORD *)v11 + 15) & 1) != 0 )
      {
        LeafVa = MiGetLeafVa(a2);
        v28 = LeafVa;
        if ( LeafVa < *(_QWORD *)(v27 + 40) || LeafVa + (BugCheckParameter4 << 12) - 1 > *(_QWORD *)(v27 + 48) )
          KeBugCheckEx(0x1Au, 0x5306uLL, v27, LeafVa, BugCheckParameter4);
        if ( !*v11 )
        {
          v29 = ((__int64 (*)(void))MiGetProcessorFlushList)();
          *v11 = v29;
          MiInitializeTbFlushList(v29, (unsigned int)&unk_140E384C0, *(_DWORD *)(v29 + 12), 0, 1);
        }
        MiDecommitLargePoolVa(v28, a2, BugCheckParameter4, *v11);
        *((_DWORD *)v11 + 17) += 512;
      }
    }
    else
    {
      v12 = 0xFFFFFFFFFFLL;
      v13 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( a3 == 1 )
      {
        if ( !(unsigned int)MiEvictPageTableLock(&unk_140E384C0, a2, 1LL, CLFS_LSN_NULL_EXT) )
          return 0LL;
        v14 = (_DWORD *)v11 + 15;
      }
      else
      {
        v14 = (_DWORD *)v11 + 15;
        if ( (*((_DWORD *)v11 + 15) & 1) == 0 )
          return 0LL;
        *a2 = CLFS_LSN_NULL_EXT;
        if ( (*(_BYTE *)(v13 + 35) & 0x10) == 0 )
          ++*((_DWORD *)v11 + 17);
      }
      v15 = *((unsigned int *)v11 + 16);
      v16 = 0xFFFFF68000000000uLL;
      if ( !(_DWORD)v15 )
      {
        v12 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v11[9] = v12;
      }
      v17 = 0LL;
      *((_DWORD *)v11 + 16) = v15 + 1;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, v15, v16, a4) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      if ( (*v14 & 2) == 0 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v13 + 32) != 1 )
          MiBadRefCount(v13, v15, v16);
        v31 = *(_DWORD *)(v13 + 32);
        BYTE2(v31) = BYTE2(v31) & 0xF8 | 5;
        *(_DWORD *)(v13 + 32) = v31;
      }
      if ( a3 )
      {
        *(_QWORD *)v13 = v11[4];
        v11[4] = v13;
        if ( !v11[5] )
          v11[5] = v13;
        ++v11[6];
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !*v11 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v12, v15, v16);
          *v11 = ProcessorFlushList;
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 1;
          *(_QWORD *)ProcessorFlushList = &unk_140E384C0;
          *(_BYTE *)(ProcessorFlushList + 24) = (dword_140E38578 & 0x800) != 0;
          if ( (dword_140E38578 & 0xF) != 0
            || &unk_140E384C0 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v25 = (dword_140E38578 & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
            v25 = 0;
          }
          *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(ProcessorFlushList + 8) = v25;
          *(_WORD *)(ProcessorFlushList + 25) = 0;
          *(_DWORD *)(ProcessorFlushList + 28) = 0;
          *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
          *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
        }
        MiInsertRecursiveTbFlushEntries(*v11, (unsigned int)a3, a2);
      }
      else
      {
        if ( (*v14 & 2) == 0 )
        {
          *(_QWORD *)v13 = v11[1];
          v11[1] = v13;
          if ( !v11[2] )
            v11[2] = v13;
          ++v11[3];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v32 = 0LL;
        if ( (v11[7] & 0x40000000) == 0 )
        {
          v19 = MI_READ_PTE_LOCK_FREE(&v32, v15, v16);
          _InterlockedOr(v30, 0);
          if ( v19 )
          {
            v15 = qword_140E2DCC0;
            LODWORD(v17) = v19;
            if ( qword_140E2DCC0 )
            {
              if ( (v19 & 0x10) != 0 )
                LODWORD(v17) = v19 & 0xFFFFFFEF;
              else
                LODWORD(v17) = v19 & ~(_DWORD)qword_140E2DCC0;
            }
          }
          v20 = (unsigned int)v17 | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
          if ( qword_140E2DCC0 )
          {
            if ( (qword_140E2DCC0 & v20) != 0 )
              v20 |= 0x10uLL;
            else
              v20 |= qword_140E2DCC0;
          }
          v32 = v20;
          v17 = v20;
          *a2 = v20;
        }
        if ( qword_140E2DCC0 && (v17 & 0x10) == 0 )
          v17 &= ~qword_140E2DCC0;
        if ( (v17 & 0xFFFFFFFF00000000uLL) == 0 )
        {
          v21 = (__int64)((_QWORD)a2 << 25) >> 16;
          if ( *v11 )
          {
            v23 = 1LL;
          }
          else
          {
            v22 = MiGetProcessorFlushList(qword_140E2DCC0, v15, v16);
            *v11 = v22;
            MiInitializeTbFlushList(v22, (unsigned int)&unk_140E384C0, *(_DWORD *)(v22 + 12), 0, 1);
          }
          MiInsertTbFlushEntry(*v11, v21, v23);
        }
      }
    }
  }
  return 0LL;
}
