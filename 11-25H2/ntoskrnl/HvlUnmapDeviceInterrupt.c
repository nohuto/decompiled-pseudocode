/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1405850D0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, __int128 *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm0
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v7, 1, (__int64)v10, 40LL);
  *v4 = -1LL;
  v4[1] = a1;
  v5 = *a2;
  *((_DWORD *)v4 + 8) = 0;
  *((_OWORD *)v4 + 1) = v5;
  LOWORD(a1) = HvcallInitiateHypercall(125);
  HvlpReleaseHypercallPage((unsigned int *)&v7);
  return HvlpHvToNtStatus(a1);
}
