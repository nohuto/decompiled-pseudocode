/*
 * XREFs of HvlpStartVirtualProcessor @ 0x140582B1C
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140584750 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(int a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 240LL);
  *v4 = -1LL;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 2) = a1;
  v4 += 2;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  *((_OWORD *)v4 + 6) = a2[6];
  v4 += 16;
  v5 = a2[7];
  a2 += 8;
  *((_OWORD *)v4 - 1) = v5;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  v6 = (unsigned __int16)HvcallInitiateHypercall(153) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  return v6;
}
