/*
 * XREFs of MmPrefetchPagesEx @ 0x1409C8D00
 * Callers:
 *     PfpPrefetchFiles @ 0x1409C70B8 (PfpPrefetchFiles.c)
 *     PfSnPrefetchSections @ 0x1409C8054 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x1409C8848 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x1409C8CE0 (MmPrefetchPages.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     MiGetInPageAutoBoostLock @ 0x1402D9B38 (MiGetInPageAutoBoostLock.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x14037991C (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x14037AA08 (MiDereferenceInPageAutoBoostLock.c)
 *     MmGetCurrentProcessorColor @ 0x14041A410 (MmGetCurrentProcessorColor.c)
 *     MiInitializePageHeatList @ 0x140440440 (MiInitializePageHeatList.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x1409C985C (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1409CA528 (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v12; // rax
  ULONG_PTR v13; // r13
  _DWORD *v14; // rcx
  PVOID *v15; // r15
  int v16; // r13d
  int List; // eax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID *v22; // rbx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  __int64 *v26; // rax
  int v27; // eax
  PVOID v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf
  PVOID *v32; // rax
  PVOID v33; // rdx
  _SLIST_ENTRY **v34; // rax
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY *Next; // rdx
  __int64 v37; // [rsp+30h] [rbp-68h]
  PVOID *v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+30h] [rbp-68h]
  PVOID *v40; // [rsp+30h] [rbp-68h]
  PVOID *P; // [rsp+38h] [rbp-60h]
  __int64 *v42; // [rsp+48h] [rbp-50h]
  unsigned int v43; // [rsp+A0h] [rbp+8h]
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
  v42 = v12;
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
    v37 = v5;
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
      --v37;
    }
    while ( v37 );
    v7 = v5;
    v9 = P;
    v13 = (ULONG_PTR)v42;
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
  v24 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v43 = v24;
    if ( (unsigned int)v24 >= (unsigned int)v5 )
      break;
    v25 = v9[v24];
    v26 = (__int64 *)&v9[v24];
    v38 = (PVOID *)v26;
    if ( !v25 )
      goto LABEL_41;
    v25[52] = 0;
    v27 = MiPfPutPagesInTransition(*v26, a3, 0, -1, (__int64)v11);
    if ( v27 < 0 )
    {
      v4 = v27;
      v30 = v43;
      do
      {
        v31 = v9[v30] == 0LL;
        v32 = &v9[v30];
        v40 = v32;
        if ( !v31 )
        {
          while ( 1 )
          {
            v33 = *v32;
            v34 = (_SLIST_ENTRY **)((char *)*v32 + 224);
            v35 = *v34;
            if ( *v34 == (_SLIST_ENTRY *)v34 )
              break;
            if ( *((_SLIST_ENTRY ***)&v35->Next + 1) != v34 || (Next = v35->Next, *(&v35->Next->Next + 1) != v35) )
              __fastfail(3u);
            *v34 = Next;
            *((_QWORD *)&Next->Next + 1) = v34;
            MiFreeInPageSupportBlock(v35);
            v32 = v40;
          }
          MiReleaseReadListResources(v33);
          ExFreePoolWithTag(*v40, 0);
          *v40 = 0LL;
        }
        v30 = v43 + 1;
        v43 = v30;
      }
      while ( (unsigned int)v30 < (unsigned int)v5 );
      break;
    }
    v28 = *v38;
    if ( *((PVOID *)*v38 + 28) == (char *)*v38 + 224 )
    {
      MiReleaseReadListResources(v28);
      ExFreePoolWithTag(*v38, 0);
      *v38 = 0LL;
      v24 = v43 + 1;
    }
    else
    {
      LOBYTE(v6) = v6 | 1;
      MiPfExecuteReadList(v28, 0LL, 0xFFFFFFFFLL, 0LL);
LABEL_41:
      v24 = v43 + 1;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v4 = 0;
    if ( (_DWORD)v5 )
    {
      v29 = v7;
      v39 = v7;
      do
      {
        if ( *v9 )
        {
          MiPfCompletePrefetchIos((ULONG_PTR *)*v9 + 28, 0LL, 0LL);
          MiReleaseReadListResources(*v9);
          v29 = v39;
        }
        ++v9;
        v39 = --v29;
      }
      while ( v29 );
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19, v20, v21);
  if ( (v6 & 4) != 0 )
    --BYTE6(CurrentThread[1].Queue);
LABEL_28:
  if ( (_DWORD)v5 )
  {
    v22 = v9;
    do
    {
      if ( *v22 )
        ExFreePoolWithTag(*v22, 0);
      ++v22;
      --v7;
    }
    while ( v7 );
  }
  ExFreePoolWithTag(v9, 0);
  return v4;
}
