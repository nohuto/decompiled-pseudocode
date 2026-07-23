/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x14060F694
 * Callers:
 *     VfDriverProcessUnload @ 0x14060F61C (VfDriverProcessUnload.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B8C63C (VfDriverUnlock.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9D138 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 VfDriverRemoveAllDifVerification()
{
  __int64 i; // rdi
  PVOID *j; // rbx

  VfDriverLock();
  MiAcquireLoadLock(1);
  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      if ( ((_DWORD)j[13] & 0x2000000) != 0
        && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 40), (PCUNICODE_STRING)(j + 11), 1u) )
      {
        VfSuspectRemoveDifVolatileVerification(j);
      }
    }
  }
  MmReleaseLoadLock(0LL);
  return VfDriverUnlock();
}
