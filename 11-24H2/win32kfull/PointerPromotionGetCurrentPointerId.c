/*
 * XREFs of PointerPromotionGetCurrentPointerId @ 0x140214970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerPromotionGetCurrentPointerId(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(a1, a2) + 16416);
}
