/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1405817B4
 * Callers:
 *     HvlLpGetLogicalProcessorHwId @ 0x140584880 (HvlLpGetLogicalProcessorHwId.c)
 *     HvlLpGetMachineCheckContext @ 0x1405848D0 (HvlLpGetMachineCheckContext.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  _DWORD *v7; // rbx
  _OWORD *v8; // r12
  __int128 v9; // xmm1
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]

  v15 = 0LL;
  LODWORD(v16) = 0;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v6 = 0;
  v14 = 0LL;
  v11 = 0LL;
  v7 = HvlpAcquireHypercallPage((__int64)&v14, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage((__int64)&v11, 2, 0LL, 32LL);
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallInitiateHypercall(122) )
  {
    v6 = -1073741823;
  }
  else
  {
    v9 = v8[1];
    *a3 = *v8;
    a3[1] = v9;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v11);
  HvlpReleaseHypercallPage((unsigned int *)&v14);
  return v6;
}
