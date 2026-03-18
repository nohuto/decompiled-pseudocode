/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1405842C0
 * Callers:
 *     PopHiberCheckResume @ 0x140B56660 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  __int16 v0; // bx
  __int128 v2; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v3; // [rsp+30h] [rbp-A8h]
  __int64 v4; // [rsp+38h] [rbp-A0h]
  _BYTE v5[112]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v6; // [rsp+B0h] [rbp-28h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  *(_DWORD *)HvlpAcquireHypercallPage((__int64)&v2, 1, (__int64)&v6, 8LL) = 1;
  v0 = HvcallInitiateHypercall(135);
  HvlpReleaseHypercallPage((unsigned int *)&v2);
  if ( v0 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset_0(v5, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 0x10Eu, 0, (__int64)v5);
  }
  return 0LL;
}
