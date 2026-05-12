/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x14005A1EC
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5552) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5544), 0);
  return result;
}
