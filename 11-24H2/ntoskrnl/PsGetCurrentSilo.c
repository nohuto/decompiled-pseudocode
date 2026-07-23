/*
 * XREFs of PsGetCurrentSilo @ 0x1403FCA20
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405940D8 (IoRevokeHandlesForProcess.c)
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     PsRootSiloInformation @ 0x1407724D0 (PsRootSiloInformation.c)
 *     PsRegisterSiloMonitor @ 0x140779250 (PsRegisterSiloMonitor.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082B744 (ObGetSiloRootDirectoryPath.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     NtOpenJobObject @ 0x14085BE00 (NtOpenJobObject.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     NtQueryFullAttributesFile @ 0x1408AA720 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1408AA9A0 (NtQueryAttributesFile.c)
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409590B0 (IoQueryInformationByName.c)
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1409BA838 (IopReferenceDriverObjectByName.c)
 *     NtOpenSymbolicLinkObject @ 0x1409D9750 (NtOpenSymbolicLinkObject.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     NtOpenDirectoryObject @ 0x1409E2E70 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1409EFCE0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1409EFE60 (NtOpenSection.c)
 *     NtOpenMutant @ 0x1409FFA80 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140A10CD0 (NtOpenSemaphore.c)
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 *     NtOpenSession @ 0x140A4FDD0 (NtOpenSession.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140A7BA80 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA0A70 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
    return CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Padding[3]; result; result = result[81].Blink )
  {
    if ( ((__int64)result[97].Flink & 0x40000000) != 0 )
      break;
  }
  return result;
}
