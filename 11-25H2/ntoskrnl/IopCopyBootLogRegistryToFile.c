/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x140705D7C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExSystemTimeToLocalTime @ 0x14030F0D0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14042E020 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfA @ 0x140592510 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDeleteKey @ 0x14069CCC0 (ZwDeleteKey.c)
 *     IopBootLogToFile @ 0x140705934 (IopBootLogToFile.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140A74FB0 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_QWORD *IopCopyBootLogRegistryToFile()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  int RegistryValue; // eax
  void *QuadPart; // rdi
  PUNICODE_STRING v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+28h] [rbp-E0h]
  int v10; // [rsp+28h] [rbp-E0h]
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  _TIME_FIELDS TimeFields_8; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+80h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v17; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v18; // [rsp+B0h] [rbp-58h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+3E0h] [rbp+2D8h] BYREF

  result = &retaddr;
  KeyHandle = 0LL;
  TimeFields = 0LL;
  LocalTime.QuadPart = 0LL;
  v17 = 0LL;
  TimeFields_8 = 0LL;
  DestinationString = 0LL;
  UnicodeString_8 = 0LL;
  v18 = 0LL;
  if ( ::DestinationString )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&::DestinationString[4], 1u);
    IopBootLogToFile((PVOID *)&::DestinationString[3]);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields_8);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields_8.Month,
      TimeFields_8.Day,
      TimeFields_8.Year,
      TimeFields_8.Hour,
      TimeFields_8.Minute,
      TimeFields_8.Second,
      TimeFields_8.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString_8, &DestinationString, 1u);
    IopBootLogToFile((PVOID *)&UnicodeString_8);
    RtlFreeAnsiString(&UnicodeString_8);
    LOBYTE(v9) = 0;
    if ( (int)IopOpenRegistryKey(
                &TimeFields,
                0LL,
                &CmRegistryMachineSystemCurrentControlSetControlBootLog,
                983103LL,
                v9) < 0 )
    {
      v5 = ::DestinationString;
    }
    else
    {
      for ( i = 0; i < LODWORD(::DestinationString[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v17, SourceString);
        LOBYTE(v10) = 0;
        if ( (int)IopOpenRegistryKey(&KeyHandle, TimeFields, &v17, 983103LL, v10) >= 0 )
        {
          LocalTime.QuadPart = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle);
          QuadPart = (void *)LocalTime.QuadPart;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v18, (PCWSTR)(LocalTime.QuadPart + *(unsigned int *)(LocalTime.QuadPart + 8)));
            IopBootLogToFile((PVOID *)&v18);
          }
          ExFreePoolWithTag(QuadPart, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(TimeFields);
      ZwClose(TimeFields);
      v5 = ::DestinationString;
      BYTE4(::DestinationString[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  }
  return result;
}
