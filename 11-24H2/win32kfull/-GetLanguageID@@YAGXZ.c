/*
 * XREFs of ?GetLanguageID@@YAGXZ @ 0x140102724
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140102580 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 */

__int64 GetLanguageID(void)
{
  unsigned __int16 v0; // di
  WCHAR *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  ULONG Value; // [rsp+98h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v0 = 1033;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v1 = (WCHAR *)PALLOCMEM(0x220u, 1684630599LL);
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v1, Length, &Length) >= 0 )
      {
        Value = 0;
        RtlInitUnicodeString(&DestinationString, v1 + 6);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
        v0 = Value;
      }
      Win32FreePool(v1);
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
