/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x140414BC0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmpTestRegistryLock @ 0x140666994 (CmpTestRegistryLock.c)
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x140843DE0 (CmPostCallbackNotification.c)
 *     CmPostCallbackNotificationEx @ 0x140843EE0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     CmpThreadInfoLogStack @ 0x1404B9E80 (CmpThreadInfoLogStack.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rax

  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( dword_140EF6F68 )
  {
    if ( !UserAffinity )
    {
      CmpThreadInfoLogStack();
      KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
    }
  }
  else if ( !UserAffinity )
  {
    CmpThreadInfoLogStack();
    return ExIsResourceAcquiredSharedLite(CmpRegistryLock);
  }
  return UserAffinity->StaticBitmap[1];
}
