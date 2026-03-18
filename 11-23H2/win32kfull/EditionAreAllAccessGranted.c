/*
 * XREFs of EditionAreAllAccessGranted @ 0x1C007F540
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C007F6B0 (CheckGrantedAccess.c)
 */

__int64 __fastcall EditionAreAllAccessGranted(__int64 a1, __int64 a2)
{
  return CheckGrantedAccess(a1, a2);
}
