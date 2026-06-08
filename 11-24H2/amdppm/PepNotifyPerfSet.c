/*
 * XREFs of PepNotifyPerfSet @ 0x14000D05C
 * Callers:
 *     PepPerfControlHandler @ 0x14000D120 (PepPerfControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyPerfSet(__int64 a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int v7; // edx
  int v8; // ebx
  _DWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+44h] [rbp-24h]
  __int16 v12; // [rsp+45h] [rbp-23h]
  char v13; // [rsp+47h] [rbp-21h]

  v10[4] = a5;
  v10[3] = a6;
  v10[0] = a2;
  v10[1] = a3;
  v11 = a7;
  v12 = 0;
  v13 = 0;
  v10[2] = a4;
  v8 = PoFxProcessorNotification(a1, 13LL, v10);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      2,
      37,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
