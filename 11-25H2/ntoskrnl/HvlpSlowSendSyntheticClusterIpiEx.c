/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140267530 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14026D37C (HvlpAffinityToHvProcessorSet.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  char v5; // si
  _DWORD *HypercallCachedPages; // rbx
  PHYSICAL_ADDRESS Next; // rdi
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v9; // rax
  __int64 CurrentIrql; // rcx
  int v11; // eax
  __int16 v12; // bx
  __int128 v14; // [rsp+28h] [rbp-A9h] BYREF
  PSLIST_ENTRY v15; // [rsp+38h] [rbp-99h]
  PHYSICAL_ADDRESS v16; // [rsp+40h] [rbp-91h]
  __int64 v17; // [rsp+48h] [rbp-89h]
  _BYTE v18[7]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v19[89]; // [rsp+A7h] [rbp-2Ah] BYREF

  v15 = 0LL;
  v16.LowPart = 0;
  v3 = a2;
  v5 = 1;
  v14 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v9;
    if ( v9 )
    {
      *((_QWORD *)&v14 + 1) = CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v9[1].Next;
      v16 = Next;
      LODWORD(v14) = 1;
      v15 = v9;
    }
    else
    {
      LODWORD(v14) = 2;
      v5 = 2;
      HypercallCachedPages = (_DWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFF000uLL);
      if ( (((unsigned __int64)v18 ^ (unsigned __int64)v19) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = v18;
      BYTE8(v14) = KeGetCurrentIrql();
      if ( BYTE8(v14) < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      }
      Next = MmGetPhysicalAddress(HypercallCachedPages);
      v16 = Next;
    }
  }
  else
  {
    LODWORD(v14) = 4;
    BYTE8(v14) = KeDisableInterrupts(a1, a2, a3);
    HIDWORD(v14) = 1;
    v5 = 4;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
    v16 = Next;
  }
  v11 = HvlpAffinityToHvProcessorSet(a1, HypercallCachedPages + 2, (v5 & 2) != 0 ? 64 : 4072);
  if ( v11 == -1 )
  {
    HvlpReleaseHypercallPage(&v14);
    HypercallCachedPages = (_DWORD *)HvlpAcquireHypercallPage(&v14, 1LL, 0LL);
    v11 = HvlpAffinityToHvProcessorSet(a1, HypercallCachedPages + 2, 4072LL);
    Next = v16;
  }
  HIDWORD(v17) = 0;
  HypercallCachedPages[1] = 0;
  *HypercallCachedPages = v3;
  LODWORD(v17) = ((v11 + 7) << 14) & 0x3FE0000 | 0x15;
  v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
          v17,
          (PHYSICAL_ADDRESS)Next.QuadPart,
          0LL);
  HvlpReleaseHypercallPage(&v14);
  return v12 != 0 ? 0xC0000001 : 0;
}
