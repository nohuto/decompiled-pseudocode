/*
 * XREFs of IopUpdateMinidumpContext @ 0x140592430
 * Callers:
 *     IopCollectTriageDumpData @ 0x140590828 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059287C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14059D638 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058FF74 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopGetMaxValidMemorySize @ 0x14059166C (IopGetMaxValidMemorySize.c)
 */

char __fastcall IopUpdateMinidumpContext(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        __int64 a8,
        char a9)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v10; // r14
  __int64 v12; // rbp
  int v13; // esi
  __int64 v14; // rdi
  char *v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned int v17; // edx
  unsigned int MaxValidMemorySize; // eax
  __int64 v19; // r15
  char *IsrStack; // rdx
  unsigned int v21; // edx
  unsigned int v22; // eax
  char *v23; // rsi
  unsigned __int64 *v24; // rbp
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned int v27; // esi
  unsigned int v28; // eax
  __int64 Prcb; // rbp
  _QWORD *v30; // r14
  _QWORD *i; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  void *DpcLog; // rcx
  void *DpcLogBufferSize; // rdx
  PVOID *j; // rbx
  _OWORD *v37; // rax
  __int64 v38; // rcx
  __int128 v39; // xmm1
  char v44; // [rsp+A8h] [rbp+40h]

  CurrentPrcb = KeGetCurrentPrcb();
  v44 = 0;
  v10 = a4;
  v12 = a2;
  v13 = a1;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v14 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = a3[43];
        a6[31] = a3[45];
        a6[19] = a3[48];
      }
      goto LABEL_5;
    }
LABEL_8:
    v14 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v14 = a5;
LABEL_5:
  v44 = 1;
LABEL_9:
  v15 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  v16 = *(_QWORD *)(v14 + 152);
  if ( (unsigned __int64)&v15[-(unsigned int)KeKernelStackSize] <= v16 && v16 < (unsigned __int64)v15 )
  {
    if ( (unsigned __int64)&v15[-v16] >= 0x7FFF )
      v17 = 0x7FFF;
    else
      v17 = (_DWORD)v15 - v16;
    MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(v14 + 152), v17);
    IoAddTriageDumpDataBlock(v16, (PVOID)MaxValidMemorySize);
  }
  v19 = 2LL;
  if ( CurrentPrcb->DebuggerSavedIRQL > 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    if ( (unsigned __int64)&IsrStack[-(unsigned int)KeIsrStackSize] <= v16 && v16 < (unsigned __int64)IsrStack )
    {
      if ( (unsigned __int64)&IsrStack[-v16] >= 0x7FFF )
        v21 = 0x7FFF;
      else
        v21 = (_DWORD)IsrStack - v16;
      v22 = IopGetMaxValidMemorySize(v16, v21);
      IoAddTriageDumpDataBlock(v16, (PVOID)v22);
    }
  }
  if ( v13 == 307 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && a7 != CurrentPrcb->IdleThread )
    {
      v23 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v24 = (unsigned __int64 *)((char *)KeGetPcr()->Prcb.IsrStack - 8);
      v25 = (unsigned __int64)&v23[-(unsigned int)KeKernelStackSize];
      if ( IopIsAddressRangeValid((__int64)v24, 8LL) )
      {
        v26 = *v24;
        if ( IopIsAddressRangeValid(v26, 8LL) )
        {
          if ( v25 <= v26 && v26 < (unsigned __int64)v23 )
            v25 = v26;
        }
      }
      if ( (unsigned __int64)&v23[-v25] >= 0x7FFF )
        v27 = 0x7FFF;
      else
        v27 = (_DWORD)v23 - v25;
      v28 = IopGetMaxValidMemorySize(v25, v27);
      IoAddTriageDumpDataBlock(v25, (PVOID)v28);
    }
    Prcb = KeGetPrcb(a7->NextProcessor);
    v30 = (_QWORD *)(Prcb + 14400);
    do
    {
      for ( i = (_QWORD *)*v30; i; i = (_QWORD *)*i )
      {
        IoAddTriageDumpDataBlock((_DWORD)i - 8, (PVOID)0x40);
        v32 = i[6];
        if ( v32 != 1 )
          IoAddTriageDumpDataBlock(v32, (PVOID)0x60);
      }
      v30 += 6;
      --v19;
    }
    while ( v19 );
    v33 = *(_QWORD *)(Prcb + 36520);
    if ( v33 && v33 != *(_QWORD *)(Prcb + 36528) )
      IoAddTriageDumpDataBlock(v33, (PVOID)*(unsigned int *)(Prcb + 14556));
    v13 = a1;
    v12 = a2;
    v10 = a4;
  }
  DpcLog = CurrentPrcb->DpcLog;
  if ( DpcLog )
  {
    DpcLogBufferSize = (void *)CurrentPrcb->DpcLogBufferSize;
    if ( (_DWORD)DpcLogBufferSize )
      IoAddTriageDumpDataBlock((ULONG)DpcLog, DpcLogBufferSize);
  }
  for ( j = (PVOID *)PopThermal; j != &PopThermal; j = (PVOID *)*j )
    IoAddTriageDumpDataBlock((ULONG)j, (PVOID)0x420);
  LOBYTE(v37) = IopAddBugcheckTriageDataFromParameters(v13, v12, (__int64)a3, v10, a5);
  if ( v44 )
  {
    LOBYTE(v37) = CrashdmpDumpBlock;
    if ( CrashdmpDumpBlock )
    {
      if ( a9 )
      {
        *(_DWORD *)(CrashdmpDumpBlock + 24) |= 0x10000000u;
        v38 = 9LL;
        v37 = (_OWORD *)(CrashdmpDumpBlock + 64);
        do
        {
          *v37 = *(_OWORD *)v14;
          v37[1] = *(_OWORD *)(v14 + 16);
          v37[2] = *(_OWORD *)(v14 + 32);
          v37[3] = *(_OWORD *)(v14 + 48);
          v37[4] = *(_OWORD *)(v14 + 64);
          v37[5] = *(_OWORD *)(v14 + 80);
          v37[6] = *(_OWORD *)(v14 + 96);
          v37 += 8;
          v39 = *(_OWORD *)(v14 + 112);
          v14 += 128LL;
          *(v37 - 1) = v39;
          --v38;
        }
        while ( v38 );
        *v37 = *(_OWORD *)v14;
        v37[1] = *(_OWORD *)(v14 + 16);
        v37[2] = *(_OWORD *)(v14 + 32);
        v37[3] = *(_OWORD *)(v14 + 48);
        v37[4] = *(_OWORD *)(v14 + 64);
      }
    }
  }
  return (char)v37;
}
