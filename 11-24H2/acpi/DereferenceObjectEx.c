/*
 * XREFs of DereferenceObjectEx @ 0x14000C640
 * Callers:
 *     FreeNameSpaceObjects @ 0x140003200 (FreeNameSpaceObjects.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     DerefOf @ 0x140008B10 (DerefOf.c)
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     ParseScope @ 0x14000D030 (ParseScope.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     AMLIGetFieldUnitRegionObj @ 0x140023B60 (AMLIGetFieldUnitRegionObj.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Field @ 0x140035640 (Field.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     AMLIFindNameSpaceObject @ 0x14004C134 (AMLIFindNameSpaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x140052F04 (CreateNativeNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 *     Simulator_NotifyNode @ 0x14006B334 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x14006B51C (Simulator_RemoveNode.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNamespaceOverride @ 0x14006C4CC (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006C538 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006C8CC (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006CA3C (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x14006CF34 (ParseDLMObjectInternal.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 *     DebugNotify @ 0x14006DE70 (DebugNotify.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 *     ParseNestedContext @ 0x14006F010 (ParseNestedContext.c)
 *     Alias @ 0x14006F250 (Alias.c)
 *     Load @ 0x14006F3B0 (Load.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x140003200 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(__int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects((__int64 *)a1);
  }
}
