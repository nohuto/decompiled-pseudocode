/*
 * XREFs of RegisterPepDevice @ 0x14003BE8C
 * Callers:
 *     InitPep @ 0x14003B614 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     memset @ 0x14000DAC0 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 a1)
{
  bool v2; // zf
  int v3; // ebx
  _QWORD *v4; // rdi
  int v5; // edx
  _QWORD v7[12]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v8; // [rsp+90h] [rbp+37h] BYREF
  __int64 v9; // [rsp+A0h] [rbp+47h]

  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  v9 = 0xFFFFFFFFLL;
  v2 = *(_DWORD *)(a1 + 80) == 0;
  v7[0] = 0x100000001LL;
  LODWORD(v7[10]) = 1;
  v7[11] = &v8;
  v7[6] = PepDevicePowerControlCallback;
  v7[7] = a1;
  if ( v2 || !byte_140014EB0 )
  {
    v4 = (_QWORD *)(a1 + 1120);
    v3 = PoFxRegisterDevice(*(_QWORD *)a1, v7, a1 + 1120);
    if ( v3 >= 0 )
    {
      PoFxActivateComponent(*v4, 0LL, 0LL);
      PoFxStartDevicePowerManagement(*v4);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          4,
          18,
          (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
          v3,
          v7[0]);
      }
      *v4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
