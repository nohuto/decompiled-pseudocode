/*
 * XREFs of HvlGetDeviceCapabilities @ 0x140583F30
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlGetDeviceCapabilities(_WORD *a1, _OWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  unsigned __int16 v6; // bx
  __int128 v8; // [rsp+28h] [rbp-59h] BYREF
  __int64 v9; // [rsp+38h] [rbp-49h]
  __int64 v10; // [rsp+40h] [rbp-41h]
  __int128 v11; // [rsp+48h] [rbp-39h] BYREF
  __int64 v12; // [rsp+58h] [rbp-29h]
  __int64 v13; // [rsp+60h] [rbp-21h]
  _BYTE v14[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v15[48]; // [rsp+88h] [rbp+7h] BYREF

  v12 = 0LL;
  LODWORD(v13) = 0;
  v9 = 0LL;
  *a2 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0LL;
  v8 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v11, 1, (__int64)v15, 24LL);
  v5 = HvlpAcquireHypercallPage((__int64)&v8, 2, (__int64)v14, 16LL);
  v4[1] = 0LL;
  v4[2] = 0LL;
  *v4 = 0x4000000000000000LL;
  *((_WORD *)v4 + 1) = a1[4];
  *(_WORD *)v4 = a1[6];
  *((_WORD *)v4 + 3) ^= (a1[5] ^ *((_WORD *)v4 + 3)) & 3;
  v6 = HvcallInitiateHypercall(170);
  if ( !v6 )
    *a2 = *(_OWORD *)v5;
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  HvlpReleaseHypercallPage((unsigned int *)&v11);
  return HvlpHvToNtStatus(v6);
}
