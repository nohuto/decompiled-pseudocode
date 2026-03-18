/*
 * XREFs of MiAgePteWorker @ 0x14022FCA0
 * Callers:
 *     MiAgePte @ 0x14022F8D0 (MiAgePte.c)
 *     MiSimpleAgePte @ 0x1403FA2E0 (MiSimpleAgePte.c)
 *     MiAgeWorkingSetVpabCallback @ 0x140482BA0 (MiAgeWorkingSetVpabCallback.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140231E18 (MiAcquirePrcbAgeTrimLists.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 */

char __fastcall MiAgePteWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, int *a5, char a6)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // r13
  __int64 CurrentThread; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int8 v12; // al
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // r15
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // edi
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rdx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 *v28; // r8
  __int64 *v29; // rdx
  BOOL v30; // ecx
  BOOL v31; // ecx
  ULONG *v32; // rax
  ULONG_PTR v33; // rdx
  char v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rdi
  int i; // r11d
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 *v45; // r10
  char v46; // r8d^2
  __int64 v47; // rdx
  int v48; // r9d
  int v49; // ecx
  unsigned __int64 v50; // rcx
  int v53; // [rsp+88h] [rbp+30h]
  int v54; // [rsp+88h] [rbp+30h]

  v6 = *(_QWORD *)(a1 + 32);
  v8 = a3;
  CurrentThread = 0xFFFFF6FB7DBED000uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL )
    {
      CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
      if ( v10 <= 0xFFFFF6FB7DBED7F8uLL && (v11 & 1) != 0 )
      {
        LOBYTE(CurrentThread) = (v11 & 0x20) != 0;
        if ( (((v11 & 0x42) != 0) & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
        {
          CurrentThread = (__int64)KeGetCurrentThread();
          v21 = *(_QWORD *)(CurrentThread + 184);
          if ( *(_BYTE *)(v21 + 352) != 1 )
          {
            CurrentThread = *(_QWORD *)(v21 + 1288);
            if ( CurrentThread )
              CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v10 >> 3) & 0x1FF));
          }
        }
      }
    }
    v12 = HIBYTE(v11) & 0xF;
  }
  else
  {
    v35 = MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    CurrentThread = 6 * ((v35 >> 12) & 0xFFFFFFFFFFLL);
    v12 = (*(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 42) & 7;
  }
  if ( (a6 & 1) != 0 )
  {
    v19 = 0;
    if ( v12 )
    {
      if ( v12 >= 7u )
      {
        if ( v12 == 7 )
        {
LABEL_42:
          v23 = 0LL;
          if ( (a6 & 2) != 0 )
          {
            v23 = *((_QWORD *)a5 + 7);
            if ( !v23 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              MmInternal = (__int64 *)CurrentPrcb->MmInternal;
              if ( !MmInternal )
              {
                dword_141010694 = 512;
                MmInternal = MxTempPrcb;
                dword_14100E620 = 1;
              }
              v26 = *((unsigned int *)MmInternal + 87);
              if ( (_DWORD)v26 == *((_DWORD *)MmInternal + 88) )
                KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, *((unsigned int *)MmInternal + 87), 0LL);
              v27 = &MmInternal[2575 * v26];
              v27[2622] = (__int64)KeGetCurrentThread();
              v28 = v27 + 48;
              ++*((_DWORD *)MmInternal + 87);
              v29 = v27 + 565;
              v27[49] = 0LL;
              v27[50] = 0LL;
              v27[51] = 0LL;
              v27[52] = 0LL;
              *((_DWORD *)v27 + 99) = 512;
              *(_OWORD *)(v27 + 565) = 0LL;
              *(_OWORD *)(v27 + 567) = 0LL;
              v27[569] = 0LL;
              *((_DWORD *)v27 + 1133) = 512;
              *((_DWORD *)v27 + 100) = 0;
              *((_DWORD *)v27 + 101) = 2;
              v27[48] = v6;
              *((_BYTE *)v27 + 408) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
              if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v30 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)v27 + 100) |= 9u;
                v30 = 0;
              }
              *((_DWORD *)v28 + 4) &= 0xFFFFFFDB;
              *((_DWORD *)v28 + 2) = v30;
              *(_WORD *)((char *)v28 + 25) = 0;
              *((_DWORD *)v28 + 7) = 0;
              v28[4] = 0LL;
              v28[5] = 0LL;
              *((_QWORD *)a5 + 7) = v28;
              *((_DWORD *)v29 + 4) = 2;
              *((_DWORD *)v29 + 5) = 1;
              *v29 = v6;
              *((_BYTE *)v29 + 24) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
              if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v31 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)v29 + 4) |= 9u;
                v31 = 0;
              }
              *((_DWORD *)v29 + 4) &= 0xFFFFFFDB;
              *((_DWORD *)v29 + 2) = v31;
              *(_WORD *)((char *)v29 + 25) = 0;
              *((_DWORD *)v29 + 7) = 0;
              v29[4] = 0LL;
              v29[5] = 0LL;
              *((_QWORD *)a5 + 8) = v29;
              if ( *((_QWORD *)a5 + 9) == 1LL )
                *((_QWORD *)a5 + 9) = v28 + 1034;
              v23 = *((_QWORD *)a5 + 7);
            }
          }
          else if ( (a6 & 4) != 0 )
          {
            v19 = 2;
          }
          if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
            v32 = &MiSystemPartition;
          else
            v32 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v6 + 174));
          if ( v32[4363] )
            v19 |= 1u;
          v18 = MiClearPteAccessed(v6, a4, a2, v23, v19);
          if ( v18 )
            ++*((_QWORD *)a5 + 3);
          return v18;
        }
      }
      else
      {
        MiSetVaAgeList(v6, v8, 1LL, 0LL);
      }
    }
    v53 = *(_DWORD *)(a4 + 32);
    if ( ((v53 & 0x8000000) == 0
       || a4 >= 0xFFFFDE0000000000uLL
       && a4 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
       && !MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4))
       && ((v46 & 7) == 6 || (unsigned int)MiGetPfnSlabType(a4) != 9))
      && (HIBYTE(v53) & 7u) < 5 )
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentThread) )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      v54 = *(_DWORD *)(a4 + 32);
      HIBYTE(v54) = HIBYTE(v54) & 0xF8 | 5;
      *(_DWORD *)(a4 + 32) = v54;
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    goto LABEL_42;
  }
  v14 = *(_DWORD *)(a4 + 32);
  if ( (v14 & 0x8000000) == 0
    || a4 >= 0xFFFFDE0000000000uLL
    && a4 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
    && ((v33 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4), v33 < qword_140E35B00)
     || v33 >= qword_140E35B00 + 2048)
    && ((BYTE2(v14) & 7) == 6 || byte_140E3CAE6
                              && (v34 = *(_BYTE *)(qword_140E3D140 + 2 * (v33 >> 9))) != 0
                              && v34 != 10) )
  {
    v15 = HIBYTE(v14) & 7;
  }
  else
  {
    v15 = 5;
  }
  if ( v12 < 6u )
  {
    if ( v15 < 5 )
    {
      v22 = 6;
    }
    else
    {
      if ( (*a5 & 1) == 0 )
        goto LABEL_11;
      v22 = v12 + 1;
    }
    MiSetVaAgeList(v6, v8, 1LL, v22);
    ++*((_QWORD *)a5 + 2);
  }
