/*
 * XREFs of MiAgePteWorker @ 0x1403040A0
 * Callers:
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 *     MiAgeWorkingSetVpabCallback @ 0x14047DD90 (MiAgeWorkingSetVpabCallback.c)
 *     MiSimpleAgePte @ 0x14049EAD0 (MiSimpleAgePte.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

char __fastcall MiAgePteWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, int *a5, char a6)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // al
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r15
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // edi
  unsigned __int8 v18; // al
  __int64 v19; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rdx
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // r8
  __int64 *v25; // rdx
  BOOL v26; // ecx
  BOOL v27; // ecx
  ULONG *v28; // rax
  ULONG_PTR v29; // rdx
  char v30; // r8
  ULONG_PTR v31; // r14
  __int64 v32; // rdi
  int i; // r11d
  __int64 v34; // r9
  ULONG_PTR v35; // r10
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 *v40; // r10
  char v41; // r8d^2
  __int64 v42; // rdx
  int v43; // r9d
  int v44; // ecx
  unsigned __int64 v45; // rcx
  int v48; // [rsp+88h] [rbp+30h]
  int v49; // [rsp+88h] [rbp+30h]

  v6 = *(_QWORD *)(a1 + 32);
  v8 = a3;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(*(_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
  else
    v9 = (*(_QWORD *)(48
                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                    - 0x220000000000LL) >> 42) & 7;
  if ( (a6 & 1) != 0 )
  {
    v16 = 0;
    if ( v9 )
    {
      if ( v9 >= 7u )
      {
        if ( v9 == 7 )
        {
LABEL_34:
          v19 = 0LL;
          if ( (a6 & 2) != 0 )
          {
            v19 = *((_QWORD *)a5 + 7);
            if ( !v19 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              MmInternal = (__int64 *)CurrentPrcb->MmInternal;
              if ( !MmInternal )
              {
                dword_141011694 = 512;
                MmInternal = MxTempPrcb;
                dword_14100F620 = 1;
              }
              v22 = *((unsigned int *)MmInternal + 87);
              if ( (_DWORD)v22 == *((_DWORD *)MmInternal + 88) )
                KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, *((unsigned int *)MmInternal + 87), 0LL);
              v23 = &MmInternal[2575 * v22];
              v23[2622] = (__int64)KeGetCurrentThread();
              v24 = v23 + 48;
              ++*((_DWORD *)MmInternal + 87);
              v25 = v23 + 565;
              v23[49] = 0LL;
              v23[50] = 0LL;
              v23[51] = 0LL;
              v23[52] = 0LL;
              *((_DWORD *)v23 + 99) = 512;
              *(_OWORD *)(v23 + 565) = 0LL;
              *(_OWORD *)(v23 + 567) = 0LL;
              v23[569] = 0LL;
              *((_DWORD *)v23 + 1133) = 512;
              *((_DWORD *)v23 + 100) = 0;
              *((_DWORD *)v23 + 101) = 2;
              v23[48] = v6;
              *((_BYTE *)v23 + 408) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
              if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v26 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)v23 + 100) |= 9u;
                v26 = 0;
              }
              *((_DWORD *)v24 + 4) &= 0xFFFFFFDB;
              *((_DWORD *)v24 + 2) = v26;
              *(_WORD *)((char *)v24 + 25) = 0;
              *((_DWORD *)v24 + 7) = 0;
              v24[4] = 0LL;
              v24[5] = 0LL;
              *((_QWORD *)a5 + 7) = v24;
              *((_DWORD *)v25 + 4) = 2;
              *((_DWORD *)v25 + 5) = 1;
              *v25 = v6;
              *((_BYTE *)v25 + 24) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
              if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v27 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)v25 + 4) |= 9u;
                v27 = 0;
              }
              *((_DWORD *)v25 + 4) &= 0xFFFFFFDB;
              *((_DWORD *)v25 + 2) = v27;
              *(_WORD *)((char *)v25 + 25) = 0;
              *((_DWORD *)v25 + 7) = 0;
              v25[4] = 0LL;
              v25[5] = 0LL;
              *((_QWORD *)a5 + 8) = v25;
              if ( *((_QWORD *)a5 + 9) == 1LL )
                *((_QWORD *)a5 + 9) = v24 + 1034;
              v19 = *((_QWORD *)a5 + 7);
            }
          }
          else if ( (a6 & 4) != 0 )
          {
            v16 = 2;
          }
          if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
            v28 = &MiSystemPartition;
          else
            v28 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v6 + 174));
          if ( v28[4363] )
            v16 |= 1u;
          v15 = MiClearPteAccessed(v6, a4, a2, v19, v16);
          if ( v15 )
            ++*((_QWORD *)a5 + 3);
          return v15;
        }
      }
      else
      {
        MiSetVaAgeList(v6, v8, 1LL, 0LL);
      }
    }
    v48 = *(_DWORD *)(a4 + 32);
    if ( ((v48 & 0x8000000) == 0
       || a4 >= 0xFFFFDE0000000000uLL
       && a4 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
       && !MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4))
       && ((v41 & 7) == 6 || (unsigned int)MiGetPfnSlabType(a4) != 9))
      && (HIBYTE(v48) & 7u) < 5 )
    {
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      v49 = *(_DWORD *)(a4 + 32);
      HIBYTE(v49) = HIBYTE(v49) & 0xF8 | 5;
      *(_DWORD *)(a4 + 32) = v49;
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    goto LABEL_34;
  }
  v11 = *(_DWORD *)(a4 + 32);
  if ( (v11 & 0x8000000) == 0
    || a4 >= 0xFFFFDE0000000000uLL
    && a4 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
    && ((v29 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4), v29 < qword_140E35C40)
     || v29 >= qword_140E35C40 + 2048)
    && ((BYTE2(v11) & 7) == 6 || byte_140E3CC26
                              && (v30 = *(_BYTE *)(qword_140E3D280 + 2 * (v29 >> 9))) != 0
                              && v30 != 10) )
  {
    v12 = HIBYTE(v11) & 7;
  }
  else
  {
    v12 = 5;
  }
  if ( v9 < 6u )
  {
    if ( v12 < 5 )
    {
      v18 = 6;
    }
    else
    {
      if ( (*a5 & 1) == 0 )
        goto LABEL_7;
      v18 = v9 + 1;
    }
    MiSetVaAgeList(v6, v8, 1LL, v18);
    ++*((_QWORD *)a5 + 2);
  }
LABEL_7:
  if ( *(__int64 *)(a4 + 40) >= 0 )
    v13 = *((_BYTE *)a5 + 4);
  else
    v13 = *((_BYTE *)a5 + 5);
  v14 = v13;
  if ( !v13 )
    v14 = 7;
  if ( (*(_DWORD *)(v6 + 184) & 0xF) == 2
    && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4
    && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned __int16)*(_DWORD *)(a4 + 32) == 1
    || (v15 = *a5, (*a5 & 3) != 0)
    && (v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL
      ? (LOBYTE(v15) = HIBYTE(*(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF)
      : (LOBYTE(v15) = (*(_QWORD *)(48
                                  * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                  - 0x220000000000LL) >> 42) & 7),
        (unsigned __int8)v15 >= v14 || v12 < a5[2]) )
  {
    ++*((_QWORD *)a5 + 4);
    v31 = *((_QWORD *)a5 + 8);
    if ( !v31 )
    {
      MiAcquirePrcbAgeTrimLists(v6, (__int64 **)a5 + 7);
      v31 = *((_QWORD *)a5 + 8);
    }
    v32 = 1LL;
    if ( *(_DWORD *)(v31 + 8) != 1 )
    {
      v44 = *(_DWORD *)(v31 + 16);
      if ( (v44 & 4) == 0 && v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_DWORD *)(v31 + 16) = v44 | 4;
    }
LABEL_71:
    for ( i = 0; ; i = 1 )
    {
      v34 = *(unsigned int *)(v31 + 28);
      if ( (_DWORD)v34 )
      {
        if ( (*(_DWORD *)(v31 + 16) & 2) == 0 )
        {
          v35 = v31 + 8LL * (unsigned int)(v34 - 1);
          v36 = *(_QWORD *)(v35 + 40);
          if ( (v36 & 0xC00) == 0 )
          {
            v37 = *(_QWORD *)(v35 + 40) & 0x3FFLL;
            if ( (v36 & 0xFFFFFFFFFFFFF000uLL) + ((v37 + 1) << 12) == v8 && v32 + v37 > v37 && v32 + v37 <= 0x3FF )
            {
              *(_QWORD *)(v31 + 32) += v32;
              *(_QWORD *)(v35 + 40) = (v36 + v32) ^ ((v36 + v32) ^ v36) & 0xFFFFFFFFFFFFFC00uLL;
              goto LABEL_104;
            }
            v38 = (unsigned int)(v34 - 1) + 5LL;
            v39 = *(_QWORD *)(v31 + 8 * v38);
            v40 = (unsigned __int64 *)(v31 + 8 * v38);
            if ( (v39 & 0xFFFFFFFFFFFFF000uLL) == (v32 << 12) + v8 )
            {
              v45 = v39 & 0x3FF;
              if ( v32 + v45 <= 0x3FF && v32 + v45 > v45 )
              {
                *(_QWORD *)(v31 + 32) += v32;
                *v40 = (v39 - (v32 << 12) + v32) ^ ((v39 - (v32 << 12) + v32) ^ (v39 - (v32 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                goto LABEL_104;
              }
            }
          }
        }
      }
      if ( (_DWORD)v34 != *(_DWORD *)(v31 + 12) )
        break;
      if ( i )
      {
        if ( !*(_BYTE *)(v31 + 25) )
          *(_BYTE *)(v31 + 25) = 1;
        goto LABEL_104;
      }
      if ( *(_BYTE *)(v31 + 25) )
        goto LABEL_104;
      qsort((void *)(v31 + 40), *(unsigned int *)(v31 + 28), 8uLL, MiTbFlushSort);
      MiCompressTbFlushList(v31);
    }
    while ( v32 )
    {
      v42 = 1024LL;
      if ( (unsigned __int64)(v32 - 1) <= 0x3FF )
        v42 = v32;
      *(_QWORD *)(v31 + 8 * v34 + 40) = v8 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v42 - 1) & 0x3FF;
      v43 = *(_DWORD *)(v31 + 28);
      *(_QWORD *)(v31 + 32) += v42;
      v34 = (unsigned int)(v43 + 1);
      v8 += v42 << 12;
      *(_DWORD *)(v31 + 28) = v34;
      v32 -= v42;
      if ( v32 && (_DWORD)v34 == *(_DWORD *)(v31 + 12) )
        goto LABEL_71;
    }
LABEL_104:
    v15 = *(_DWORD *)(v31 + 12);
    if ( *(_DWORD *)(v31 + 28) == v15 )
      LOBYTE(v15) = MiFreeWsleList(v6, v31, 0);
  }
  return v15;
}
