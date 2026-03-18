/*
 * XREFs of CmpMachineHiveListInitialize @ 0x140AB7CF0
 * Callers:
 *     CmInitSystem2 @ 0x140C4E174 (CmInitSystem2.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1407BA720 (CmpBuildMachineHiveMountPoint.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14091175C (CmpQueryHiveRedirectionFileList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void CmpMachineHiveListInitialize()
{
  unsigned int i; // edi
  wchar_t **v1; // rsi
  __int64 Pool2; // rax
  wchar_t *v3; // rbp
  _OWORD *v4; // rbx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-B8h] BYREF
  char v6; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    v1 = &CmpMachineHiveList[23 * i];
    KeInitializeEvent((PRKEVENT)(v1 + 8), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v1 + 11), SynchronizationEvent, 0);
    *(_QWORD *)&ValueName.Length = 0x800000LL;
    ValueName.Buffer = (wchar_t *)&v6;
    CmpBuildMachineHiveMountPoint(i, &ValueName);
    Pool2 = ExAllocatePool2(0x100uLL);
    v3 = (wchar_t *)Pool2;
    if ( !Pool2 )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, i, 0LL);
    v4 = v1 + 21;
    *(_OWORD *)(v1 + 21) = 0LL;
    *((_WORD *)v1 + 85) = 128;
    v1[22] = (wchar_t *)Pool2;
    if ( !CmpQueryHiveRedirectionFileList(&ValueName, (PUNICODE_STRING)(v1 + 21)) || *(_WORD *)v4 == 2 )
    {
      *v4 = 0LL;
      *((_WORD *)v1 + 85) = 128;
      v1[22] = v3;
      RtlAppendUnicodeToString((PUNICODE_STRING)(v1 + 21), L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString((PUNICODE_STRING)(v1 + 21), *v1);
    }
  }
}
