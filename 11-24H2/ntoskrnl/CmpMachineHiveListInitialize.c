/*
 * XREFs of CmpMachineHiveListInitialize @ 0x140AB6E50
 * Callers:
 *     CmInitSystem2 @ 0x140C61648 (CmInitSystem2.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1407CA410 (CmpBuildMachineHiveMountPoint.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14092D83C (CmpQueryHiveRedirectionFileList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
    Pool2 = ExAllocatePool2(0x100uLL, 0x80uLL, 0x32364D43u);
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
