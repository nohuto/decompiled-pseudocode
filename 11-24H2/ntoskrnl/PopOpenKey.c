/*
 * XREFs of PopOpenKey @ 0x1404A4918
 * Callers:
 *     PopOpenPowerKey @ 0x1404A48FC (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x1405CA48C (PpmInitIllegalThrottleLogging.c)
 *     PopLoadResumeContext @ 0x140AB314C (PopLoadResumeContext.c)
 * Callees:
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 */

__int64 __fastcall PopOpenKey(HANDLE *a1, const wchar_t *a2)
{
  NTSTATUS v4; // edi
  size_t v5; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE v10; // [rsp+C0h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v10 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Attributes = 576;
  v4 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v8[0] = 0LL;
    v8[1] = a2;
    if ( a2 )
    {
      v5 = 2 * wcslen(a2);
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v8[0]) = v5;
      WORD1(v8[0]) = v5 + 2;
    }
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&v10, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v4 < 0 )
      v10 = 0LL;
    else
      *a1 = v10;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v4;
}
