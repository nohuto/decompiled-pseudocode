/*
 * XREFs of StorGetNVMeIdentifyInfo @ 0x1401B8EB4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B8B44 (StorAdapterNVMeEnumerateZNS.c)
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1401B92F0 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 * Callees:
 *     RaidBuildMdlForXrb @ 0x14000EB30 (RaidBuildMdlForXrb.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x140036888 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14003D864 (RaidXrbSetCompletionRoutine.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorGetNVMeIdentifyInfo(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, char a7, void *a8)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // ecx
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 Srb; // rdi
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  int v21; // esi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  unsigned int LockArray_high; // eax
  char v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v8 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !a8 )
    return 3221225485LL;
  if ( !a1 )
    v9 = *(_QWORD *)(a2 + 24);
  if ( *(int *)(*(_QWORD *)(v9 + 608) + 184LL) >= 0 )
    return 3221225659LL;
  v11 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 1314275652 )
  {
    v12 = v9 + 274;
  }
  else
  {
    v12 = v9 + 482;
    if ( v11 != 1094997074 )
      v12 = 98LL;
  }
  v13 = 316LL;
  v14 = 316LL;
  if ( v11 != 1314275652 )
    v14 = 524LL;
  v15 = (*(_DWORD *)(v14 + v9) + 7) & 0xFFFFFFF8;
  if ( a4 )
  {
    if ( a4 != 1 && a4 != 2 && a4 != 3 && a4 != 5 )
      return 3221225488LL;
    memset_0(a8, 0, 0x1000uLL);
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(v9 + 8), 0xAu, *(_BYTE *)v12, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v15 + 1184, v17, (_QWORD *)v9);
  v20 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v8 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
    v21 = RaidBuildMdlForXrb(v8, a8, 0x1000u);
    if ( v21 >= 0 )
    {
      v22 = v20 + 1184;
      v23 = *(_DWORD *)v9;
      if ( *(_BYTE *)(Srb + 2) == 40 )
      {
        if ( v23 != 1314275652 )
          v13 = 524LL;
        if ( ((*(_DWORD *)(v13 + v9) + 7) & 0xFFFFFFF8) != 0 )
          *(_QWORD *)(Srb + 104) = v22;
      }
      else
      {
        if ( v23 != 1314275652 )
          v13 = 524LL;
        if ( ((*(_DWORD *)(v13 + v9) + 7) & 0xFFFFFFF8) != 0 )
          *(_QWORD *)(Srb + 56) = v22;
      }
      *(_BYTE *)(v8 + 17) |= 8u;
      if ( *(_BYTE *)v12 == 1 )
      {
        v24 = Srb + *(unsigned int *)(Srb + 120);
        *(_DWORD *)(Srb + 20) = 10;
        *(_DWORD *)(Srb + 24) = 322;
        v10 = Srb;
        *(_BYTE *)(Srb + 3) = 0;
        if ( *(_DWORD *)v9 == 1094997074 && (*(_BYTE *)(v9 + 111) & 4) != 0 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(v9 + 6168) + 8LL * LockArray_high), 1u);
          v25 = **(_QWORD **)(*(_QWORD *)(v9 + 6168) + 8LL * LockArray_high);
          *(_DWORD *)(Srb + 44) = HIDWORD(v25);
        }
        else
        {
          LODWORD(v25) = -1;
        }
        *(_DWORD *)(Srb + 32) = v25;
        *(_QWORD *)(Srb + 64) = a8;
        *(_DWORD *)(Srb + 60) = 4096;
        *(_DWORD *)(Srb + 40) = *(_DWORD *)(v9 + 4124);
        *(_QWORD *)(Srb + 96) = v8;
        *(_QWORD *)(v8 + 168) = Srb;
        *(_QWORD *)(v8 + 184) = *(_QWORD *)(Srb + 64);
        *(_QWORD *)(v8 + 176) = *(_QWORD *)(Srb + 96);
        *(_DWORD *)(v24 + 20) = a3;
        *(_BYTE *)(v24 + 56) = v30;
        *(_BYTE *)(v24 + 63) = a7;
        *(_BYTE *)(v24 + 80) = 1;
        *(_WORD *)(v24 + 82) = 1;
        *(_BYTE *)(v24 + 16) = 6;
        *(_DWORD *)(v24 + 58) = 0;
        if ( *(_BYTE *)(Srb + 2) == 40 )
          *(_WORD *)(Srb + 38) = 32;
        else
          *(_BYTE *)(Srb + 9) = 32;
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
        if ( *(_QWORD *)(v9 + 4960) )
          RaidAdapterPoFxActivateComponent(v9, 0LL, 1LL);
        if ( *(_BYTE *)(v9 + 4370) )
          v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v9, (_QWORD *)v8);
        else
          v26 = RaidAdapterPostScatterGatherExecute(v9, v8);
        v21 = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
          v21 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
        }
        if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(v8 + 748));
          *(_BYTE *)(v8 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(v9 + 4960) )
          RaidAdapterPoFxIdleComponent(v9, 0LL, 0LL);
      }
      else
      {
        v21 = -1073741637;
      }
    }
  }
  else
  {
    v21 = -1073741801;
    if ( !ContiguousIoResources )
      goto LABEL_46;
  }
  RaidXrbDeallocateResources(v8, 0);
  StorFreeContiguousIoResources(v9, v20);
LABEL_46:
  if ( Srb )
  {
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( !v10 )
        v10 = Srb;
      *(_QWORD *)(v10 + 80) = 0LL;
      *(_QWORD *)(v10 + 104) = 0LL;
    }
    RaidFreeSrb((void *)Srb);
  }
  return (unsigned int)v21;
}
