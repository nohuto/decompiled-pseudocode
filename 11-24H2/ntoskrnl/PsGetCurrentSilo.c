/*
 * XREFs of PsGetCurrentSilo @ 0x140402420
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 *     ObpCreateSymbolicLinkName @ 0x1406F8670 (ObpCreateSymbolicLinkName.c)
 *     PsRootSiloInformation @ 0x1407722B0 (PsRootSiloInformation.c)
 *     PsRegisterSiloMonitor @ 0x140779150 (PsRegisterSiloMonitor.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     NtQueryFullAttributesFile @ 0x1408A2080 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1408A2300 (NtQueryAttributesFile.c)
 *     NtOpenJobObject @ 0x1408EA5D0 (NtOpenJobObject.c)
 *     VRegEnabledInJob @ 0x1409296E0 (VRegEnabledInJob.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409708A0 (IoQueryInformationByName.c)
 *     PopGetSettingNotificationName @ 0x1409BAE7C (PopGetSettingNotificationName.c)
 *     IopReferenceDriverObjectByName @ 0x1409C711C (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     NtOpenSymbolicLinkObject @ 0x1409DF9A0 (NtOpenSymbolicLinkObject.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     NtOpenDirectoryObject @ 0x1409E7EB0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1409F7370 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1409F74F0 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140A03550 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140A17B60 (NtOpenSemaphore.c)
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 *     NtOpenSession @ 0x140A58620 (NtOpenSession.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140A81020 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA5A00 (IopFastQueryNetworkAttributes.c)
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
