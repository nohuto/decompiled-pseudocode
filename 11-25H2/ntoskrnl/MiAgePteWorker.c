/*
 * XREFs of MiAgePteWorker @ 0x140248780
 * Callers:
 *     MiAgePte @ 0x1402483B0 (MiAgePte.c)
 *     MiAgeWorkingSetVpabCallback @ 0x140482270 (MiAgeWorkingSetVpabCallback.c)
 *     MiSimpleAgePte @ 0x1404A3CC0 (MiSimpleAgePte.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 */

char __fastcall MiAgePteWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // r12
  ULONG_PTR Process; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  ULONG_PTR v12; // rax
  unsigned __int8 v13; // al
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r15
  unsigned __int64 v19; // rax
  __int64 CurrentThread; // rcx
  int v21; // ebx
  unsigned int v22; // eax
  ULONG_PTR v23; // rcx
  unsigned int v24; // edi
  unsigned __int8 v25; // al
  __int64 v26; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rdx
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 *v31; // r8
  __int64 *v32; // rdx
  BOOL v33; // ecx
  BOOL v34; // ecx
  ULONG *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 ProcessorFlushList; // rdx
  BOOL v40; // ecx
  BOOL v41; // ecx
  __int64 v42; // rdi
  int i; // r10d
  __int64 v44; // r9
  __int64 v45; // r11
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 *v50; // r11
  ULONG_PTR v51; // rdx
  __int64 v52; // rdx
  int v53; // r9d
  int v54; // ecx
  unsigned __int64 v55; // rcx
  int v58; // [rsp+88h] [rbp+30h]
  char v59; // [rsp+8Bh] [rbp+33h]

  v6 = *(_QWORD *)(a1 + 32);
  v8 = a3;
  Process = 0xFFFFF68000000000uLL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && (v12 & 1) != 0 )
    {
      LOBYTE(Process) = (v12 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v12 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 352) != 1 )
        {
          v36 = *(_QWORD *)(Process + 1288);
          if ( v36 )
          {
            v11 = (v11 >> 3) & 0x1FF;
            v37 = *(_QWORD *)(v36 + 8 * v11);
            if ( (v37 & 0x20) != 0 )
              v12 |= 0x20uLL;
            Process = v12;
          }
        }
      }
    }
    v13 = HIBYTE(v12) & 0xF;
  }
  else
  {
    v13 = (*(_QWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 42) & 7;
  }
  if ( (a6 & 1) != 0 )
  {
    v21 = 0;
    if ( v13 )
    {
      if ( v13 >= 7u )
      {
        if ( v13 == 7 )
        {
LABEL_36:
          v26 = 0LL;
          if ( (a6 & 2) != 0 )
          {
            v26 = *(_QWORD *)(a5 + 56);
            if ( !v26 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              MmInternal = (__int64 *)CurrentPrcb->MmInternal;
              if ( !MmInternal )
              {
                dword_141010694 = 512;
                MmInternal = MxTempPrcb;
                dword_14100E620 = 1;
              }
              v29 = *((unsigned int *)MmInternal + 87);
              if ( (_DWORD)v29 == *((_DWORD *)MmInternal + 88) )
                KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, *((unsigned int *)MmInternal + 87), 0LL);
              v30 = &MmInternal[2575 * v29];
              v30[2622] = (__int64)KeGetCurrentThread();
              v31 = v30 + 48;
              ++*((_DWORD *)MmInternal + 87);
              v32 = v30 + 565;
              v30[49] = 0LL;
              v30[50] = 0LL;
              v30[51] = 0LL;
              v30[52] = 0LL;
              *((_DWORD *)v30 + 99) = 512;
              *(_OWORD *)(v30 + 565) = 0LL;
              *(_OWORD *)(v30 + 567) = 0LL;
              v30[569] = 0LL;
              *((_DWORD *)v30 + 1133) = 512;
              *((_DWORD *)v30 + 100) = 0;
              *((_DWORD *)v30 + 101) = 2;
              v30[48] = v6;
              *((_BYTE *)v30 + 408) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
              if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v33 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)v30 + 100) |= 9u;
                v33 = 0;
              }
              *((_DWORD *)v31 + 4) &= 0xFFFFFFDB;
              *((_DWORD *)v31 + 2) = v33;
              *(_WORD *)((char *)v31 + 25) = 0;
              *((_DWORD *)v31 + 7) = 0;
              v31[4] = 0LL;
              v31[5] = 0LL;
              *(_QWORD *)(a5 + 56) = v31;
              *((_DWORD *)v32 + 4) = 2;
              *((_DWORD *)v32 + 5) = 1;
              *v32 = v6;
              *((_BYTE *)v32 + 24) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
              if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
                || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
              {
                v34 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
              }
              else
              {
                *((_DWORD *)v32 + 4) |= 9u;
                v34 = 0;
              }
              *((_DWORD *)v32 + 4) &= 0xFFFFFFDB;
              *((_DWORD *)v32 + 2) = v34;
              *(_WORD *)((char *)v32 + 25) = 0;
              *((_DWORD *)v32 + 7) = 0;
              v32[4] = 0LL;
              v32[5] = 0LL;
              *(_QWORD *)(a5 + 64) = v32;
              if ( *(_QWORD *)(a5 + 72) == 1LL )
                *(_QWORD *)(a5 + 72) = v31 + 1034;
              v26 = *(_QWORD *)(a5 + 56);
            }
          }
          else if ( (a6 & 4) != 0 )
          {
            v21 = 2;
          }
          if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
            v35 = &MiSystemPartition;
          else
            v35 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v6 + 174));
          if ( v35[4363] )
            v21 |= 1u;
          LODWORD(v19) = MiClearPteAccessed(v6, a4, a2, v26, v21);
          if ( (_DWORD)v19 )
            ++*(_QWORD *)(a5 + 24);
          return v19;
        }
      }
      else
      {
        MiSetVaAgeList(v6, v8, 1LL, 0LL);
      }
    }
    v22 = *(_DWORD *)(a4 + 32);
    v23 = HIBYTE(v22);
    v59 = HIBYTE(v22);
    if ( (v22 & 0x8000000) == 0
      || a4 >= 0xFFFFDE0000000000uLL
      && a4 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
      && ((v51 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4),
           v23 = qword_140E358C0,
           v51 < qword_140E358C0)
       || (v23 = qword_140E358C0 + 2048, v51 >= qword_140E358C0 + 2048))
      && ((BYTE2(v22) & 7) == 6 || (unsigned int)MiGetPfnSlabType(a4) != 9) )
    {
      if ( (v59 & 7u) < 5 )
      {
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v24 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
            {
              HvlNotifyLongSpinWait(v24);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(a4 + 24) < 0 );
        }
        v58 = *(_DWORD *)(a4 + 32);
        HIBYTE(v58) = HIBYTE(v58) & 0xF8 | 5;
        *(_DWORD *)(a4 + 32) = v58;
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    goto LABEL_36;
  }
  v15 = *(_DWORD *)(a4 + 32);
  if ( (v15 & 0x8000000) == 0
    || a4 >= 0xFFFFDE0000000000uLL
    && (Process = 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL, a4 < Process)
    && ((Process = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4), Process < qword_140E358C0)
     || Process >= qword_140E358C0 + 2048)
    && ((BYTE2(v15) & 7) == 6
     || byte_140E3C8A6
     && (Process >>= 9, v11 = *(unsigned __int8 *)(qword_140E3CF00 + 2 * Process), (_BYTE)v11)
     && (_BYTE)v11 != 10) )
  {
    v16 = HIBYTE(v15) & 7;
  }
  else
  {
    v16 = 5;
  }
  if ( v13 < 6u )
  {
    if ( v16 < 5 )
    {
      v25 = 6;
    }
    else
    {
      if ( (*(_DWORD *)a5 & 1) == 0 )
        goto LABEL_8;
      v25 = v13 + 1;
    }
    MiSetVaAgeList(v6, v8, 1LL, v25);
    ++*(_QWORD *)(a5 + 16);
  }
