/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x140A82918
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140791390 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x140A50A70 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140ABC780 (RtlDeleteRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *Pool2; // rbx
  unsigned __int16 v1; // cx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = 0;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    memset_0(&OutputBuffer, 0, 0xB0uLL);
    dword_140EFF41C = 0x20000;
    wcscpy(&xmmword_140EFF3CC, L"WdiContextLog");
    RtlInitUnicodeString(&stru_140EFF480, &xmmword_140EFF3CC);
    qword_140EFF478 = (__int64)Pool2;
    word_140EFF472 = 520;
    OutputBuffer = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &OutputBuffer, 0xB0u, &OutputBuffer, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_140EFF470 < 2u )
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
      v1 = (unsigned __int16)word_140EFF470 >> 1;
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
