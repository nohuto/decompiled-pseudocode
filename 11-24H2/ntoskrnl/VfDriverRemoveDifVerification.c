/*
 * XREFs of VfDriverRemoveDifVerification @ 0x140B8A4F0
 * Callers:
 *     VfDriverEnableDisableVerifier @ 0x140B8A1C0 (VfDriverEnableDisableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     ExClearPoolFlags @ 0x140653E60 (ExClearPoolFlags.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140B8A4B4 (VfDriverLock.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9A640 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9B138 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 __fastcall VfDriverRemoveDifVerification(__int64 a1)
{
  unsigned int v2; // esi
  const UNICODE_STRING *v3; // rdi
  PVOID *i; // rbx

  v2 = 0;
  VfDriverLock();
  v3 = (const UNICODE_STRING *)(a1 + 40);
  if ( RtlEqualUnicodeString(&VfKernelImageName, v3, 1u) )
  {
    if ( (VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0 )
      ExClearPoolFlags(8);
    VfSuspectDifRemoveEntry(v3);
    KernelVerifier = 0;
  }
  else
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      if ( RtlEqualUnicodeString(v3, (PCUNICODE_STRING)(i + 11), 1u) )
      {
        v2 = VfSuspectRemoveDifVolatileVerification(i);
        break;
      }
    }
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v2;
}
