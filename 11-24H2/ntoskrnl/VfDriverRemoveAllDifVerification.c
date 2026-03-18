/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x1406110D4
 * Callers:
 *     VfDriverProcessUnload @ 0x14061105C (VfDriverProcessUnload.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140B8A4B4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B8A63C (VfDriverUnlock.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9B138 (VfSuspectRemoveDifVolatileVerification.c)
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
