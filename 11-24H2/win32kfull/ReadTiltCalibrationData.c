/*
 * XREFs of ReadTiltCalibrationData @ 0x14026F094
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x14020EF48 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14012D69C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140153C78 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x14026EC48 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x14026ED30 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 UserSessionState; // rax
  int TiltKeyName; // edi
  int v8; // ecx
  __int64 i; // rax
  _DWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r15
  unsigned __int8 **v13; // r12
  unsigned int *v14; // r8
  struct _UNICODE_STRING v15; // [rsp+20h] [rbp-E0h] BYREF
  PCWSTR SourceString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v17; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 **v21[4]; // [rsp+80h] [rbp-80h]
  unsigned int *v22[4]; // [rsp+A0h] [rbp-60h]
  _DWORD v23[4]; // [rsp+C0h] [rbp-40h] BYREF
  char v24; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v25[1408]; // [rsp+390h] [rbp+290h] BYREF

  v2 = *(_QWORD *)(a1 + 400);
  v3 = *(_DWORD *)(a1 + 224);
  SourceString = 0LL;
  *(_DWORD *)(&v17.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  if ( !v2 )
    return 3221225628LL;
  *(_DWORD *)&v17.Length = 45875200;
  v17.Buffer = (PWSTR)&v24;
  UserSessionState = W32GetUserSessionState(a1, a2);
  TiltKeyName = RtlUnicodeStringCopy(
                  &v17,
                  (const struct _UNICODE_STRING *)(*(_QWORD *)(UserSessionState + 63560) + 200LL));
  if ( TiltKeyName >= 0 )
  {
    v8 = 1;
    v22[0] = (unsigned int *)(v2 + 24);
    v22[1] = (unsigned int *)(v2 + 40);
    v22[2] = (unsigned int *)(v2 + 56);
    v22[3] = (unsigned int *)(v2 + 72);
    v21[0] = (unsigned __int8 **)(v2 + 16);
    v21[1] = (unsigned __int8 **)(v2 + 32);
    v21[2] = (unsigned __int8 **)(v2 + 48);
    v21[3] = (unsigned __int8 **)(v2 + 64);
    for ( i = 0LL; i < 4; ++i )
      v23[i] = v8++;
    v15 = *a2;
    TiltKeyName = GetTiltKeyName(&v15, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v10 = v23;
      v11 = 0LL;
      v12 = 4LL;
      do
      {
        *(_QWORD *)&v15.Length = 91750400LL;
        memset_0(v25, 0, 0x578uLL);
        v15.Buffer = (PWSTR)v25;
        RtlCopyUnicodeString(&v15, &v17);
        TiltKeyName = RtlUnicodeStringCatString(&v15, off_14034CBF8[v11]);
        if ( TiltKeyName >= 0 )
        {
          v13 = v21[v11];
          v14 = v22[v11];
          v19 = v15;
          v20 = DestinationString;
          TiltKeyName = ReadCalibrationDataImp(&v20, &v19, v14, v13);
          if ( TiltKeyName >= 0 && v3 == *v10 )
            *(_QWORD *)(v2 + 80) = *v13;
        }
        ++v11;
        ++v10;
        --v12;
      }
      while ( v12 );
      Win32FreePool((void *)SourceString);
    }
  }
  return (unsigned int)TiltKeyName;
}
