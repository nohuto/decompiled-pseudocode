/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x14041EE80
 * Callers:
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     CmpTestRegistryLock @ 0x1406680A4 (CmpTestRegistryLock.c)
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407D0990 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D0CE0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1090 (NtSaveMergedKeys.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x140847B20 (CmPostCallbackNotification.c)
 *     CmPostCallbackNotificationEx @ 0x140847C20 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     CmpThreadInfoLogStack @ 0x1404BECC0 (CmpThreadInfoLogStack.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rax

  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( dword_140EF6D28 )
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
