/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140B98568
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140B8CBB0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140B8CC30 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140B8CC80 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateMdl @ 0x140B8CE80 (VerifierIoAllocateMdl.c)
 *     VerifierIoAllocateWorkItem @ 0x140B8CF40 (VerifierIoAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140B8D000 (VerifierIoSetCompletionRoutineEx.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B98490 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140BA1704 (VfRlrsKeInjectStatusAlerted.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140BA17D0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140BA2060 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140BA2170 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140BA2250 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140BA2300 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140BA2380 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140BA23F0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140BA24E0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140BA2520 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140BA2600 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140BA2700 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140BA2990 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA2B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140B850DC (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B9865C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x140B98BEC (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x140B98D64 (ViFaultsIsCurrentAppTarget.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  ULONG v3; // edi
  unsigned int v4; // esi

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FFEFAC;
    return 0LL;
  }
  v3 = VfFaultInjectionProbability;
  v4 = VfFaultInjectionMaxProbability;
  if ( !VfFaultInjectionProbability
    || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
    || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
    || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs
    || !(unsigned int)ViFaultsIsCurrentAppTarget() )
  {
    return 0LL;
  }
  if ( VfRandomGetNumber(0, v4) >= v3 )
  {
    ++dword_140FFEF9C;
    if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
      return 0LL;
    ++dword_140FFEFA0;
  }
  else
  {
    ++dword_140FFEF98;
  }
  ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  return 1LL;
}
