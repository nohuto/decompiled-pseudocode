/*
 * XREFs of ExAllocatePoolMm @ 0x1402ACBC0
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x140209AF0 (MiGetBackgroundHugePageToZero.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiComputeIdealDpcGang @ 0x1403A8170 (MiComputeIdealDpcGang.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D8A64 (MiLockWorkingSetForLargeMapping.c)
 *     MiInitializeSlabIdentities @ 0x140688308 (MiInitializeSlabIdentities.c)
 *     MiAllocatePrcb @ 0x14068ED80 (MiAllocatePrcb.c)
 *     MiAbsorbPossibleEngineChanges @ 0x14068F0A4 (MiAbsorbPossibleEngineChanges.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x14068F5A4 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140690914 (MiAllocateAcceleratorDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 *     MiInitializeScrubPacket @ 0x1407FD6E0 (MiInitializeScrubPacket.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF17C (MiCreatePerNodeZeroingConductor.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiAllocateReadList @ 0x140955F80 (MiAllocateReadList.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C584A0 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402ACCF0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePoolMm(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // rbx
  int v5; // ecx
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
