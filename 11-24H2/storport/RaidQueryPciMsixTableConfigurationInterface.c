/*
 * XREFs of RaidQueryPciMsixTableConfigurationInterface @ 0x14008DD04
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaQueryInterface @ 0x14003C01C (RaQueryInterface.c)
 */

__int64 __fastcall RaidQueryPciMsixTableConfigurationInterface(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    v1 = a1 + 5920;
    return RaQueryInterface(
             *(PDEVICE_OBJECT *)(a1 + 24),
             (unsigned __int64)&GUID_MSIX_TABLE_CONFIG_INTERFACE,
             0x48u,
             1u,
             v1);
  }
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v1 = *(_QWORD *)(a1 + 576) + 72LL;
    return RaQueryInterface(
             *(PDEVICE_OBJECT *)(a1 + 24),
             (unsigned __int64)&GUID_MSIX_TABLE_CONFIG_INTERFACE,
             0x48u,
             1u,
             v1);
  }
  return 3221225485LL;
}
