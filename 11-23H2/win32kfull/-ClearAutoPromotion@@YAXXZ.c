/*
 * XREFs of ?ClearAutoPromotion@@YAXXZ @ 0x1C01F7224
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F7188 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F8168 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearAutoPromotion(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserSessionState(a1);
  *(_DWORD *)(v1 + 16320) &= 0xFFFFFFE9;
}
