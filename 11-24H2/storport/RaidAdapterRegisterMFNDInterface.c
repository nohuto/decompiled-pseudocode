/*
 * XREFs of RaidAdapterRegisterMFNDInterface @ 0x14005DEB0
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     StorLogRegisterMFNDInterface @ 0x140067AC0 (StorLogRegisterMFNDInterface.c)
 */

__int64 __fastcall RaidAdapterRegisterMFNDInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // r9
  NTSTATUS v4; // edi

  v1 = *(struct _UNICODE_STRING **)(a1 + 6160);
  if ( !v1 )
    return 3221225473LL;
  v4 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 32), &GUID_DEVINTERFACE_MFND_STORAGE, 0LL, v1 + 1);
  if ( v4 >= 0 )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(a1 + 6160) + 16LL), 1u);
    if ( v4 < 0 )
      RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(a1 + 6160) + 16LL));
  }
  StorLogRegisterMFNDInterface(a1, (unsigned int)v4);
  return (unsigned int)v4;
}
