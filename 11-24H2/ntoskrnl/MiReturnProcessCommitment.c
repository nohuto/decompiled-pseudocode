/*
 * XREFs of MiReturnProcessCommitment @ 0x1404561A4
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiCleanProcessPhysicalPages @ 0x140A071B8 (MiCleanProcessPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 984), -a2);
}
