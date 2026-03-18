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
  __int64 v22; // rax
  char *v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  _DWORD *v29; // [rsp+38h] [rbp-D0h]
  _QWORD v30[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v31[12]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v32; // [rsp+94h] [rbp-74h]
  unsigned int v33; // [rsp+A8h] [rbp-60h]
  char v34; // [rsp+B4h] [rbp-54h] BYREF
  _DWORD v35[4]; // [rsp+688h] [rbp+580h]

  v35[0] = 81;
  v35[1] = 119;
  v35[2] = 120;
  memset_0(v30, 0, sizeof(v30));
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
    v27 = v35[v9];
    if ( (unsigned int)ZwQuerySystemInformation(v27, (__int64)v30) )
      goto LABEL_27;
    *v8 = v4;
    v10 = v30[0] >> 12;
    *(_QWORD *)(v8 + 1) = v30[0] >> 12;
    *(_QWORD *)(v8 + 7) = v10;
    *(_QWORD *)(v8 + 3) = v10;
    *(_QWORD *)(v8 + 15) = 0LL;
    *(_QWORD *)(v8 + 5) = v10;
    *(_QWORD *)(v8 + 11) = 0LL;
    *(_QWORD *)(v8 + 9) = 0LL;
    *(_QWORD *)(v8 + 13) = 0LL;
    if ( v27 == 119 && a2 > v10 )
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
    memset_0(v31, 0, 0x600uLL);
    if ( (int)SmpProcessQueryStoreStats(NextProcess, (struct _ST_STATS *)v31) >= 0 )
    {
      v24 = 0LL;
      v23 = &v34;
      v25 = 8LL;
      do
      {
        v22 = *(unsigned int *)v23;
        v23 += 8;
        v24 += v32 * v22;
        --v25;
      }
      while ( v25 );
      v26 = v33;
      *(_QWORD *)(v8 + 9) = v24 >> 12;
      *(_QWORD *)(v8 + 11) = v26;
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
