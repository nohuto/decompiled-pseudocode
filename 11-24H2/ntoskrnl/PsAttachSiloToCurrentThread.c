/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14043CF50
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772928 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140772C80 (PspInitializeServerSiloDeferred.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407732F8 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140773424 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1407735E8 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14078ED4C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793668 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpInitializeSiloState @ 0x1407A815C (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407AA304 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6A30 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1407B6AF0 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1409299A4 (VrpHandleIoctlGetVirtualRootKey.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A45B44 (EtwpTrackGuidEntryRegistrations.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmUnloadSystemImage @ 0x140A8AD10 (MmUnloadSystemImage.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140AA5144 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140B82AF8 (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsAttachSiloToCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
