/*
 * XREFs of RtlReleaseActivationContext @ 0x18005E4D0
 * Callers:
 *     RtlFreeActivationContextStack @ 0x180004030 (RtlFreeActivationContextStack.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     RtlDispatchAPC @ 0x18006FE60 (RtlDispatchAPC.c)
 *     RtlDeactivateActivationContext @ 0x18006FF10 (RtlDeactivateActivationContext.c)
 *     LdrpFindDllActivationContext @ 0x180098000 (LdrpFindDllActivationContext.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18003C700 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180080B3C (RtlpFreeActivationContext.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == 0x7FFFFFFF )
        break;
      v3 = v2 - 1;
      if ( v2 == _InterlockedCompareExchange(a1, v2 - 1, v2) )
        goto LABEL_6;
    }
    v3 = 0x7FFFFFFF;
LABEL_6:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
