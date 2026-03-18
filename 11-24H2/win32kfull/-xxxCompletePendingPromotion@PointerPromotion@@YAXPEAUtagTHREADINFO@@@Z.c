/*
 * XREFs of ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026B200
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1400A79B0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402AEAC4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall PointerPromotion::xxxCompletePendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  UserSessionState = W32GetUserSessionState(this, a2);
  if ( HasPendingPromotion(v5, v4)
    && *(PointerPromotion **)(UserSessionState + 16648) == this
    && *(_DWORD *)(UserSessionState + 16644) == *((_DWORD *)this + 310) )
  {
    ForceCompletePendingPromotion();
    xxxProcessMousePromotionQueue(v7, v6);
  }
  else
  {
    *((_DWORD *)this + 310) = 0;
  }
}
