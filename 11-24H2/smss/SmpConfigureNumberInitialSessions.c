/*
 * XREFs of SmpConfigureNumberInitialSessions @ 0x140013EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureNumberInitialSessions(__int64 a1, int a2, unsigned int *a3, int a4)
{
  unsigned int v4; // eax

  if ( SmpManufacturingMode == 1 || !SmpHostSmss )
    goto LABEL_10;
  if ( a4 == 4 && a2 == 4 )
    v4 = *a3;
  else
    v4 = 1;
  SmpNumberInitialSessions = v4;
  if ( v4 <= 2 )
  {
    if ( v4 )
      return 0LL;
LABEL_10:
    SmpNumberInitialSessions = 1;
    return 0LL;
  }
  SmpNumberInitialSessions = 2;
  return 0LL;
}
