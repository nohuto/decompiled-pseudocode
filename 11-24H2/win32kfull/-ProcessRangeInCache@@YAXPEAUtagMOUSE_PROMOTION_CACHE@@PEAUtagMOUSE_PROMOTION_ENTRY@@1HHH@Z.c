/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1400A8914
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1400A86A8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1400A79B0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1400A8A30 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1400A8ABC (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1400A8B04 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1402AEB78 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_CACHE *a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        int a5,
        int a6)
{
  struct tagMOUSE_PROMOTION_QUEUE *v6; // rbx
  __int64 v10; // rdx
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v17; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v18[2]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct tagMOUSE_PROMOTION_CACHE *)((char *)a1 + 8);
  ClearMousePromotionQueueUntil((struct tagMOUSE_PROMOTION_CACHE *)((char *)a1 + 8), a2);
  *(_OWORD *)v18 = 0LL;
  ExtractRangeFromQueue(v6, (struct tagMOUSE_PROMOTION_QUEUE *)v18, a2, a3);
  v12 = v18[1];
  v13 = v18[0];
  if ( a4 )
  {
    *((_QWORD *)v18[1] + 1) = *((_QWORD *)v18[0] + 1);
    while ( 1 )
    {
      v11 = *(struct tagMOUSE_PROMOTION_ENTRY **)v13;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v13 == v12 )
        break;
      *(_QWORD *)v13 = *(_QWORD *)v11;
      Win32FreePool(v11);
    }
  }
  if ( a5 || a6 )
  {
    v10 = (__int64)v13;
    if ( v13 )
    {
      do
      {
        if ( a5 )
          *(_DWORD *)(v10 + 44) &= ~1u;
        if ( a6 )
          *(_DWORD *)(v10 + 44) |= 0x40u;
        v10 = *(_QWORD *)v10;
      }
      while ( v10 );
    }
  }
  if ( HasPendingPromotion((__int64)v11, v10) )
  {
    v17 = v13;
    v13 = *(struct tagMOUSE_PROMOTION_ENTRY **)v13;
    Win32FreePool(v17);
    ResetPendingPromotion();
  }
  if ( v13 )
  {
    UserSessionState = W32GetUserSessionState(v15, v14);
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16544), v13, v12);
  }
}
