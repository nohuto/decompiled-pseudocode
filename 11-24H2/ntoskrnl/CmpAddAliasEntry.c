/*
 * XREFs of CmpAddAliasEntry @ 0x140C47BC8
 * Callers:
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     CmpAddDockingInfo @ 0x140C47DF8 (CmpAddDockingInfo.c)
 */

__int64 __fastcall CmpAddAliasEntry(void *a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  int Data; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char v14; // [rsp+A0h] [rbp-60h] BYREF

  ObjectAttributes.RootDirectory = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  Data = 0;
  Disposition = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrAliasString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  v4 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v5 == -1073741772 )
    v5 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v5 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( v4 >= 0xC8 )
      goto LABEL_10;
    *(_QWORD *)&DestinationString.Length = 0x1000000LL;
    ++v4;
    DestinationString.Buffer = (wchar_t *)&v14;
    RtlUnicodeStringPrintf(&DestinationString, L"%04d", v4);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    v5 = v6;
    if ( v6 < 0 )
      break;
    ZwClose(Handle);
  }
  if ( v6 != -1073741772 )
  {
LABEL_9:
    Handle = 0LL;
    goto LABEL_12;
  }
LABEL_10:
  v5 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v5 < 0 )
    goto LABEL_9;
  CmpAddDockingInfo(Handle);
  Data = a3;
  v5 = ZwSetValueKey(Handle, (PUNICODE_STRING)&CmpStrProfileNumberString, 0, 4u, &Data, 4u);
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
