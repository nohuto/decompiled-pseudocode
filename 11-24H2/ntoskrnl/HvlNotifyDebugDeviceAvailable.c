/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x140584DC0
 * Callers:
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     VslReinitializeIumDebuggerTransport @ 0x14058B290 (VslReinitializeIumDebuggerTransport.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  __int16 v0; // bx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  _BYTE v9[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  LODWORD(v8) = 0;
  v6 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    *(_DWORD *)HvlpAcquireHypercallPage((__int64)&v6, 1, (__int64)v9, 8LL) = 1;
    v0 = HvcallInitiateHypercall(135);
    HvlpReleaseHypercallPage((unsigned int *)&v6);
    if ( v0 )
      return 3221225473LL;
    if ( VslVsmEnabled )
      VslReinitializeIumDebuggerTransport(v2, v1, v3, v4);
  }
  return 0LL;
}
