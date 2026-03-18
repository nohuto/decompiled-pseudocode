/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x140588DEC
 * Callers:
 *     HvlpGetPageList @ 0x140588D18 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x140588F24 (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int64 v8; // [rsp+38h] [rbp-50h]
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v4 = HvlpAcquireHypercallPage((__int64)&v6, 1, (__int64)&v9, 24LL);
  v4[1] = -1LL;
  v4[2] = 1LL;
  *v4 = a2;
  v4[2] = *(_BYTE *)(a1 + 4) != 0 ? 3LL : 1LL;
  HvcallInitiateHypercall(151);
  return HvlpReleaseHypercallPage((unsigned int *)&v6);
}
