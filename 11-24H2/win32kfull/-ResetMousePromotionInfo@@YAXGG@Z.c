/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1400A9D7C
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1400A7F68 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x14026C894 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1400A7854 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x1400A9780 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402AEAC4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // si
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // xmm1_8

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = UserSessionState + 16416;
  if ( *(_WORD *)(UserSessionState + 16416) )
  {
    v6 = UserSessionState + 16520;
    if ( (unsigned int)CacheIncludesPendingPromotion((struct tagMOUSE_PROMOTION_CACHE *)(UserSessionState + 16520), v4) )
      ForceCompletePendingPromotion();
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v5 + 112));
    v7 = 4LL;
    do
    {
      v8 = *(_QWORD *)(v6 - 8);
      *(_OWORD *)v6 = *(_OWORD *)(v6 - 24);
      *(_QWORD *)(v6 + 16) = v8;
      v6 -= 24LL;
      --v7;
    }
    while ( v7 );
    *(_WORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  *(_WORD *)v5 = v2;
  *(_WORD *)(v5 + 8) = v2;
}
