/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x1408D9CA0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x140497D78 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x14069D300 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x14069EC60 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079AF34 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x140A120C8 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, _QWORD *a4, unsigned int a5)
{
  int v5; // edi
  int updated; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  DestinationString = 0LL;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_140E67EB8 )
      {
        WmiTraceRundownNotify(*a4, a5);
        EtwpUpdateFileInfoDriverRegistration(0);
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_140E67EB8 = 0;
      }
    }
    return 0;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    return 0;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v8 = ZwLoadDriver(&DestinationString);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_140E67EB8 = 1;
    v5 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1);
  if ( updated >= 0 )
    return 0;
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_140E67EB8 = 0;
  }
  return (unsigned int)updated;
}
