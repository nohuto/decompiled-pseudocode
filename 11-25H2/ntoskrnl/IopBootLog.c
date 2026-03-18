/*
 * XREFs of IopBootLog @ 0x140A76824
 * Callers:
 *     IopBootLogDriver @ 0x140592900 (IopBootLogDriver.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     IopBootLogToFile @ 0x140705934 (IopBootLogToFile.c)
 *     IopOpenRegistryKey @ 0x140A74FB0 (IopOpenRegistryKey.c)
 */

void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
{
  const UNICODE_STRING *v4; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Data; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v10; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszDest[256]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+280h] [rbp+180h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v13;
  v10 = 0LL;
  ValueName = 0LL;
  v9 = 0LL;
  Sourcea = 0LL;
  if ( ::DestinationString )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&::DestinationString[4], 1u);
    v4 = ::DestinationString;
    if ( !a2 )
      v4 = ::DestinationString + 1;
    RtlCopyUnicodeString(&DestinationString, v4);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&v9, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &v9);
    Length = DestinationString.Length;
    Data = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(::DestinationString[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlInitUnicodeString(&v10, pszDest);
    RtlInitUnicodeString(&ValueName, &word_140AD8570);
    if ( BYTE4(::DestinationString[10].Buffer) )
    {
      IopBootLogToFile((PVOID *)&DestinationString);
    }
    else
    {
      *(_QWORD *)&Sourcea.Length = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      if ( IopOpenRegistryKey(
             (HANDLE *)&DestinationString,
             0LL,
             &CmRegistryMachineSystemCurrentControlSetControlBootLog,
             0xF003Fu,
             1) >= 0 )
      {
        if ( IopOpenRegistryKey((HANDLE *)&Sourcea, *(void **)&DestinationString.Length, &v10, 0xF003Fu, 1) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Data, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&::DestinationString[4]);
  }
}
