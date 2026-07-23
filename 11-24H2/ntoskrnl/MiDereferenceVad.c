/*
 * XREFs of MiDereferenceVad @ 0x140290A60
 * Callers:
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404C7270 (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
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
