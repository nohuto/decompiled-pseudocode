/*
 * XREFs of RaidAdapterRegisterNonPoFxMiniportInterface @ 0x14005DF48
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterRegisterNonPoFxMiniportInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rbx

  v1 = (struct _UNICODE_STRING *)(a1 + 5728);
  if ( IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(a1 + 32),
         &GUID_STORPORT_NON_POFX_MINIPORT,
         0LL,
         (PUNICODE_STRING)(a1 + 5728)) >= 0
    && IoSetDeviceInterfaceState(v1, 1u) < 0 )
  {
    RtlFreeUnicodeString(v1);
  }
  return 0LL;
}
