/*
 * XREFs of HvlGetRootVpSharedPages @ 0x1405806AC
 * Callers:
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlGetRootVpSharedPages(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  unsigned __int16 v8; // bx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v3 = a1;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v13 = 0LL;
  v10 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v13, 1, 0LL, 24LL);
  v7 = HvlpAcquireHypercallPage((__int64)&v10, 2, 0LL, 4072LL);
  *v6 = HvlPartitionId;
  v6[1] = 589829LL;
  v6[2] = v3;
  v8 = HvcallInitiateHypercall(257);
  if ( !v8 )
  {
    *a2 = v7[1];
    *a3 = v7[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v10);
  HvlpReleaseHypercallPage((unsigned int *)&v13);
  return HvlpHvToNtStatus(v8);
}
