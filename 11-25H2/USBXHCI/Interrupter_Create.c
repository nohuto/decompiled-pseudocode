/*
 * XREFs of Interrupter_Create @ 0x14007B9A4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA50 (Interrupter_CreateInterrupter.c)
 */

__int64 __fastcall Interrupter_Create(int a1, __int64 a2, _QWORD *a3)
{
  int v5; // edx
  int Interrupter; // ebx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v10 = 0LL;
  Interrupter = Interrupter_CreateInterrupter(a1, a2, 0, 0, 0LL, (__int64)v9, (__int64)&v10);
  if ( Interrupter >= 0 )
  {
    v7 = v10;
    *(_QWORD *)(v10 + 40) = v9[0];
    *(_DWORD *)(v7 + 64) = -1;
    *a3 = v7;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      v5,
      9,
      10,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      Interrupter);
  }
  return (unsigned int)Interrupter;
}
