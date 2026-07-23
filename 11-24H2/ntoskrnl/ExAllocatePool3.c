/*
 * XREFs of ExAllocatePool3 @ 0x140B76270
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14026E6F8 (ExpSaBinaryArrayInsert.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ExAllocatePoolWithTagPriority @ 0x14042A3E0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404B6390 (ExAllocateCacheAwarePushLock.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B15EC (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B2C58 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B2E04 (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B31EC (KiAllocateStaticRescheduleContext.c)
 *     KiAllocateSchedulerSubNode @ 0x1405B86DC (KiAllocateSchedulerSubNode.c)
 *     KiAllocateForceParkingData @ 0x1405C5948 (KiAllocateForceParkingData.c)
 *     VfIoPendingEntry @ 0x1406108F0 (VfIoPendingEntry.c)
 *     ExpSaInitialize @ 0x140658D24 (ExpSaInitialize.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 *     AstLogDeviceCreated @ 0x1408AC7C4 (AstLogDeviceCreated.c)
 *     AstLogDeviceSDDLUpdated @ 0x1408AE644 (AstLogDeviceSDDLUpdated.c)
 *     IoAllocateMiniCompletionPacket @ 0x140990590 (IoAllocateMiniCompletionPacket.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A06FB0 (AlpcpAllocateCompletionPacketLookaside.c)
 *     KiInitializeThreadCycleTable @ 0x140B58720 (KiInitializeThreadCycleTable.c)
 *     VmInitializeProcessor @ 0x140B7054C (VmInitializeProcessor.c)
 *     IoVerifierCheckForSettingsChange @ 0x140B8425C (IoVerifierCheckForSettingsChange.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8E974 (ViPtInitCircularPoolTrace.c)
 *     VerifierExAllocatePool3 @ 0x140B932E0 (VerifierExAllocatePool3.c)
 *     VfKeCheckForChanges @ 0x140B97FFC (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140B98338 (VfFaultsInitPhase0.c)
 *     ViIrqlInit @ 0x140B9F5D4 (ViIrqlInit.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x14041FA20 (MmResourcesAvailable.c)
 *     ExpSecurePoolFromHandle @ 0x1404F37FC (ExpSecurePoolFromHandle.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePool3(ULONG_PTR BugCheckParameter3, size_t a2, ULONG a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR v5; // rdi
  char v6; // r11
  ULONG_PTR v7; // rbx
  int v9; // r8d
  __int64 *v11; // r15
  __int64 v12; // r14
  unsigned int v13; // ecx
  NTSTATUS v14; // ecx
  volatile CCHAR v15; // al
  ULONG_PTR PoolWithQuotaTag; // rax
  unsigned int i; // edx
  __int64 *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0LL;
  *(_OWORD *)v23 = 0LL;
  v6 = 0;
  v7 = BugCheckParameter3;
  v9 = 16;
  v11 = 0LL;
  LODWORD(v12) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000;
  v13 = BugCheckParameter3 & 0x1C0;
  if ( !v13 || ((v13 - 1LL) & v13) != 0 || (v7 & 0xFFFFF000) != 0 || (v7 & 0x10) != 0 || (v7 & 0x800) != 0 || !a3 )
    goto LABEL_3;
  for ( i = 0; i < a5; ++i )
  {
    v19 = (__int64 *)(a4 + 16LL * i);
    v20 = *v19;
    v21 = (unsigned __int8)*v19;
    if ( v21 == 1 )
    {
      if ( (v7 & 1) != 0 )
      {
        if ( (v20 & 0x100) == 0 )
          goto LABEL_3;
      }
      else
      {
        v9 = *((_DWORD *)v19 + 2);
        if ( (v9 & 0xFFFFFFCF) != 0 || v9 == 48 )
          goto LABEL_3;
        v6 = 1;
      }
    }
    else
    {
      v22 = v21 - 2;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v12 = *((unsigned int *)v19 + 2);
          if ( ((_DWORD)v19[1] & 0x7FFFFFFFu) > (unsigned __int16)KeNumberNodes || v12 != v19[1] || (v7 & 0x40) == 0 )
            goto LABEL_3;
        }
        else if ( (v20 & 0x100) == 0 )
        {
          goto LABEL_3;
        }
      }
      else
      {
        if ( v7 != 64 )
          goto LABEL_3;
        v11 = (__int64 *)v19[1];
        if ( !v11 || a5 != 1 )
          goto LABEL_3;
      }
    }
  }
  if ( v11 )
  {
    if ( ExpSecurePoolFromHandle(*v11) )
    {
      v14 = -1073741670;
LABEL_4:
      if ( (v7 & 0x20) != 0 )
        RtlRaiseStatus(v14);
      return v5;
    }
LABEL_3:
    v14 = -1073741811;
    goto LABEL_4;
  }
  v15 = KeNumberProcessorsGroup0[9];
  if ( (v15 & 8) == 0 )
    goto LABEL_8;
  if ( (v7 & 0x200) != 0 )
  {
    v7 &= ~0x200uLL;
LABEL_8:
    if ( (v7 & 1) != 0 )
    {
      PoolWithQuotaTag = ExpAllocatePoolWithQuotaTag(v7, a2, a3, v12);
    }
    else
    {
      if ( v6 && v9 != 32 && !(unsigned int)MmResourcesAvailable(v7 & 0xFFFB, a2, v9) && a2 > 0xFE0 )
      {
LABEL_27:
        v14 = -1073741670;
        goto LABEL_4;
      }
      PoolWithQuotaTag = ExpAllocatePoolWithTagFromNode(v7, a2, a3, v12);
    }
    v5 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
      return v5;
    goto LABEL_27;
  }
  LODWORD(v23[1]) = 32;
  v23[0] = v23[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
  return VfHandlePoolAlloc(NonPagedPool, v7 & 0xFFFFFFFFFFFFFFFEuLL, a2, a3, LowPoolPriority, (__int64)v23, 1, retaddr);
}
