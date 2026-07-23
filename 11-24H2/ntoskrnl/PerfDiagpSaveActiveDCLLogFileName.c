/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0860 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     RtlDeleteRegistryValue @ 0x140ABBCB0 (RtlDeleteRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *Pool2; // rbx
  unsigned __int16 v1; // cx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = 0;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, 0x20AuLL, 0x64465250u);
  if ( Pool2 )
  {
    memset_0(&OutputBuffer, 0, 0xB0uLL);
    dword_140EFFA9C = 0x20000;
    wcscpy(&xmmword_140EFFA4C, L"WdiContextLog");
    RtlInitUnicodeString(&stru_140EFFB00, &xmmword_140EFFA4C);
    qword_140EFFAF8 = (__int64)Pool2;
    word_140EFFAF2 = 520;
    OutputBuffer = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &OutputBuffer, 0xB0u, &OutputBuffer, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_140EFFAF0 < 2u )
    {
      KeyHandle = 0LL;
      DestinationString = 0LL;
      if ( (int)RtlpGetRegistryHandle(2, L"Diagnostics\\Performance", 1, &KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"ActiveShutdownDCL");
        ZwDeleteValueKey(KeyHandle, &DestinationString);
        ZwClose(KeyHandle);
      }
    }
    else
    {
      v1 = (unsigned __int16)word_140EFFAF0 >> 1;
      Pool2[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        Pool2,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
