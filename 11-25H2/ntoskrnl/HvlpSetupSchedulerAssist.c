/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x140581E08
 * Callers:
 *     HvlEnlightenProcessor @ 0x1404D3598 (HvlEnlightenProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax
  PHYSICAL_ADDRESS *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 36536);
  result = 0LL;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  if ( v1 )
  {
    *v1 = 2056;
    v1[1] = 0;
    v3 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage((__int64)&v4, 1, 0LL, 16LL);
    v3->LowPart = 5;
    v3->HighPart = 1;
    v3[1] = MmGetPhysicalAddress(v1);
    HvcallInitiateHypercall(32773);
    return HvlpReleaseHypercallPage((unsigned int *)&v4);
  }
  return result;
}
