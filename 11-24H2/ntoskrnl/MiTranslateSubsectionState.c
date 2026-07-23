/*
 * XREFs of MiTranslateSubsectionState @ 0x14043F5C4
 * Callers:
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateSubsectionState(__int64 a1, int a2)
{
  int v2; // eax

  if ( *(_QWORD *)(a1 + 80) != 1LL )
    return 3221226051LL;
  if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
    return 3221225608LL;
  v2 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (v2 & 1) != 0 )
    return 3221225865LL;
  if ( a2 || !*(_DWORD *)(a1 + 104) )
    return 0LL;
  return (v2 & 8) != 0 ? -1073741792 : -1073741267;
}
