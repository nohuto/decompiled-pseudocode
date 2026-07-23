/*
 * XREFs of RtlReleaseActivationContext @ 0x1800740B0
 * Callers:
 *     LdrpFindDllActivationContext @ 0x18002CE50 (LdrpFindDllActivationContext.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180073190 (sxsisol_SearchActCtxForDllName.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     RtlDispatchAPC @ 0x18008C740 (RtlDispatchAPC.c)
 *     RtlDeactivateActivationContext @ 0x18008C7F0 (RtlDeactivateActivationContext.c)
 *     RtlFreeActivationContextStack @ 0x1800AB5A0 (RtlFreeActivationContextStack.c)
 * Callees:
 *     RtlpFreeActivationContext @ 0x1800029B8 (RtlpFreeActivationContext.c)
 *     RtlCaptureStackBackTrace @ 0x18001C980 (RtlCaptureStackBackTrace.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax
  int v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    while ( 1 )
    {
      RefCount = ActivationContext->RefCount;
      if ( ActivationContext->RefCount == 0x7FFFFFFF )
        break;
      v3 = RefCount - 1;
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount - 1, RefCount) )
        goto LABEL_6;
    }
    v3 = 0x7FFFFFFF;
LABEL_6:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList((__int64)ActivationContext);
      else
        RtlpFreeActivationContext((__int64)ActivationContext);
    }
  }
}
