/*
 * XREFs of PipCheckComputerSupported @ 0x1407179C0
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     PipHardwareConfigOpenKey @ 0x140ABA270 (PipHardwareConfigOpenKey.c)
 */

bool __fastcall PipCheckComputerSupported(PCWSTR SourceString)
{
  NTSTATUS v2; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-18h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v2 = PipHardwareConfigOpenKey(SourceString, 983103LL, &Handle);
  if ( v2 >= 0 )
  {
    DestinationString.Buffer = L"ComputerIds";
    *(_DWORD *)&DestinationString.Length = 1572886;
    v2 = IopOpenRegistryKeyEx(&KeyHandle, Handle, &DestinationString, 131097LL);
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v2 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValueBasicInformation,
             &KeyValueInformation,
             0x10u,
             &ResultLength);
      if ( v2 == -2147483643 )
        v2 = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v2 >= 0;
}
