/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x1402FAF80
 * Callers:
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiBadRefCount @ 0x1402360FC (MiBadRefCount.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402FB420 (MiInsertRecursiveTbFlushEntries.c)
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
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
  __int64 v24; // rax
  BOOL v25; // ecx
  ULONG_PTR LeafVa; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG_PTR v30; // r10
  ULONG_PTR v31; // rsi
  ULONG_PTR v32; // rcx
  __int64 ProcessorFlushList; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  int v35; // [rsp+88h] [rbp+10h]
  unsigned __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v36 = v4;
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
        v31 = LeafVa;
        if ( LeafVa < *(_QWORD *)(v30 + 40)
          || (v32 = LeafVa + (BugCheckParameter4 << 12) - 1, v32 > *(_QWORD *)(v30 + 48)) )
        {
          KeBugCheckEx(0x1Au, 0x5306uLL, v30, LeafVa, BugCheckParameter4);
        }
        if ( !*v11 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v32, v27, v28, v29);
          *v11 = ProcessorFlushList;
          MiInitializeTbFlushList(
            ProcessorFlushList,
            (unsigned int)&unk_140E38140,
            *(_DWORD *)(ProcessorFlushList + 12),
            0,
            1);
        }
        MiDecommitLargePoolVa(v31, a2, BugCheckParameter4, *v11);
        *((_DWORD *)v11 + 17) += 512;
      }
    }
    else
    {
      v12 = 0xFFFFFFFFFFLL;
      v13 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( a3 == 1 )
      {
        if ( !(unsigned int)MiEvictPageTableLock(&unk_140E38140, a2, 1LL, CLFS_LSN_NULL_EXT) )
          return 0LL;
        v14 = (_DWORD *)v11 + 15;
      }
      else
      {
        v14 = (_DWORD *)v11 + 15;
        if ( (*((_DWORD *)v11 + 15) & 1) == 0 )
          return 0LL;
        *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
        if ( (*(_BYTE *)(v13 + 35) & 0x10) == 0 )
          ++*((_DWORD *)v11 + 17);
      }
      v15 = *((unsigned int *)v11 + 16);
      v16 = 0xFFFFF68000000000uLL;
      if ( !(_DWORD)v15 )
      {
        v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
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
          MiBadRefCount(v13);
        v35 = *(_DWORD *)(v13 + 32);
        BYTE2(v35) = BYTE2(v35) & 0xF8 | 5;
        *(_DWORD *)(v13 + 32) = v35;
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
          v24 = MiGetProcessorFlushList(v12, v15, v16, a4);
          *v11 = v24;
          *(_DWORD *)(v24 + 16) = 0;
          *(_DWORD *)(v24 + 20) = 1;
          *(_QWORD *)v24 = &unk_140E38140;
          *(_BYTE *)(v24 + 24) = (dword_140E381F8 & 0x800) != 0;
          if ( (dword_140E381F8 & 0xF) != 0
            || &unk_140E38140 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v25 = (dword_140E381F8 & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(v24 + 16) |= 9u;
            v25 = 0;
          }
          *(_DWORD *)(v24 + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(v24 + 8) = v25;
          *(_WORD *)(v24 + 25) = 0;
          *(_DWORD *)(v24 + 28) = 0;
          *(_QWORD *)(v24 + 32) = 0LL;
          *(_QWORD *)(v24 + 40) = 0LL;
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
        v36 = 0LL;
        if ( (v11[7] & 0x40000000) == 0 )
        {
          v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36);
          _InterlockedOr(v34, 0);
          if ( v19 )
          {
            v15 = qword_140E2D940;
            LODWORD(v17) = v19;
            if ( qword_140E2D940 )
            {
              if ( (v19 & 0x10) != 0 )
                LODWORD(v17) = v19 & 0xFFFFFFEF;
              else
                LODWORD(v17) = v19 & ~(_DWORD)qword_140E2D940;
            }
          }
          v20 = (unsigned int)v17 | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
          if ( qword_140E2D940 )
          {
            if ( (qword_140E2D940 & v20) != 0 )
              v20 |= 0x10uLL;
            else
              v20 |= qword_140E2D940;
          }
          v36 = v20;
          v17 = v20;
          *(_QWORD *)a2 = v20;
        }
        if ( qword_140E2D940 && (v17 & 0x10) == 0 )
          v17 &= ~qword_140E2D940;
        if ( (v17 & 0xFFFFFFFF00000000uLL) == 0 )
        {
          v21 = (__int64)(a2 << 25) >> 16;
          if ( *v11 )
          {
            v23 = 1LL;
          }
          else
          {
            v22 = MiGetProcessorFlushList(qword_140E2D940, v15, v16, a4);
            *v11 = v22;
            MiInitializeTbFlushList(v22, (unsigned int)&unk_140E38140, *(_DWORD *)(v22 + 12), 0, 1);
          }
          MiInsertTbFlushEntry(*v11, v21, v23, 0LL);
        }
      }
    }
  }
  return 0LL;
}
