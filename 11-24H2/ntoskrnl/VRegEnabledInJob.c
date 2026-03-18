/*
 * XREFs of VRegEnabledInJob @ 0x1409296E0
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408293FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpIoctlDeviceDispatch @ 0x140929280 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1409294C0 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092974C (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403F0070 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetParentSilo @ 0x140A59700 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = PsGetCurrentSilo();
  v3 = PdcCreateWatchdogAroundClientCall();
  while ( 1 )
  {
    if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
      return 0LL;
    if ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, VrpSiloContextSlot, a1) >= 0 )
      break;
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo);
  }
  return 1LL;
}