LABEL_8:
  if ( *(__int64 *)(a4 + 40) >= 0 )
    v17 = *(_BYTE *)(a5 + 4);
  else
    v17 = *(_BYTE *)(a5 + 5);
  v18 = v17;
  if ( !v17 )
    v18 = 7;
  if ( (*(_DWORD *)(v6 + 184) & 0xF) == 2 && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4 )
  {
    CurrentThread = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && (unsigned __int16)*(_DWORD *)(a4 + 32) == 1 )
      goto LABEL_81;
  }
  LODWORD(v19) = *(_DWORD *)a5;
  if ( (*(_DWORD *)a5 & 3) != 0 )
  {
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v11 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      CurrentThread = 0xFFFFF6FB7DBED000uLL;
      v19 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL )
      {
        CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
        if ( v11 <= 0xFFFFF6FB7DBED7F8uLL && (v19 & 1) != 0 )
        {
          LOBYTE(Process) = (v19 & 0x42) != 0;
          LOBYTE(CurrentThread) = (v19 & 0x20) != 0;
          if ( ((unsigned __int8)Process & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
          {
            CurrentThread = (__int64)KeGetCurrentThread();
            Process = *(_QWORD *)(CurrentThread + 184);
            if ( *(_BYTE *)(Process + 352) != 1 )
            {
              CurrentThread = *(_QWORD *)(Process + 1288);
              if ( CurrentThread )
              {
                v11 = (v11 >> 3) & 0x1FF;
                CurrentThread = *(_QWORD *)(CurrentThread + 8 * v11);
                if ( (CurrentThread & 0x20) != 0 )
                  v19 |= 0x20uLL;
                Process = v19;
              }
            }
          }
        }
      }
      LOBYTE(v19) = HIBYTE(v19) & 0xF;
    }
    else
    {
      v19 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      CurrentThread = 6 * ((v19 >> 12) & 0xFFFFFFFFFFLL);
      LOBYTE(v19) = (*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 42) & 7;
    }
    if ( (unsigned __int8)v19 >= v18 || v16 < *(_DWORD *)(a5 + 8) )
    {
LABEL_81:
      ++*(_QWORD *)(a5 + 32);
      v38 = *(_QWORD *)(a5 + 64);
      if ( !v38 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(CurrentThread, Process, v11, v10);
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_DWORD *)(ProcessorFlushList + 20) = 2;
        *(_QWORD *)ProcessorFlushList = v6;
        *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v40 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v40 = 0;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v40;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
        *(_QWORD *)(a5 + 56) = ProcessorFlushList;
        *(_DWORD *)(ProcessorFlushList + 4152) = 2;
        *(_DWORD *)(ProcessorFlushList + 4156) = 1;
        *(_QWORD *)(ProcessorFlushList + 4136) = v6;
        *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(v6 + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)v6 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v41 = (*(_DWORD *)(v6 + 184) & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
          v41 = 0;
        }
        *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 4144) = v41;
        *(_WORD *)(ProcessorFlushList + 4161) = 0;
        *(_DWORD *)(ProcessorFlushList + 4164) = 0;
        *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
        *(_QWORD *)(a5 + 64) = ProcessorFlushList + 4136;
        if ( *(_QWORD *)(a5 + 72) == 1LL )
          *(_QWORD *)(a5 + 72) = ProcessorFlushList + 8272;
        v38 = ProcessorFlushList + 4136;
      }
      v42 = 1LL;
      if ( *(_DWORD *)(v38 + 8) != 1 )
      {
        v54 = *(_DWORD *)(v38 + 16);
        if ( (v54 & 4) == 0 && v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
          *(_DWORD *)(v38 + 16) = v54 | 4;
      }
LABEL_92:
      for ( i = 0; ; i = 1 )
      {
        v44 = *(unsigned int *)(v38 + 28);
        if ( (_DWORD)v44 )
        {
          if ( (*(_DWORD *)(v38 + 16) & 2) == 0 )
          {
            v45 = v38 + 8LL * (unsigned int)(v44 - 1);
            v46 = *(_QWORD *)(v45 + 40);
            if ( (v46 & 0xC00) == 0 )
            {
              v47 = *(_QWORD *)(v45 + 40) & 0x3FFLL;
              if ( (v46 & 0xFFFFFFFFFFFFF000uLL) + ((v47 + 1) << 12) == v8 && v42 + v47 > v47 && v42 + v47 <= 0x3FF )
              {
                *(_QWORD *)(v38 + 32) += v42;
                *(_QWORD *)(v45 + 40) = (v46 + v42) ^ ((v46 + v42) ^ v46) & 0xFFFFFFFFFFFFFC00uLL;
                goto LABEL_132;
              }
              v48 = (unsigned int)(v44 - 1) + 5LL;
              v49 = *(_QWORD *)(v38 + 8 * v48);
              v50 = (unsigned __int64 *)(v38 + 8 * v48);
              if ( (v49 & 0xFFFFFFFFFFFFF000uLL) == v8 + (v42 << 12) )
              {
                v55 = v49 & 0x3FF;
                if ( v42 + v55 <= 0x3FF && v42 + v55 > v55 )
                {
                  *(_QWORD *)(v38 + 32) += v42;
                  *v50 = (v49 - (v42 << 12) + v42) ^ ((v49 - (v42 << 12) + v42) ^ (v49 - (v42 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_132;
                }
              }
            }
          }
        }
        if ( (_DWORD)v44 != *(_DWORD *)(v38 + 12) )
          break;
        if ( i )
        {
          if ( !*(_BYTE *)(v38 + 25) )
            *(_BYTE *)(v38 + 25) = 1;
          goto LABEL_132;
        }
        if ( *(_BYTE *)(v38 + 25) )
          goto LABEL_132;
        qsort((void *)(v38 + 40), *(unsigned int *)(v38 + 28), 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(v38);
      }
      while ( v42 )
      {
        v52 = 1024LL;
        if ( (unsigned __int64)(v42 - 1) <= 0x3FF )
          v52 = v42;
        *(_QWORD *)(v38 + 8 * v44 + 40) = v8 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v52 - 1) & 0x3FF;
        v53 = *(_DWORD *)(v38 + 28);
        *(_QWORD *)(v38 + 32) += v52;
        v44 = (unsigned int)(v53 + 1);
        v8 += v52 << 12;
        *(_DWORD *)(v38 + 28) = v44;
        v42 -= v52;
        if ( v42 && (_DWORD)v44 == *(_DWORD *)(v38 + 12) )
          goto LABEL_92;
      }
LABEL_132:
      LODWORD(v19) = *(_DWORD *)(v38 + 12);
      if ( *(_DWORD *)(v38 + 28) == (_DWORD)v19 )
        LOBYTE(v19) = MiFreeWsleList(v6, v38, 0LL);
    }
  }
  return v19;
}
