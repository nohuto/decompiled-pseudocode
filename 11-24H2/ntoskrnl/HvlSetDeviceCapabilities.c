/*
 * XREFs of HvlSetDeviceCapabilities @ 0x140588160
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403AE3D0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x1405831D4 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetDeviceCapabilities(__int64 a1, int a2, int a3)
{
  __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]

  v8[0] = -1LL;
  v8[1] = a1;
  v9 = a2;
  v10 = a3;
  while ( 1 )
  {
    v3 = HvcallFastExtended(65792LL, (__int64)v8, 0x18u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v5, v4, v5, v6) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v5);
}
