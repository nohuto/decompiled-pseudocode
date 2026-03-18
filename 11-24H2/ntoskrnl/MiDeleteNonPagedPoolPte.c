/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x1402349C0
 * Callers:
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140234E68 (MiInsertRecursiveTbFlushEntries.c)
 *     MiEvictPageTableLock @ 0x140234EEC (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiBadRefCount @ 0x14028D968 (MiBadRefCount.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rax
  int v8; // ecx
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  _DWORD *v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rax
  BOOL v24; // ecx
  ULONG_PTR LeafVa; // rax
  __int64 v26; // rdx
  ULONG_PTR v27; // r10
  ULONG_PTR v28; // rsi
  ULONG_PTR v29; // rcx
  __int64 ProcessorFlushList; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  int v32; // [rsp+88h] [rbp+10h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v3 = *a2;
  v33 = v3;
  if ( (v3 & 1) != 0 && a3 <= 1 )
  {
    v8 = a3;
    for ( BugCheckParameter4 = 1LL; v8; --v8 )
      BugCheckParameter4 <<= 9;
    v10 = *(__int64 **)(a1 + 184);
    if ( (v3 & 0x80u) != 0LL )
    {
      if ( (*((_DWORD *)v10 + 15) & 1) != 0 )
      {
        LeafVa = MiGetLeafVa(a2);
        v28 = LeafVa;
        if ( LeafVa < *(_QWORD *)(v27 + 40)
          || (v29 = LeafVa + (BugCheckParameter4 << 12) - 1, v29 > *(_QWORD *)(v27 + 48)) )
        {
          KeBugCheckEx(0x1Au, 0x5306uLL, v27, LeafVa, BugCheckParameter4);
        }
        if ( !*v10 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v29, v26);
          *v10 = ProcessorFlushList;
          MiInitializeTbFlushList(
            ProcessorFlushList,
            (__int64)&unk_140E38380,
            *(_DWORD *)(ProcessorFlushList + 12),
            0,
            1);
        }
        MiDecommitLargePoolVa(v28, a2, BugCheckParameter4, *v10);
        *((_DWORD *)v10 + 17) += 512;
      }
    }
    else
    {
      v11 = 0xFFFFFFFFFFLL;
      v12 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( a3 == 1 )
      {
        if ( !(unsigned int)MiEvictPageTableLock(&unk_140E38380, a2, 1LL, CLFS_LSN_NULL_EXT) )
          return 0LL;
        v13 = (_DWORD *)v10 + 15;
      }
      else
      {
        v13 = (_DWORD *)v10 + 15;
        if ( (*((_DWORD *)v10 + 15) & 1) == 0 )
          return 0LL;
        *a2 = CLFS_LSN_NULL_EXT;
        if ( (*(_BYTE *)(v12 + 35) & 0x10) == 0 )
          ++*((_DWORD *)v10 + 17);
      }
      v14 = *((unsigned int *)v10 + 16);
      v15 = 0xFFFFF68000000000uLL;
      if ( !(_DWORD)v14 )
      {
        v11 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v10[9] = v11;
      }
      v16 = 0LL;
      *((_DWORD *)v10 + 16) = v14 + 1;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( (*v13 & 2) == 0 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v12 + 32) != 1 )
          MiBadRefCount(v12, v14, v15);
        v32 = *(_DWORD *)(v12 + 32);
        BYTE2(v32) = BYTE2(v32) & 0xF8 | 5;
        *(_DWORD *)(v12 + 32) = v32;
      }
      if ( a3 )
      {
        *(_QWORD *)v12 = v10[4];
        v10[4] = v12;
        if ( !v10[5] )
          v10[5] = v12;
        ++v10[6];
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !*v10 )
        {
          v23 = MiGetProcessorFlushList(v11, v14);
          *v10 = v23;
          *(_DWORD *)(v23 + 16) = 0;
          *(_DWORD *)(v23 + 20) = 1;
          *(_QWORD *)v23 = &unk_140E38380;
          *(_BYTE *)(v23 + 24) = (dword_140E38438 & 0x800) != 0;
          if ( (dword_140E38438 & 0xF) != 0
            || &unk_140E38380 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v24 = (dword_140E38438 & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(v23 + 16) |= 9u;
            v24 = 0;
          }
          *(_DWORD *)(v23 + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(v23 + 8) = v24;
          *(_WORD *)(v23 + 25) = 0;
          *(_DWORD *)(v23 + 28) = 0;
          *(_QWORD *)(v23 + 32) = 0LL;
          *(_QWORD *)(v23 + 40) = 0LL;
        }
        MiInsertRecursiveTbFlushEntries(*v10, (unsigned int)a3, a2);
      }
      else
      {
        if ( (*v13 & 2) == 0 )
        {
          *(_QWORD *)v12 = v10[1];
          v10[1] = v12;
          if ( !v10[2] )
            v10[2] = v12;
          ++v10[3];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v33 = 0LL;
        if ( (v10[7] & 0x40000000) == 0 )
        {
          v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33);
          _InterlockedOr(v31, 0);
          if ( v18 )
          {
            v14 = qword_140E2DB80;
            LODWORD(v16) = v18;
            if ( qword_140E2DB80 )
            {
              if ( (v18 & 0x10) != 0 )
                LODWORD(v16) = v18 & 0xFFFFFFEF;
              else
                LODWORD(v16) = v18 & ~(_DWORD)qword_140E2DB80;
            }
          }
          v19 = (unsigned int)v16 | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
          if ( qword_140E2DB80 )
          {
            if ( (qword_140E2DB80 & v19) != 0 )
              v19 |= 0x10uLL;
            else
              v19 |= qword_140E2DB80;
          }
          v33 = v19;
          v16 = v19;
          *a2 = v19;
        }
        if ( qword_140E2DB80 && (v16 & 0x10) == 0 )
          v16 &= ~qword_140E2DB80;
        if ( (v16 & 0xFFFFFFFF00000000uLL) == 0 )
        {
          v20 = (__int64)((_QWORD)a2 << 25) >> 16;
          if ( *v10 )
          {
            v22 = 1LL;
          }
          else
          {
            v21 = MiGetProcessorFlushList(qword_140E2DB80, v14);
            *v10 = v21;
            MiInitializeTbFlushList(v21, (__int64)&unk_140E38380, *(_DWORD *)(v21 + 12), 0, 1);
          }
          MiInsertTbFlushEntry(*v10, v20, v22);
        }
      }
    }
  }
  return 0LL;
}
