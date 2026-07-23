/*
 * XREFs of CcCheckContainerWaitForRestore @ 0x140577084
 * Callers:
 *     CcRegisterForContainerRestore @ 0x1405773C0 (CcRegisterForContainerRestore.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 */

__int64 CcCheckContainerWaitForRestore()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v9; // [rsp+94h] [rbp+3Bh]
  int v10; // [rsp+98h] [rbp+3Fh]
  char v11; // [rsp+9Ch] [rbp+43h]

  v0 = 0;
  v5[0] = 9699474LL;
  *(_QWORD *)&ValueName.Length = 1966108LL;
  v5[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Containers";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueName.Buffer = L"WaitForRestore";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v1 >= 0 && v9 == 4 && v10 == 4 )
      LOBYTE(v0) = v11 != 0;
    ZwClose(KeyHandle);
  }
  DbgPrintEx(0x7Fu, 3u, "CcCheckContainerWaitForRestore called: (0x%x, %u)\n", v1, v0);
  return v0;
}
