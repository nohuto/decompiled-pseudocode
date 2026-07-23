/*
 * XREFs of ExAllocatePoolMm @ 0x1402DA890
 * Callers:
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiGetBackgroundHugePageToZero @ 0x14041C6E0 (MiGetBackgroundHugePageToZero.c)
 *     MiComputeIdealDpcGang @ 0x1404B9CCC (MiComputeIdealDpcGang.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D99E4 (MiLockWorkingSetForLargeMapping.c)
 *     MiInitializeSlabIdentities @ 0x14067CA78 (MiInitializeSlabIdentities.c)
 *     MiAllocatePrcb @ 0x14068349C (MiAllocatePrcb.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1406837B4 (MiAbsorbPossibleEngineChanges.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x140683D78 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406854B4 (MiAllocateAcceleratorDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140688A2C (MiZeroPageCalibrate.c)
 *     MiInitializeScrubPacket @ 0x1407ED850 (MiInitializeScrubPacket.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407EF2C8 (MiCreatePerNodeZeroingConductor.c)
 *     MiCreateZeroThreadContext @ 0x1407EF3FC (MiCreateZeroThreadContext.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiAllocateReadList @ 0x1409C9A04 (MiAllocateReadList.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C471C0 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B62670 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePoolMm(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // rbx
  NTSTATUS v5; // ecx
  __int64 result; // rax
  ULONG_PTR v7; // r8
  __int64 v8[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = BugCheckParameter3;
  *(_OWORD *)v8 = 0LL;
  if ( (BugCheckParameter3 & 0x1C0) == 0
    || (((BugCheckParameter3 & 0x1C0) - 1) & BugCheckParameter3 & 0x1C0) != 0
    || (BugCheckParameter3 & 0xFFFFF000) != 0
    || (BugCheckParameter3 & 0x800) != 0 )
  {
    v5 = -1073741811;
    result = 0LL;
    goto LABEL_4;
  }
  v7 = a3 & 0x7FFFFFFF;
  if ( !(_DWORD)v7 )
    v7 = 811884866LL;
  if ( (ExpPoolFlags & 8) != 0 )
  {
    if ( (BugCheckParameter3 & 0x210) == 0 )
    {
      LODWORD(v8[1]) = 32;
      v8[0] = v8[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
      return VfHandlePoolAlloc(
               NonPagedPool,
               BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL,
               a2,
               v7,
               LowPoolPriority,
               (__int64)v8,
               1,
               retaddr);
    }
    v4 = BugCheckParameter3 & 0xFFFFFFFFFFFFFDFFuLL;
    if ( (BugCheckParameter3 & 0x10) != 0 && (MmVerifierData & 1) != 0 )
      v4 = BugCheckParameter3 & 0xFFFFFFFEFFFFFDFFuLL | 0x100000000LL;
  }
  if ( (v4 & 1) != 0 )
    result = ExpAllocatePoolWithQuotaTag(v4);
  else
    result = ExpAllocatePoolWithTagFromNode(v4, a2, v7, a4);
  if ( !result )
  {
    v5 = -1073741670;
LABEL_4:
    if ( (v4 & 0x20) != 0 )
      RtlRaiseStatus(v5);
  }
  return result;
}
