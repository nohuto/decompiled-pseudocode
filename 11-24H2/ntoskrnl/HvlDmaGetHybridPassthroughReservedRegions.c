/*
 * XREFs of HvlDmaGetHybridPassthroughReservedRegions @ 0x140583B90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaGetHybridPassthroughReservedRegions(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  unsigned __int16 v4; // bx
  __int128 v6; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+30h] [rbp-D0h]
  __int64 v8; // [rsp+38h] [rbp-C8h]
  __int128 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  _BYTE v12[48]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[8144]; // [rsp+90h] [rbp-70h] BYREF

  v10 = 0LL;
  LODWORD(v11) = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v9 = 0LL;
  v6 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v9, 1, (__int64)v12, 24LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v6, 2, (__int64)v13, 4072LL);
  *(_QWORD *)((char *)v2 + 12) = 0LL;
  *((_DWORD *)v2 + 5) = 0;
  *v2 = HvlPartitionId;
  *((_DWORD *)v2 + 2) = 589824;
  v4 = HvcallInitiateHypercall(257);
  if ( !v4 )
  {
    *(_QWORD *)a1 = *v3;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(v3 + 1);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(v3 + 3);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v3 + 5);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(v3 + 7);
    *(_DWORD *)(a1 + 8) = 512;
    *(_QWORD *)(a1 + 16) = a1 + 24;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v6);
  HvlpReleaseHypercallPage((unsigned int *)&v9);
  return HvlpHvToNtStatus(v4);
}
