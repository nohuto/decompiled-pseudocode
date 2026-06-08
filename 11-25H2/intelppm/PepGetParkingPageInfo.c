/*
 * XREFs of PepGetParkingPageInfo @ 0x14003C238
 * Callers:
 *     PepDevicePowerControlCallback @ 0x140003EB0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepGetParkingPageInfo(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v6) = *(_DWORD *)(a1 + 56);
  v8 = 24;
  v3 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, int *))HalDispatchTable->HalQuerySystemInformation)(
         29LL,
         24LL,
         &v6,
         &v8);
  if ( v3 >= 0 )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    a2[1] = v7;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x17u,
      (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
      v5);
  }
  return (unsigned int)v3;
}
