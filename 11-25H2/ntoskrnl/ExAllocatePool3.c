/*
 * XREFs of ExAllocatePool3 @ 0x140B64430
 * Callers:
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     ExAllocatePoolWithTagPriority @ 0x1404396F0 (ExAllocatePoolWithTagPriority.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047B354 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14047B5FC (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BC320 (ExAllocateCacheAwarePushLock.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B0CBC (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B1AC4 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B1C70 (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B2058 (KiAllocateStaticRescheduleContext.c)
 *     KiAllocateSchedulerSubNode @ 0x1405B721C (KiAllocateSchedulerSubNode.c)
 *     KiAllocateForceParkingData @ 0x1405C3FF8 (KiAllocateForceParkingData.c)
 *     VfIoPendingEntry @ 0x140606370 (VfIoPendingEntry.c)
 *     ExpSaInitialize @ 0x14064E6CC (ExpSaInitialize.c)
 *     AstLogDeviceSDDLUpdated @ 0x14099D0F8 (AstLogDeviceSDDLUpdated.c)
 *     AstLogDeviceCreated @ 0x14099EF48 (AstLogDeviceCreated.c)
 *     IoAllocateMiniCompletionPacket @ 0x1409A6B80 (IoAllocateMiniCompletionPacket.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A07AF4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     KiInitializeThreadCycleTable @ 0x140B4672C (KiInitializeThreadCycleTable.c)
 *     VmInitializeProcessor @ 0x140B5F5EC (VmInitializeProcessor.c)
 *     IoVerifierCheckForSettingsChange @ 0x140B72258 (IoVerifierCheckForSettingsChange.c)
 *     ViPtInitCircularPoolTrace @ 0x140B7C994 (ViPtInitCircularPoolTrace.c)
 *     VerifierExAllocatePool3 @ 0x140B81300 (VerifierExAllocatePool3.c)
 *     VfKeCheckForChanges @ 0x140B8601C (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140B86358 (VfFaultsInitPhase0.c)
 *     ViIrqlInit @ 0x140B8D5F4 (ViIrqlInit.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x140433160 (MmResourcesAvailable.c)
 *     ExpSecurePoolFromHandle @ 0x1404F5968 (ExpSecurePoolFromHandle.c)
 *     VslSecurePoolAllocate @ 0x14058AC4C (VslSecurePoolAllocate.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B62670 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
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
  NTSTATUS v14; // ecx
  ULONG_PTR PoolWithQuotaTag; // rax
  unsigned int i; // edx
  __int64 *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rdx
  struct _MDL *v25; // r9
  int v26; // eax
  ULONG_PTR v27; // rcx
  __int64 v28[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  ULONG_PTR v30; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0LL;
  *(_OWORD *)v28 = 0LL;
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
    v18 = (__int64 *)(a4 + 16LL * i);
    v19 = *v18;
    v20 = (unsigned __int8)*v18;
    if ( v20 == 1 )
    {
      if ( (v7 & 1) != 0 )
      {
        if ( (v19 & 0x100) == 0 )
          goto LABEL_3;
      }
      else
      {
        v9 = *((_DWORD *)v18 + 2);
        if ( (v9 & 0xFFFFFFCF) != 0 || v9 == 48 )
          goto LABEL_3;
        v6 = 1;
      }
    }
    else
    {
      v21 = v20 - 2;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v12 = *((unsigned int *)v18 + 2);
          if ( ((_DWORD)v18[1] & 0x7FFFFFFFu) > (unsigned __int16)KeNumberNodes || v12 != v18[1] || (v7 & 0x40) == 0 )
            goto LABEL_3;
        }
        else if ( (v19 & 0x100) == 0 )
        {
          goto LABEL_3;
        }
      }
      else
      {
        if ( v7 != 64 )
          goto LABEL_3;
        v11 = v18[1];
        if ( !v11 || a5 != 1 )
          goto LABEL_3;
      }
    }
  }
  if ( v11 )
  {
    v22 = ExpSecurePoolFromHandle(*(_QWORD *)v11);
    if ( v22 )
    {
      v23 = *(_DWORD *)(v11 + 24);
      v24 = *(_QWORD *)(v11 + 16);
      v25 = *(struct _MDL **)(v11 + 8);
      v30 = 0LL;
      if ( a2 && v25 )
      {
        v26 = VslSecurePoolAllocate(*(_QWORD *)(v22 + 8), a3, a2, v25, v24, v23, &v30);
        v27 = v30;
        if ( v26 < 0 )
          v27 = 0LL;
        v5 = v27;
        if ( v27 )
          return v5;
      }
      goto LABEL_55;
    }
LABEL_3:
    v14 = -1073741811;
    goto LABEL_4;
  }
  if ( (ExpPoolFlags & 8) == 0 )
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
  LODWORD(v28[1]) = 32;
  v28[0] = v28[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
  return VfHandlePoolAlloc(NonPagedPool, v7 & 0xFFFFFFFFFFFFFFFEuLL, a2, a3, LowPoolPriority, (__int64)v28, 1, retaddr);
}
