/*
 * XREFs of NvmeAdapterRegisterNonPoFxMiniportInterface @ 0x140131154
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterRegisterNonPoFxMiniportInterface(__int64 a1)
{
  if ( IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(a1 + 32),
         &GUID_STORPORT_NON_POFX_MINIPORT,
         0LL,
         (PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL)) >= 0
    && IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL), 1u) < 0 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL));
  }
  return 0LL;
}
