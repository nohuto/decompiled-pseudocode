/*
 * XREFs of HvlSetSystemMachineCheckProperty @ 0x140584EC0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetSystemMachineCheckProperty(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+30h] [rbp-78h]
  __int64 v6; // [rsp+38h] [rbp-70h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v4, 1, (__int64)v7, 40LL);
  *(_DWORD *)v2 = 4;
  v2[1] = *a1;
  LOWORD(a1) = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((unsigned int *)&v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
