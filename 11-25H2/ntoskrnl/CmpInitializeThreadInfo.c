/*
 * XREFs of CmpInitializeThreadInfo @ 0x1403F5C00
 * Callers:
 *     CmInitializeThreadInfo @ 0x14065C5E4 (CmInitializeThreadInfo.c)
 *     CmpLazyWriteWorker @ 0x14065C790 (CmpLazyWriteWorker.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406ED9CC (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407C04F0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x1407C05B0 (NtInitializeRegistry.c)
 *     NtLockRegistryKey @ 0x1407C0680 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x1407C0760 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x1407C08A0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x1407C1840 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407C1C30 (NtThawRegistry.c)
 *     NtUnloadKey2 @ 0x1407C1CD0 (NtUnloadKey2.c)
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     CmpEnumerateCallback @ 0x1407C21C0 (CmpEnumerateCallback.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmShutdownSystem @ 0x1407C5A50 (CmShutdownSystem.c)
 *     CmInitServerSiloState @ 0x1407C63E4 (CmInitServerSiloState.c)
 *     CmReconcileAndValidateAllHives @ 0x1407C86CC (CmReconcileAndValidateAllHives.c)
 *     CmpFreezeThawWorker @ 0x1407C8FA0 (CmpFreezeThawWorker.c)
 *     CmpBuildMachineHiveCache @ 0x1407C94A4 (CmpBuildMachineHiveCache.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407C97B0 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407D58B0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     NtUnloadKeyEx @ 0x140863E60 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x1408644B0 (NtUnloadKey.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     CmpCloseLightWeightTransaction @ 0x140866F90 (CmpCloseLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140866FE0 (CmpRollbackLightWeightTransaction.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087E720 (CmCallbackGetKeyObjectIDEx.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmSetCallbackObjectContext @ 0x140949880 (CmSetCallbackObjectContext.c)
 *     CmpRegisterCallbackInternal @ 0x1409950AC (CmpRegisterCallbackInternal.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     CmpDelayCloseWorker @ 0x1409D7200 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409D7620 (CmCallbackGetKeyObjectID.c)
 *     NtCommitRegistryTransaction @ 0x1409D8FB0 (NtCommitRegistryTransaction.c)
 *     CmGetRootKeyObjectForSilo @ 0x1409E2F4C (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x1409E3058 (CmInitSiloNamespace.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     NtOpenKeyTransactedEx @ 0x140A315F0 (NtOpenKeyTransactedEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     NtCreateRegistryTransaction @ 0x140A4ADE0 (NtCreateRegistryTransaction.c)
 *     CmpForceFlushWorker @ 0x140A50B10 (CmpForceFlushWorker.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 *     CmEtwRunDown @ 0x140A6CC98 (CmEtwRunDown.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmpFreeSiloContextCallback @ 0x140A82C70 (CmpFreeSiloContextCallback.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A4E0 (CmpDelayFreeRMWorker.c)
 *     NtCreateKey @ 0x140AD2A50 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140AD2B50 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140AD3490 (NtOpenKeyEx.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BA9010 (CmSaveKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 *     CmpGetSystemControlValues @ 0x140C377A8 (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

_KAFFINITY_EX *__fastcall CmpInitializeThreadInfo(_KAFFINITY_EX *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _KAFFINITY_EX *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].UserAffinity;
  if ( result )
  {
    *(_OWORD *)&a1->Count = *(_OWORD *)&result->Count;
    *(_QWORD *)&a1->Count = result;
  }
  else
  {
    a1->Bitmap[0] = 0LL;
    *(_QWORD *)&a1->Count = 0LL;
  }
  CurrentThread[1].UserAffinity = a1;
  return result;
}
