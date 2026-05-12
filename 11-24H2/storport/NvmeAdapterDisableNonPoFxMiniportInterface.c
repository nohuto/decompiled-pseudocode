/*
 * XREFs of NvmeAdapterDisableNonPoFxMiniportInterface @ 0x14012E604
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019B714 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NvmeAdapterDisableNonPoFxMiniportInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(struct _UNICODE_STRING **)(a1 + 160);
  if ( v1[21].Buffer )
    return IoSetDeviceInterfaceState(v1 + 21, 0);
  return result;
}
