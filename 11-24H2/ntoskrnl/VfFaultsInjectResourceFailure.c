/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140B96568
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140B8ABB0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140B8AC30 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140B8AC80 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateMdl @ 0x140B8AE80 (VerifierIoAllocateMdl.c)
 *     VerifierIoAllocateWorkItem @ 0x140B8AF40 (VerifierIoAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140B8B000 (VerifierIoSetCompletionRoutineEx.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B96490 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B9F704 (VfRlrsKeInjectStatusAlerted.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140B9F7D0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140BA0060 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140BA0170 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140BA0250 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140BA0300 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140BA0380 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140BA03F0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140BA04E0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140BA0520 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140BA0600 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140BA0700 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140BA0990 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA0B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140B830DC (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B9665C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x140B96BEC (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x140B96D64 (ViFaultsIsCurrentAppTarget.c)
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
    ++dword_140FFDFAC;
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
    ++dword_140FFDF9C;
    if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
      return 0LL;
    ++dword_140FFDFA0;
  }
  else
  {
    ++dword_140FFDF98;
  }
  ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  return 1LL;
}
