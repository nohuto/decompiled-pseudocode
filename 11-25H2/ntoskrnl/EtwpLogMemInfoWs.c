/*
 * XREFs of EtwpLogMemInfoWs @ 0x1408DF3F4
 * Callers:
 *     EtwpLogMemInfoRundown @ 0x1407A1860 (EtwpLogMemInfoRundown.c)
 *     EtwpPerfMemInfoWork @ 0x1408DFF50 (EtwpPerfMemInfoWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140324178 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     EtwpLogMemInfoWsHelper @ 0x140A511DC (EtwpLogMemInfoWsHelper.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogMemInfoWs(__int64 a1, unsigned __int64 a2)
{
  int v3; // r12d
  int v4; // r13d
  unsigned int v5; // r15d
  unsigned int *Pool2; // rax
  unsigned int *v7; // rdi
  unsigned int *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  struct _EPROCESS *NextProcess; // rsi
  __int64 v12; // r14
  unsigned int Flags; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int *v20; // rax
  unsigned int *v21; // r14
  __int64 RegionsInUse; // rax
  _ST_DATA_MGR_STATS::$94C4BE97FD0F81C7851F3B6009F5EE10 *Space; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 PagesStored; // rax
  SYSTEM_INFORMATION_CLASS v27; // [rsp+28h] [rbp-E0h]
  _DWORD *v29; // [rsp+38h] [rbp-D0h]
  _QWORD SystemInformation[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _ST_STATS v31; // [rsp+88h] [rbp-80h] BYREF
  SYSTEM_INFORMATION_CLASS SystemInformationClass[4]; // [rsp+688h] [rbp+580h]

  SystemInformationClass[0] = SystemFileCacheInformationEx;
  SystemInformationClass[1] = SystemPagedPoolInformationEx;
  SystemInformationClass[2] = SystemSystemPtesInformationEx;
  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  v3 = 4356;
  v4 = -1;
  v5 = 64;
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return;
  v8 = Pool2 + 1;
  *Pool2 = 0;
  v9 = 0;
  v29 = Pool2 + 1089;
  while ( v9 < 3 )
  {
    v27 = SystemInformationClass[v9];
    if ( ZwQuerySystemInformation(v27, SystemInformation, 0x40u, 0LL) )
      goto LABEL_27;
    *v8 = v4;
    v10 = SystemInformation[0] >> 12;
    *(_QWORD *)(v8 + 1) = SystemInformation[0] >> 12;
    *(_QWORD *)(v8 + 7) = v10;
    *(_QWORD *)(v8 + 3) = v10;
    *(_QWORD *)(v8 + 15) = 0LL;
    *(_QWORD *)(v8 + 5) = v10;
    *(_QWORD *)(v8 + 11) = 0LL;
    *(_QWORD *)(v8 + 9) = 0LL;
    *(_QWORD *)(v8 + 13) = 0LL;
    if ( v27 == SystemPagedPoolInformationEx && a2 > v10 )
    {
      *(_QWORD *)(v8 + 3) = a2;
      *(_QWORD *)(v8 + 5) = a2;
    }
    ++*v7;
    v8 += 17;
    --v4;
    ++v9;
  }
  NextProcess = (struct _EPROCESS *)PsIdleProcess;
  v12 = (__int64)v29;
  while ( 1 )
  {
    if ( !NextProcess )
    {
      EtwpLogMemInfoWsHelper(a1, v7);
      goto LABEL_27;
    }
    Flags = NextProcess->Flags;
    if ( (Flags & 0x4000000) != 0
      && ((Flags & 4) == 0
       || !NextProcess->Pcb.Header.SignalState
       || NextProcess->ActiveThreads
       || NextProcess->Pcb.ThreadListHead.Flink != &NextProcess->Pcb.ThreadListHead) )
    {
      break;
    }
LABEL_12:
    if ( NextProcess == PsIdleProcess )
      NextProcess = 0LL;
    NextProcess = (struct _EPROCESS *)PsGetNextProcess(NextProcess);
  }
  if ( v8 != (unsigned int *)v12 )
  {
LABEL_20:
    *v8 = (unsigned int)NextProcess->UniqueProcessId;
    *(_QWORD *)(v8 + 1) = NextProcess->Vm.Instance.WorkingSetLeafSize;
    *(_QWORD *)(v8 + 7) = NextProcess->Vm.Instance.WorkingSetLeafPrivateSize;
    *(_QWORD *)(v8 + 3) = NextProcess->CommitCharge;
    *(_QWORD *)(v8 + 15) = NextProcess->SharedCommitCharge;
    *(_QWORD *)(v8 + 5) = NextProcess->VirtualSize >> 12;
    v14 = *(_QWORD *)(v8 + 3);
    v15 = *(_QWORD *)(v8 + 5);
    *(_QWORD *)(v8 + 9) = 0LL;
    *(_QWORD *)(v8 + 11) = 0LL;
    if ( v14 >= v15 )
      v14 = v15;
    v16 = *(_QWORD *)(v8 + 1);
    *(_QWORD *)(v8 + 3) = v14;
    v17 = *(_QWORD *)(v8 + 7);
    if ( v17 >= v16 )
      v17 = v16;
    *(_QWORD *)(v8 + 7) = v17;
    *(_QWORD *)(v8 + 13) = NextProcess->Vm.Shared.ReleasedCommitDebt;
    memset_0(&v31, 0, sizeof(v31));
    if ( (int)SmpProcessQueryStoreStats(NextProcess, &v31) >= 0 )
    {
      v24 = 0LL;
      Space = v31.Basic.UserData.Space;
      v25 = 8LL;
      do
      {
        RegionsInUse = Space->RegionsInUse;
        ++Space;
        v24 += v31.Basic.RegionSize * RegionsInUse;
        --v25;
      }
      while ( v25 );
      PagesStored = v31.Basic.UserData.PagesStored;
      *(_QWORD *)(v8 + 9) = v24 >> 12;
      *(_QWORD *)(v8 + 11) = PagesStored;
    }
    v8 += 17;
    ++*v7;
    goto LABEL_12;
  }
  if ( v5 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(a1, v7);
    v8 = v7 + 1;
    *v7 = 0;
    goto LABEL_20;
  }
  v18 = 68 * v5;
  v19 = v3;
  v5 *= 2;
  v3 += v18;
  v20 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v21 = v20;
  if ( v20 )
  {
    memmove(v20, v7, v19);
    ExFreePoolWithTag(v7, 0);
    v7 = v21;
    v8 = &v21[17 * *v21 + 1];
    v12 = (__int64)&v21[17 * v5 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_27:
  ExFreePoolWithTag(v7, 0);
}
