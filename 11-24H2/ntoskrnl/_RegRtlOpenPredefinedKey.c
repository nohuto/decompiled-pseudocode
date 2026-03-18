/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x1408210F4
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408211B8 (_RegRtlQueryKeyPathName.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B16A8 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140926504 (_RegRtlCreateKeyTransacted.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A547D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A60638 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x140865040 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, __int64 a2)
{
  wchar_t *Buffer; // rdx
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  switch ( a1 )
  {
    case 2147483650LL:
      Buffer = L"\\REGISTRY\\MACHINE";
LABEL_12:
      v4 = RegRtlOpenKeyTransacted(0LL, Buffer, 0LL, 0x2000000LL, a2, 0LL);
      goto LABEL_14;
    case 2147483648LL:
      Buffer = L"\\REGISTRY\\MACHINE\\SOFTWARE\\CLASSES";
      goto LABEL_12;
    case 2147483651LL:
      Buffer = L"\\REGISTRY\\USER";
      goto LABEL_12;
    case 2147483653LL:
      Buffer = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT";
      goto LABEL_12;
  }
  if ( a1 != 2147483649LL )
  {
    v4 = -1073741816;
    goto LABEL_14;
  }
  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    Buffer = UnicodeString.Buffer;
    goto LABEL_12;
  }
LABEL_14:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v4;
}
