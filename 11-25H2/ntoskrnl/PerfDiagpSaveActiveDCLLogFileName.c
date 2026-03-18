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
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  ValueData = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( ValueData )
  {
    memset_0(dword_140EFF3F0, 0, 0xB0uLL);
    dword_140EFF41C = 0x20000;
    wcscpy(&xmmword_140EFF3CC, L"WdiContextLog");
    RtlInitUnicodeString(&stru_140EFF480, &xmmword_140EFF3CC);
    qword_140EFF478 = (__int64)ValueData;
    word_140EFF472 = 520;
    LODWORD(dword_140EFF3F0[0]) = 176;
    if ( (int)NtTraceControl(3u, (unsigned int *)dword_140EFF3F0, 0xB0u, dword_140EFF3F0, 0xB0u, (unsigned __int64)&v3) < 0
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
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
