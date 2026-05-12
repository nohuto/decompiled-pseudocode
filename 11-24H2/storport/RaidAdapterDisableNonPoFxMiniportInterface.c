/*
 * XREFs of RaidAdapterDisableNonPoFxMiniportInterface @ 0x14005A148
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableNonPoFxMiniportInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[358].Buffer )
    return IoSetDeviceInterfaceState(a1 + 358, 0);
  return result;
}
