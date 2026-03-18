/*
 * XREFs of EditionAreAllAccessGranted @ 0x140174580
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x140174598 (CheckGrantedAccess.c)
 */

__int64 __fastcall EditionAreAllAccessGranted(__int64 a1, __int64 a2)
{
  return CheckGrantedAccess(a1, a2);
}
