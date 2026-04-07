/*
 * XREFs of McTemplateU0jqi_EtwEventWriteTransfer @ 0x180013C68
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180013B1C (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0jqi_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a4;
  v7 = a3;
  v9 = &v13;
  v8 = 16LL;
  v11 = &a5;
  v12 = 8LL;
  v10 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmAnimationClock_Begin,
           a3,
           4,
           (__int64)v6);
}
