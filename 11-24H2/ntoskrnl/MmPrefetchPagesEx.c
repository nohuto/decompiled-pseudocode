/*
 * XREFs of MmPrefetchPagesEx @ 0x140955430
 * Callers:
 *     PfpPrefetchFiles @ 0x1409537E8 (PfpPrefetchFiles.c)
 *     PfSnPrefetchSections @ 0x140954784 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x140954F78 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x140955410 (MmPrefetchPages.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiPfCompletePrefetchIos @ 0x1402A9824 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1402AA708 (MiDereferenceInPageAutoBoostLock.c)
 *     MiGetInPageAutoBoostLock @ 0x1402ABE68 (MiGetInPageAutoBoostLock.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MmGetCurrentProcessorColor @ 0x140417C80 (MmGetCurrentProcessorColor.c)
 *     MiInitializePageHeatList @ 0x14043F8A0 (MiInitializePageHeatList.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140956C3C (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // ebp
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // r15
  int CurrentProcessorColor; // eax
  PVOID *v9; // rsi
  volatile signed __int64 *v10; // rax
  volatile signed __int64 *v11; // r14
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // r13
  _DWORD *v15; // rcx
  PVOID *v16; // r15
  int v17; // r13d
  int List; // eax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID *v23; // rbx
  __int64 v25; // rax
  _DWORD *v26; // rcx
  __int64 *v27; // rax
  int v28; // eax
  PVOID v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // zf
  PVOID *v33; // rax
  PVOID v34; // rdx
  struct _SLIST_ENTRY **v35; // rax
  struct _SLIST_ENTRY *v36; // rcx
  _SLIST_ENTRY *Next; // rdx
  __int64 v38; // [rsp+30h] [rbp-68h]
  PVOID *v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+30h] [rbp-68h]
  PVOID *v41; // [rsp+30h] [rbp-68h]
  PVOID *P; // [rsp+38h] [rbp-60h]
  _QWORD *v43; // [rsp+48h] [rbp-50h]
  unsigned int v44; // [rsp+A0h] [rbp+8h]
  _DWORD *Pool; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = a1;
  LOBYTE(v6) = 0;
  Pool = 0LL;
  if ( a1 > 0x1FFFFFFF )
    return (unsigned int)-1073741585;
  v7 = a1;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  P = (PVOID *)ExAllocatePoolMm(0x40uLL, 8 * v5, 1817341261, CurrentProcessorColor | 0x80000000);
  v9 = P;
  if ( !P )
    return (unsigned int)-1073741670;
  v10 = MiGetInPageAutoBoostLock();
  v11 = v10;
  if ( !v10 )
  {
    v4 = -1073741670;
    goto LABEL_28;
  }
  v12 = KeAbPreAcquire((__int64)v10, 0LL);
  v43 = v12;
  v14 = (ULONG_PTR)v12;
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    Pool = (_DWORD *)MiAllocatePool(0x42uLL, 0x1008uLL, 1818782029);
    if ( !Pool )
    {
      v4 = -1073741670;
      goto LABEL_22;
    }
    MiInitializePageHeatList((__int64)Pool, 1, 1, 511);
  }
  else
  {
    v15 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v6 = 2;
  if ( (_DWORD)v5 )
  {
    v16 = P;
    v38 = v5;
    v17 = (int)P;
    do
    {
      List = MiPfPrepareReadList(
               (unsigned int)*(PVOID *)((char *)v16 + a2 - (_QWORD)P),
               v17,
               a3,
               (_DWORD)Pool,
               (__int64)v11);
      if ( List < 0 )
      {
        v4 = List;
      }
      else
      {
        v19 = v6 | 1;
        if ( !*v16 )
          v19 = v6;
        v6 = v19;
      }
      v17 += 8;
      ++v16;
      --v38;
    }
    while ( v38 );
    v7 = v5;
    v9 = P;
    v14 = (ULONG_PTR)v43;
    v15 = Pool;
  }
  if ( v15 )
  {
    if ( v15[1] )
    {
      MiIssuePageHeatList(v15, v13);
      v15 = Pool;
    }
    ExFreePoolWithTag(v15, 0);
    v15 = 0LL;
    Pool = 0LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( !v4 )
      v4 = 0;
    goto LABEL_20;
  }
  ++BYTE6(CurrentThread[1].Queue);
  LOBYTE(v6) = v6 & 0xFA | 4;
  v25 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v44 = v25;
    if ( (unsigned int)v25 >= (unsigned int)v5 )
      break;
    v26 = v9[v25];
    v27 = (__int64 *)&v9[v25];
    v39 = (PVOID *)v27;
    if ( !v26 )
      goto LABEL_41;
    v26[52] = 0;
    v28 = MiPfPutPagesInTransition(*v27, a3, 0, -1, v11);
    if ( v28 < 0 )
    {
      v4 = v28;
      v31 = v44;
      do
      {
        v32 = v9[v31] == 0LL;
        v33 = &v9[v31];
        v41 = v33;
        if ( !v32 )
        {
          while ( 1 )
          {
            v34 = *v33;
            v35 = (struct _SLIST_ENTRY **)((char *)*v33 + 224);
            v36 = *v35;
            if ( *v35 == (struct _SLIST_ENTRY *)v35 )
              break;
            if ( *((struct _SLIST_ENTRY ***)&v36->Next + 1) != v35 || (Next = v36->Next, *(&v36->Next->Next + 1) != v36) )
              __fastfail(3u);
            *v35 = Next;
            *((_QWORD *)&Next->Next + 1) = v35;
            MiFreeInPageSupportBlock(v36);
            v33 = v41;
          }
          MiReleaseReadListResources(v34);
          ExFreePoolWithTag(*v41, 0);
          *v41 = 0LL;
        }
        v31 = v44 + 1;
        v44 = v31;
      }
      while ( (unsigned int)v31 < (unsigned int)v5 );
      break;
    }
    v29 = *v39;
    if ( *((PVOID *)*v39 + 28) == (char *)*v39 + 224 )
    {
      MiReleaseReadListResources(v29);
      ExFreePoolWithTag(*v39, 0);
      *v39 = 0LL;
      v25 = v44 + 1;
    }
    else
    {
      LOBYTE(v6) = v6 | 1;
      MiPfExecuteReadList(v29, 0LL, 0xFFFFFFFFLL, 0LL);
LABEL_41:
      v25 = v44 + 1;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v4 = 0;
    if ( (_DWORD)v5 )
    {
      v30 = v7;
      v40 = v7;
      do
      {
        if ( *v9 )
        {
          MiPfCompletePrefetchIos((ULONG_PTR *)*v9 + 28, 0LL, 0LL);
          MiReleaseReadListResources(*v9);
          v30 = v40;
        }
        ++v9;
        v40 = --v30;
      }
      while ( v30 );
    }
  }
  v15 = Pool;
LABEL_20:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
LABEL_22:
  if ( v14 )
    KeAbPostReleaseEx((ULONG_PTR)v11, v14);
  MiDereferenceInPageAutoBoostLock(v11);
  v9 = P;
  if ( (v6 & 2) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
  if ( (v6 & 4) != 0 )
    --BYTE6(CurrentThread[1].Queue);
LABEL_28:
  if ( (_DWORD)v5 )
  {
    v23 = v9;
    do
    {
      if ( *v23 )
        ExFreePoolWithTag(*v23, 0);
      ++v23;
      --v7;
    }
    while ( v7 );
  }
  ExFreePoolWithTag(v9, 0);
  return v4;
}
