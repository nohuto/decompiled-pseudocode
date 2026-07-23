/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x140928644
 * Callers:
 *     _SysCtxOpenControlSet @ 0x140820920 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AEF9C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     _PnpSetPropertyWorker @ 0x14097C9BC (_PnpSetPropertyWorker.c)
 *     _SysCtxRegCreateKey @ 0x140A496BC (_SysCtxRegCreateKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A4C720 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A58B88 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140821834 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x140821B14 (NtCreateKeyTransacted_Stub.c)
 *     _RegRtlIsPredefinedKey @ 0x140928794 (_RegRtlIsPredefinedKey.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        void *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        HANDLE *KeyHandle,
        ULONG *Disposition,
        __int64 a9)
{
  HANDLE v12; // rdi
  __int64 v13; // rcx
  int inited; // ebx
  int v15; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v12 = a1;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey(a1)
    || (inited = RegRtlOpenPredefinedKey(v13, (__int64)&Handle), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      v15 = (32 * (a3 & 8 | 6)) | 2;
      if ( !a6 )
        v15 = 32 * (a3 & 8 | 6);
      if ( Handle )
        v12 = Handle;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = v12;
      ObjectAttributes.Attributes = v15 | 0x200;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = a5;
      if ( a9 )
      {
        inited = NtCreateKeyTransacted_Stub((__int64)KeyHandle, a4);
        if ( inited == -1073741702 )
          inited = -1072103420;
      }
      else
      {
        inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
