/*
 * XREFs of MiDereferenceVad @ 0x1402A8080
 * Callers:
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CE0C0 (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 == -1 )
    __fastfail(0xEu);
  return v1 == 0;
}
