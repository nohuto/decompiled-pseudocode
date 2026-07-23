/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140B9D1A4
 * Callers:
 *     VfVolatileRemoveDifVerification @ 0x140612FA0 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9C640 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140B9CE84 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140B9CEA4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9CF44 (VfSuspectDriversUnloadCallback.c)
 *     VfSuspectDriversIsLoaded @ 0x140C3DE84 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 40), String2, 1u) )
      return i;
  }
  return 0LL;
}
