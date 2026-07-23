/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140B8C3B4
 * Callers:
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfUtilIsProtectedDriver @ 0x140B854AC (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140B8C250 (VfDriverEnableVerifier.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140B9C73C (VfSuspectDriversAllocateEntryEx.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  struct _KTHREAD *Lock; // rbp
  PVOID *i; // rbx
  __int64 Entry; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  v0 = 0;
  v6 = 0;
  VfDriverLock();
  Lock = MmAcquireLoadLock();
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver() && RtlImageNtHeaderEx(1u, i[6], 0LL, &OutHeaders) >= 0 )
    {
      Entry = VfSuspectDriversAllocateEntryEx(i);
      v4 = (void *)Entry;
      if ( !Entry )
      {
        v0 = -1073741670;
        break;
      }
      v6 = 0;
      v0 = VfDriverEnableVerifier(Entry, i, &v6);
      if ( !v6 )
        ExFreePoolWithTag(v4, 0);
      if ( v0 < 0 )
        break;
    }
  }
  MmReleaseLoadLock(Lock);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
