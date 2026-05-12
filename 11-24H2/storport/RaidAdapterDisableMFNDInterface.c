/*
 * XREFs of RaidAdapterDisableMFNDInterface @ 0x14005A110
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableMFNDInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(struct _UNICODE_STRING **)(a1 + 6160);
  if ( v1 )
  {
    if ( v1[1].Buffer )
      return IoSetDeviceInterfaceState(v1 + 1, 0);
  }
  return result;
}