LABEL_11:
  if ( *(__int64 *)(a4 + 40) >= 0 )
    v16 = *((_BYTE *)a5 + 4);
  else
    v16 = *((_BYTE *)a5 + 5);
  v17 = v16;
  if ( !v16 )
    v17 = 7;
  if ( (*(_DWORD *)(v6 + 184) & 0xF) == 2
    && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4
    && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned __int16)*(_DWORD *)(a4 + 32) == 1
    || (v18 = *a5, (*a5 & 3) != 0)
    && (v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL
      ? (LOBYTE(v18) = HIBYTE(*(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF)
      : (LOBYTE(v18) = (*(_QWORD *)(48
                                  * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                  - 0x220000000000LL) >> 42) & 7),
        (unsigned __int8)v18 >= v17 || v15 < a5[2]) )
  {
    ++*((_QWORD *)a5 + 4);
    v36 = *((_QWORD *)a5 + 8);
    if ( !v36 )
    {
      MiAcquirePrcbAgeTrimLists(v6, a5 + 14);
      v36 = *((_QWORD *)a5 + 8);
    }
    v37 = 1LL;
    if ( *(_DWORD *)(v36 + 8) != 1 )
    {
      v49 = *(_DWORD *)(v36 + 16);
      if ( (v49 & 4) == 0 && v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_DWORD *)(v36 + 16) = v49 | 4;
    }
LABEL_79:
    for ( i = 0; ; i = 1 )
    {
      v39 = *(unsigned int *)(v36 + 28);
      if ( (_DWORD)v39 )
      {
        if ( (*(_DWORD *)(v36 + 16) & 2) == 0 )
        {
          v40 = v36 + 8LL * (unsigned int)(v39 - 1);
          v41 = *(_QWORD *)(v40 + 40);
          if ( (v41 & 0xC00) == 0 )
          {
            v42 = *(_QWORD *)(v40 + 40) & 0x3FFLL;
            if ( (v41 & 0xFFFFFFFFFFFFF000uLL) + ((v42 + 1) << 12) == v8 && v37 + v42 > v42 && v37 + v42 <= 0x3FF )
            {
              *(_QWORD *)(v36 + 32) += v37;
              *(_QWORD *)(v40 + 40) = (v41 + v37) ^ ((v41 + v37) ^ v41) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_112;
            }
            v43 = (unsigned int)(v39 - 1) + 5LL;
            v44 = *(_QWORD *)(v36 + 8 * v43);
            v45 = (unsigned __int64 *)(v36 + 8 * v43);
            if ( (v44 & 0xFFFFFFFFFFFFF000uLL) == (v37 << 12) + v8 )
            {
              v50 = v44 & 0x3FF;
              if ( v37 + v50 <= 0x3FF && v37 + v50 > v50 )
              {
                *(_QWORD *)(v36 + 32) += v37;
                *v45 = (v44 - (v37 << 12) + v37) ^ ((v44 - (v37 << 12) + v37) ^ (v44 - (v37 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                goto LABEL_112;
              }
            }
          }
        }
      }
      if ( (_DWORD)v39 != *(_DWORD *)(v36 + 12) )
        break;
      if ( i )
      {
        if ( !*(_BYTE *)(v36 + 25) )
          *(_BYTE *)(v36 + 25) = 1;
        goto LABEL_112;
      }
      if ( *(_BYTE *)(v36 + 25) )
        goto LABEL_112;
      qsort((void *)(v36 + 40), *(unsigned int *)(v36 + 28), 8uLL, MiTbFlushSort);
      MiCompressTbFlushList(v36);
    }
    while ( v37 )
    {
      v47 = 1024LL;
      if ( (unsigned __int64)(v37 - 1) <= 0x3FF )
        v47 = v37;
      *(_QWORD *)(v36 + 8 * v39 + 40) = v8 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v47 - 1) & 0x3FF;
      v48 = *(_DWORD *)(v36 + 28);
      *(_QWORD *)(v36 + 32) += v47;
      v39 = (unsigned int)(v48 + 1);
      v8 += v47 << 12;
      *(_DWORD *)(v36 + 28) = v39;
      v37 -= v47;
      if ( v37 && (_DWORD)v39 == *(_DWORD *)(v36 + 12) )
        goto LABEL_79;
    }
LABEL_112:
    v18 = *(_DWORD *)(v36 + 12);
    if ( *(_DWORD *)(v36 + 28) == v18 )
      LOBYTE(v18) = MiFreeWsleList(v6, v36, 0LL);
  }
  return v18;
}
