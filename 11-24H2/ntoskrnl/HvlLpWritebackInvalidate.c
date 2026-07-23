/*
 * XREFs of HvlLpWritebackInvalidate @ 0x140584A40
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v5, 1, 0LL, 32LL);
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  *(_DWORD *)v2 = a1;
  *((_DWORD *)v2 + 1) = 65538;
  v3 = (unsigned __int16)HvcallInitiateHypercall(137) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v5);
  return v3;
}
