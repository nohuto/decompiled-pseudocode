/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14043A1F0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772B48 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140773518 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140773644 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140773808 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14078ED1C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793708 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA444 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6E80 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1407B6F40 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140833C84 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14092BAE4 (VrpHandleIoctlGetVirtualRootKey.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A3B628 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140A4AAF4 (SepRmLsaConnectRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140B84AF8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
