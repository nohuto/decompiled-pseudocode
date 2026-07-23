/*
 * XREFs of VfFaultsInitPhase0 @ 0x140B98338
 * Callers:
 *     VfRlrsEntry @ 0x140613640 (VfRlrsEntry.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 *     VfFaultsAddAllApps @ 0x140B981E0 (VfFaultsAddAllApps.c)
 *     VfFaultsAddAllTags @ 0x140B9828C (VfFaultsAddAllTags.c)
 */

void VfFaultsInitPhase0()
{
  __int64 v0; // rax
  KIRQL v1; // al
  KIRQL v2; // al

  ViFaultInjectionLock = 0LL;
  v0 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v0 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = (PVOID)ExAllocatePool3(0x40uLL, 72 * v0, 0x74746C46u, (__int64)&VfExtendedParameters, 1u);
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  qword_140F04438 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v1);
  if ( VerifierFaultTagsBufferSize != -1 && (unsigned int)(VerifierFaultTagsBufferSize - 2) <= 0xFE )
    VfFaultsAddAllTags(VerifierFaultTagsBuffer, ((unsigned __int64)(unsigned int)VerifierFaultTagsBufferSize - 2) >> 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  qword_140F04418 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  if ( VerifierFaultApplicationsBufferSize != -1 && (unsigned int)(VerifierFaultApplicationsBufferSize - 2) <= 0xFE )
    VfFaultsAddAllApps(
      VerifierFaultApplicationsBuffer,
      ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  ViFaultsInitialized = 1;
}
