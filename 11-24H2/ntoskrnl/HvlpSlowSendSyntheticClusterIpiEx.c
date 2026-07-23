/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1403A4B40 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  char v4; // si
  _DWORD *HypercallCachedPages; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v7; // rax
  __int64 v8; // rdx
  __int64 CurrentIrql; // rcx
  int v10; // eax
  __int16 v11; // bx
  __int128 v13; // [rsp+28h] [rbp-A9h] BYREF
  PSLIST_ENTRY v14; // [rsp+38h] [rbp-99h]
  PHYSICAL_ADDRESS Next; // [rsp+40h] [rbp-91h]
  int v16; // [rsp+48h] [rbp-89h]
  int v17; // [rsp+4Ch] [rbp-85h]
  _BYTE v18[7]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v19[89]; // [rsp+A7h] [rbp-2Ah] BYREF

  v14 = 0LL;
  Next.LowPart = 0;
  v4 = 1;
  v13 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v7;
    if ( v7 )
    {
      *((_QWORD *)&v13 + 1) = CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v7[1].Next;
      LODWORD(v13) = 1;
      v14 = v7;
    }
    else
    {
      v8 = -4096LL;
      LODWORD(v13) = 2;
      v4 = 2;
      HypercallCachedPages = (_DWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFF000uLL);
      if ( (((unsigned __int64)v18 ^ (unsigned __int64)v19) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = v18;
      BYTE8(v13) = KeGetCurrentIrql();
      if ( BYTE8(v13) < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v8) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
        }
      }
      Next = MmGetPhysicalAddress(HypercallCachedPages);
    }
  }
  else
  {
    LODWORD(v13) = 4;
    BYTE8(v13) = KeDisableInterrupts();
    HIDWORD(v13) = 1;
    v4 = 4;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  v10 = HvlpAffinityToHvProcessorSet(a1, (_QWORD *)HypercallCachedPages + 1, (v4 & 2) != 0 ? 64 : 4072);
  if ( v10 == -1 )
  {
    HvlpReleaseHypercallPage((unsigned int *)&v13);
    HypercallCachedPages = HvlpAcquireHypercallPage((__int64)&v13, 1, 0LL, 0LL);
    v10 = HvlpAffinityToHvProcessorSet(a1, (_QWORD *)HypercallCachedPages + 1, 0xFE8u);
  }
  v17 = 0;
  HypercallCachedPages[1] = 0;
  *HypercallCachedPages = a2;
  v16 = ((v10 + 7) << 14) & 0x3FE0000 | 0x15;
  v11 = HvcallInitiateHypercall(v16);
  HvlpReleaseHypercallPage((unsigned int *)&v13);
  return v11 != 0 ? 0xC0000001 : 0;
}
