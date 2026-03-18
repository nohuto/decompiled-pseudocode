/*
 * XREFs of WriteTiltCalibrationData @ 0x14026F584
 * Callers:
 *     _SetCalibrationData @ 0x14027280C (_SetCalibrationData.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14012D69C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140153C78 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x14026EC48 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall WriteTiltCalibrationData(struct _UNICODE_STRING *a1, unsigned int a2, ULONG a3, void *a4)
{
  __int64 v4; // rdi
  int TiltKeyName; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct _UNICODE_STRING v12; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  PCWSTR SourceString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  char v18; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a2;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  KeyHandle = 0LL;
  v12 = *a1;
  TiltKeyName = GetTiltKeyName(&v12, (unsigned __int16 **)&SourceString);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_QWORD *)&v12.Length = 91750400LL;
    v12.Buffer = (PWSTR)&v18;
    UserSessionState = W32GetUserSessionState(v9, v8);
    TiltKeyName = RtlUnicodeStringCopy(
                    &v12,
                    (const struct _UNICODE_STRING *)(*(_QWORD *)(UserSessionState + 63560) + 200LL));
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(&v12, off_14034CBF8[v4]);
      if ( TiltKeyName >= 0 )
      {
        Disposition = 0;
        ObjectAttributes.ObjectName = &v12;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        TiltKeyName = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( TiltKeyName >= 0 )
        {
          TiltKeyName = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a4, a3);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool((void *)SourceString);
  }
  return TiltKeyName >= 0;
}
