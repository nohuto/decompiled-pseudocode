/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x140443110
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140763928 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140763A54 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140763C18 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14077FA8C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140784298 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpInitializeSiloState @ 0x140798D8C (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079AF34 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTimeZoneInitSiloState @ 0x1407A7590 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1407A7650 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14094A984 (VrpHandleIoctlGetVirtualRootKey.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409FED50 (EtwpTrackGuidEntryRegistrations.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmUnloadSystemImage @ 0x140A86260 (MmUnloadSystemImage.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140AA1BD8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140B72AF8 (IovpUnloadDriver.c)
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
