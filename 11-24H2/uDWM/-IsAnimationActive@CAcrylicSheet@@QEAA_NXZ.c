/*
 * XREFs of ?IsAnimationActive@CAcrylicSheet@@QEAA_NXZ @ 0x1800A2228
 * Callers:
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180069148 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAcrylicSheet::IsAnimationActive(CAcrylicSheet *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 63) || *((_QWORD *)this + 61) )
    return 1;
  return result;
}
