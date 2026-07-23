/*
 * XREFs of IopWriteResourceList @ 0x14071ED00
 * Callers:
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 *     IoReportHalResourceUsage @ 0x140C24DD0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140C24FB8 (IopInitializeResourceMap.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall IopWriteResourceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        UNICODE_STRING *a4,
        _DWORD *Data,
        ULONG DataSize)
{
  int RegistryKey; // edi
  UNICODE_STRING *v9; // rdx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  KeyHandle[0] = 0LL;
  RegistryKey = IopCreateRegistryKeyEx(&Handle, a1, a2, 131103LL, 1, 0LL);
  if ( RegistryKey >= 0 )
  {
    RegistryKey = IopCreateRegistryKeyEx(KeyHandle, Handle, a3, 131103LL, 1, 0LL);
    ZwClose(Handle);
    if ( RegistryKey >= 0 )
    {
      v9 = a4;
      v10 = KeyHandle[0];
      if ( *Data )
        v11 = ZwSetValueKey(KeyHandle[0], v9, 0, 8u, Data, DataSize);
      else
        v11 = ZwDeleteValueKey(KeyHandle[0], v9);
      RegistryKey = v11;
      ZwClose(v10);
    }
  }
  return (unsigned int)RegistryKey;
}
