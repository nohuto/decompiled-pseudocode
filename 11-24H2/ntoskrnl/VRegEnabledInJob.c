/*
 * XREFs of VRegEnabledInJob @ 0x14092B820
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpIoctlDeviceDispatch @ 0x14092B3C0 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x14092B600 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetParentSilo @ 0x140A50EA0 (PsGetParentSilo.c)
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
