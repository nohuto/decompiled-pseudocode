/*
 * XREFs of HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1400247D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_SettingInterfaceInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // r15
  _QWORD *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 i; // rsi
  int v10; // edx
  __int64 v11; // rbp
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]

  v1 = *(__int64 **)(a1 + 960);
  memset(v13, 0, sizeof(v13));
  v2 = v1[58];
  v3 = *v1;
  v14 = 0LL;
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v13);
  v4 = 32LL;
  if ( *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 1 )
    v4 = 48LL;
  v5 = (_QWORD *)(v1[6] + 16);
  v6 = *((_QWORD *)&v13[0] + 1) + v4;
  v7 = *v5 - 8LL;
  if ( v5 != (_QWORD *)*v5 )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v7 + 32) + 2LL) != *(_BYTE *)(v6 + 2) )
    {
      v8 = *(_QWORD **)(v7 + 8);
      v7 = (__int64)(v8 - 1);
      if ( v5 == v8 )
        return 4077LL;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 24); i = (unsigned int)(i + 1) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 480))(*(_QWORD *)(v7 + 80 * i + 40));
      if ( !v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432),
          v10,
          5,
          45,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
      }
      *(_QWORD *)(v7 + 80 * i + 56) = v11;
      *(_QWORD *)(v6 + 24 * i + 32) = v11;
      (*(void (__fastcall **)(_QWORD))(v3 + 472))(*(_QWORD *)(v7 + 80 * i + 40));
    }
  }
  return 4077LL;
}
