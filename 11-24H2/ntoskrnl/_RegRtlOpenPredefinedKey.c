/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x140821834
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408218F8 (_RegRtlQueryKeyPathName.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AEF9C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 *     _PnpSetPropertyWorker @ 0x14097C9BC (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A4C720 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A58B88 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x140869650 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, __int64 a2)
{
  wchar_t *Buffer; // rdx
  NTSTATUS v4; // ebx
  UNICODE_STRING CurrentUserKeyPath; // [rsp+30h] [rbp-18h] BYREF

  CurrentUserKeyPath = 0LL;
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
  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    Buffer = CurrentUserKeyPath.Buffer;
    goto LABEL_12;
  }
LABEL_14:
  RtlFreeAnsiString(&CurrentUserKeyPath);
  return (unsigned int)v4;
}
