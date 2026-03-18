/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1405893BC
 * Callers:
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  *(_DWORD *)HvlpAcquireHypercallPage((__int64)&v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvcallInitiateHypercall(135) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v2);
  return v0;
}
