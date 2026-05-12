/*
 * XREFs of PortMapBuildLunEntry @ 0x14013AD9C
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x14009FCC0 (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     PortRegistrySetValueKey @ 0x140038088 (PortRegistrySetValueKey.c)
 *     PortRegistryCreateKeyEx @ 0x14003882C (PortRegistryCreateKeyEx.c)
 */

__int64 __fastcall PortMapBuildLunEntry(
        void *a1,
        int a2,
        wchar_t *a3,
        wchar_t **a4,
        wchar_t *a5,
        ULONG a6,
        wchar_t *a7,
        int a8,
        HANDLE Handle)
{
  __int64 result; // rax

  Handle = 0LL;
  result = PortRegistryCreateKeyEx(a1, 1u, &Handle, L"Logical Unit Id %d", a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
      PortRegistrySetValueKey(Handle, L"InquiryData", 3u, a3, 0x24u);
    if ( a4 && *(_WORD *)a4 )
      PortRegistrySetValueKey(Handle, L"SerialNumber", 0x7232002u, a4[1], *(unsigned __int16 *)a4);
    if ( a3 )
      PortRegistrySetValueKey(Handle, L"Identifier", 0x7232002u, a3 + 4, 0x1Cu);
    if ( a7 )
      PortRegistrySetValueKey(Handle, L"DeviceType", 1u, a7, 2 * a8 + 2);
    if ( a5 )
      PortRegistrySetValueKey(Handle, L"DeviceIdentifierPage", 3u, a5, a6);
    ZwClose(Handle);
    return 0LL;
  }
  return result;
}
