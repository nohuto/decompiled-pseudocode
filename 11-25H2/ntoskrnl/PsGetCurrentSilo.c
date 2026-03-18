/*
 * XREFs of PsGetCurrentSilo @ 0x1403FA570
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140593A48 (IoRevokeHandlesForProcess.c)
 *     PsRootSiloInformation @ 0x1407628F0 (PsRootSiloInformation.c)
 *     PsRegisterSiloMonitor @ 0x1407694A0 (PsRegisterSiloMonitor.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     NtOpenJobObject @ 0x1408DB200 (NtOpenJobObject.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x1408EF430 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1408EF6B0 (NtQueryAttributesFile.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     VRegEnabledInJob @ 0x14094A6C0 (VRegEnabledInJob.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     IoQueryInformationByName @ 0x1409870E0 (IoQueryInformationByName.c)
 *     IopReferenceDriverObjectByName @ 0x1409AE1B8 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     NtOpenSymbolicLinkObject @ 0x1409E0AA0 (NtOpenSymbolicLinkObject.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     NtOpenDirectoryObject @ 0x1409EDFF0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1409FCB90 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1409FCCB0 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140A040F0 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140A0F110 (NtOpenSemaphore.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     NtOpenSession @ 0x140A54C80 (NtOpenSession.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140A7D9A0 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA0AB0 (IopFastQueryNetworkAttributes.c)
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
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
