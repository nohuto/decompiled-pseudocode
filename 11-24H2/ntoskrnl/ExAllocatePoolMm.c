/*
 * XREFs of ExAllocatePoolMm @ 0x1402775A0
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D1EB4 (MiLockWorkingSetForLargeMapping.c)
 *     MiInitializeSlabIdentities @ 0x140689438 (MiInitializeSlabIdentities.c)
 *     MiAllocatePrcb @ 0x14068FE5C (MiAllocatePrcb.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x140690674 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 *     MiInitializeScrubPacket @ 0x1407FDE50 (MiInitializeScrubPacket.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF8C0 (MiCreatePerNodeZeroingConductor.c)
 *     MiCreateZeroThreadContext @ 0x1407FF9F4 (MiCreateZeroThreadContext.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiAllocateReadList @ 0x140939930 (MiAllocateReadList.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePoolMm(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // rbx
  NTSTATUS v5; // ecx
  __int64 result; // rax
  ULONG_PTR v7; // r8
  volatile CCHAR v8; // al
  __int64 v9[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = BugCheckParameter3;
  *(_OWORD *)v9 = 0LL;
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
  v8 = KeNumberProcessorsGroup0[9];
  if ( (v8 & 8) != 0 )
  {
    if ( (BugCheckParameter3 & 0x210) == 0 )
    {
      LODWORD(v9[1]) = 32;
      v9[0] = v9[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
      return VfHandlePoolAlloc(
               NonPagedPool,
               BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL,
               a2,
               v7,
               LowPoolPriority,
               (__int64)v9,
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
