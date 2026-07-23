/*
 * XREFs of MmPrefetchPagesEx @ 0x140938DE0
 * Callers:
 *     PfpPrefetchFiles @ 0x140937198 (PfpPrefetchFiles.c)
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x140938DC0 (MmPrefetchPages.c)
 * Callees:
 *     MiGetInPageAutoBoostLock @ 0x1402770DC (MiGetInPageAutoBoostLock.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x140351AD0 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403529B8 (MiDereferenceInPageAutoBoostLock.c)
 *     MmGetCurrentProcessorColor @ 0x140407A30 (MmGetCurrentProcessorColor.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x1409399B0 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14093A5EC (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  ULONG_PTR v13; // r13
  _DWORD *v14; // rcx
  PVOID *v15; // r15
  int v16; // r13d
  int List; // eax
  int v18; // ecx
  PVOID *v19; // rbx
  __int64 v21; // rax
  _DWORD *v22; // rcx
  __int64 *v23; // rax
  int v24; // eax
  PVOID v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  PVOID *v29; // rax
  PVOID v30; // rdx
  _SLIST_ENTRY **v31; // rax
  _SLIST_ENTRY *v32; // rcx
  _SLIST_ENTRY *Next; // rdx
  __int64 v34; // [rsp+30h] [rbp-68h]
  PVOID *v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+30h] [rbp-68h]
  PVOID *v37; // [rsp+30h] [rbp-68h]
  PVOID *P; // [rsp+38h] [rbp-60h]
  _QWORD *v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+A0h] [rbp+8h]
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
  v39 = v12;
  v13 = (ULONG_PTR)v12;
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
    v14 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v6 = 2;
  if ( (_DWORD)v5 )
  {
    v15 = P;
    v34 = v5;
    v16 = (int)P;
    do
    {
      List = MiPfPrepareReadList(
               (unsigned int)*(PVOID *)((char *)v15 + a2 - (_QWORD)P),
               v16,
               a3,
               (_DWORD)Pool,
               (__int64)v11);
      if ( List < 0 )
      {
        v4 = List;
      }
      else
      {
        v18 = v6 | 1;
        if ( !*v15 )
          v18 = v6;
        v6 = v18;
      }
      v16 += 8;
      ++v15;
      --v34;
    }
    while ( v34 );
    v7 = v5;
    v9 = P;
    v13 = (ULONG_PTR)v39;
    v14 = Pool;
  }
  if ( v14 )
  {
    if ( v14[1] )
    {
      MiIssuePageHeatList((__int64)v14);
      v14 = Pool;
    }
    ExFreePoolWithTag(v14, 0);
    v14 = 0LL;
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
  v21 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v40 = v21;
    if ( (unsigned int)v21 >= (unsigned int)v5 )
      break;
    v22 = v9[v21];
    v23 = (__int64 *)&v9[v21];
    v35 = (PVOID *)v23;
    if ( !v22 )
      goto LABEL_41;
    v22[52] = 0;
    v24 = MiPfPutPagesInTransition(*v23, a3, 0, -1, (__int64)v11);
    if ( v24 < 0 )
    {
      v4 = v24;
      v27 = v40;
      do
      {
        v28 = v9[v27] == 0LL;
        v29 = &v9[v27];
        v37 = v29;
        if ( !v28 )
        {
          while ( 1 )
          {
            v30 = *v29;
            v31 = (_SLIST_ENTRY **)((char *)*v29 + 224);
            v32 = *v31;
            if ( *v31 == (_SLIST_ENTRY *)v31 )
              break;
            if ( *((_SLIST_ENTRY ***)&v32->Next + 1) != v31 || (Next = v32->Next, *(&v32->Next->Next + 1) != v32) )
              __fastfail(3u);
            *v31 = Next;
            *((_QWORD *)&Next->Next + 1) = v31;
            MiFreeInPageSupportBlock(v32);
            v29 = v37;
          }
          MiReleaseReadListResources(v30);
          ExFreePoolWithTag(*v37, 0);
          *v37 = 0LL;
        }
        v27 = v40 + 1;
        v40 = v27;
      }
      while ( (unsigned int)v27 < (unsigned int)v5 );
      break;
    }
    v25 = *v35;
    if ( *((PVOID *)*v35 + 28) == (char *)*v35 + 224 )
    {
      MiReleaseReadListResources(v25);
      ExFreePoolWithTag(*v35, 0);
      *v35 = 0LL;
      v21 = v40 + 1;
    }
    else
    {
      LOBYTE(v6) = v6 | 1;
      MiPfExecuteReadList(v25, 0LL, 0xFFFFFFFFLL, 0LL);
LABEL_41:
      v21 = v40 + 1;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v4 = 0;
    if ( (_DWORD)v5 )
    {
      v26 = v7;
      v36 = v7;
      do
      {
        if ( *v9 )
        {
          MiPfCompletePrefetchIos((ULONG_PTR *)*v9 + 28, 0LL, 0LL);
          MiReleaseReadListResources(*v9);
          v26 = v36;
        }
        ++v9;
        v36 = --v26;
      }
      while ( v26 );
    }
  }
  v14 = Pool;
LABEL_20:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
LABEL_22:
  if ( v13 )
    KeAbPostReleaseEx((ULONG_PTR)v11, v13);
  MiDereferenceInPageAutoBoostLock(v11);
  v9 = P;
  if ( (v6 & 2) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( (v6 & 4) != 0 )
    --BYTE6(CurrentThread[1].Queue);
LABEL_28:
  if ( (_DWORD)v5 )
  {
    v19 = v9;
    do
    {
      if ( *v19 )
        ExFreePoolWithTag(*v19, 0);
      ++v19;
      --v7;
    }
    while ( v7 );
  }
  ExFreePoolWithTag(v9, 0);
  return v4;
}
