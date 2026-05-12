/*
 * XREFs of RaidAdapterRegisterRpmbInterface @ 0x140055C68
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterRegisterRpmbInterface(__int64 a1)
{
  NTSTATUS v1; // ebx
  struct _UNICODE_STRING *v2; // rdi
  NTSTATUS result; // eax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 5560) )
  {
    v2 = (struct _UNICODE_STRING *)(a1 + 5544);
    result = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(a1 + 32),
               &GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB,
               0LL,
               (PUNICODE_STRING)(a1 + 5544));
    if ( result < 0 )
      return result;
    v1 = IoSetDeviceInterfaceState(v2, 1u);
    if ( v1 < 0 )
      RtlFreeUnicodeString(v2);
  }
  return v1;
}
