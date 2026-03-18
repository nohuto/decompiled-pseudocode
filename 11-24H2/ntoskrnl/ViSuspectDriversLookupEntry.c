/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140B9B1A4
 * Callers:
 *     VfVolatileRemoveDifVerification @ 0x1406149E0 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9A640 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140B9AE84 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140B9AEA4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9AF44 (VfSuspectDriversUnloadCallback.c)
 *     VfSuspectDriversIsLoaded @ 0x140C3BD2C (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
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
