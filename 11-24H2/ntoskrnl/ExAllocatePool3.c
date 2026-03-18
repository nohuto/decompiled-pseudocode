/*
 * XREFs of ExAllocatePool3 @ 0x140B746D0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140437960 (ExAllocatePoolWithTagPriority.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047BB30 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14047BDD8 (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BB520 (ExAllocateCacheAwarePushLock.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B4668 (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B5990 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B5B3C (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B5F24 (KiAllocateStaticRescheduleContext.c)
 *     KiAllocateSchedulerSubNode @ 0x1405BB0AC (KiAllocateSchedulerSubNode.c)
 *     KiAllocateForceParkingData @ 0x1405C8218 (KiAllocateForceParkingData.c)
 *     VfIoPendingEntry @ 0x140612330 (VfIoPendingEntry.c)
 *     ExpSaInitialize @ 0x14065A654 (ExpSaInitialize.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     AstLogDeviceSDDLUpdated @ 0x1409A1FE8 (AstLogDeviceSDDLUpdated.c)
 *     AstLogDeviceCreated @ 0x1409A3E34 (AstLogDeviceCreated.c)
 *     IoAllocateMiniCompletionPacket @ 0x1409A70C0 (IoAllocateMiniCompletionPacket.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D54A0 (IopAllocateMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A0AA80 (AlpcpAllocateCompletionPacketLookaside.c)
 *     KiInitializeThreadCycleTable @ 0x140B566D0 (KiInitializeThreadCycleTable.c)
 *     VmInitializeProcessor @ 0x140B6E698 (VmInitializeProcessor.c)
 *     IoVerifierCheckForSettingsChange @ 0x140B82258 (IoVerifierCheckForSettingsChange.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8C974 (ViPtInitCircularPoolTrace.c)
 *     VerifierExAllocatePool3 @ 0x140B912E0 (VerifierExAllocatePool3.c)
 *     VfKeCheckForChanges @ 0x140B95FFC (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140B96338 (VfFaultsInitPhase0.c)
 *     ViIrqlInit @ 0x140B9D5D4 (ViIrqlInit.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402ACCF0 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x14042DCF0 (MmResourcesAvailable.c)
 *     ExpSecurePoolFromHandle @ 0x1404F5EFC (ExpSecurePoolFromHandle.c)
 *     VslSecurePoolAllocate @ 0x14058E2EC (VslSecurePoolAllocate.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePool3(ULONG_PTR BugCheckParameter3, size_t a2, ULONG a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR v5; // rdi
  char v6; // r11
  ULONG_PTR v7; // rbx
  int v9; // r8d
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned int v13; // ecx
  int v14; // ecx
  volatile CCHAR v15; // al
  ULONG_PTR PoolWithQuotaTag; // rax
  unsigned int i; // edx
  __int64 *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdx
  struct _MDL *v26; // r9
  int v27; // eax
  ULONG_PTR v28; // rcx
  __int64 v29[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  ULONG_PTR v31; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0LL;
  *(_OWORD *)v29 = 0LL;
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
        v11 = v19[1];
        if ( !v11 || a5 != 1 )
          goto LABEL_3;
      }
    }
  }
  if ( v11 )
  {
    v23 = ExpSecurePoolFromHandle(*(_QWORD *)v11);
    if ( v23 )
    {
      v24 = *(_DWORD *)(v11 + 24);
      v25 = *(_QWORD *)(v11 + 16);
      v26 = *(struct _MDL **)(v11 + 8);
      v31 = 0LL;
      if ( a2 && v26 )
      {
        v27 = VslSecurePoolAllocate(*(_QWORD *)(v23 + 8), a3, a2, v26, v25, v24, &v31);
        v28 = v31;
        if ( v27 < 0 )
          v28 = 0LL;
        v5 = v28;
        if ( v28 )
          return v5;
      }
      goto LABEL_55;
    }
LABEL_3:
    v14 = -1073741811;
    goto LABEL_4;
  }
  v15 = KeNumberProcessorsGroup0[9];
  if ( (v15 & 8) == 0 )
  {
LABEL_8:
    if ( (v7 & 1) != 0 )
    {
      PoolWithQuotaTag = ExpAllocatePoolWithQuotaTag(v7, a2, a3, v12);
      goto LABEL_13;
    }
    if ( !v6 || v9 == 32 || (unsigned int)MmResourcesAvailable(v7 & 0xFFFB, a2, v9) || a2 <= 0xFE0 )
    {
      PoolWithQuotaTag = ExpAllocatePoolWithTagFromNode(v7, a2, a3, v12);
LABEL_13:
      v5 = PoolWithQuotaTag;
      if ( PoolWithQuotaTag )
        return v5;
      v14 = -1073741670;
LABEL_4:
      if ( (v7 & 0x20) != 0 )
        RtlRaiseStatus(v14);
      return v5;
    }
LABEL_55:
    v14 = -1073741670;
    goto LABEL_4;
  }
  if ( (v7 & 0x200) != 0 )
  {
    v7 &= ~0x200uLL;
    goto LABEL_8;
  }
  LODWORD(v29[1]) = 32;
  v29[0] = v29[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
  return VfHandlePoolAlloc(NonPagedPool, v7 & 0xFFFFFFFFFFFFFFFEuLL, a2, a3, LowPoolPriority, (__int64)v29, 1, retaddr);
}
