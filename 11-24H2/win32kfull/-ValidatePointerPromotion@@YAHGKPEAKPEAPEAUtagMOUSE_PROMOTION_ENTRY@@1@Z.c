/*
 * XREFs of ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1400A7D0C
 * Callers:
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1400A7B88 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402AEAC4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 * Callees:
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1400A7EC4 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1400A7F24 (-FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1402173C8 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140224290 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 */

__int64 __fastcall ValidatePointerPromotion(
        unsigned __int16 a1,
        unsigned int a2,
        unsigned int *a3,
        struct tagMOUSE_PROMOTION_ENTRY **a4,
        struct tagMOUSE_PROMOTION_ENTRY **a5)
{
  unsigned int v5; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct tagMOUSE_PROMOTION_QUEUE *v14; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v18; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v19; // rbx
  int v20; // eax
  struct tagMOUSE_PROMOTION_ENTRY **v21; // rax
  int v23; // r8d
  bool v24; // zf
  struct tagMOUSE_PROMOTION_ENTRY *v25; // [rsp+20h] [rbp-38h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v26; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+70h] [rbp+18h] BYREF

  v5 = *a3;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  CacheById = FindCacheById(a1, &v27);
  if ( !CacheById
    || CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(W32GetUserSessionState(v10, v9) + 16424)
    && (*(_DWORD *)(W32GetUserSessionState(v13, v12) + 16680) & 2) != 0 )
  {
    return 0LL;
  }
  v14 = (struct tagMOUSE_PROMOTION_CACHE *)((char *)CacheById + 8);
  if ( v5 )
  {
    if ( (unsigned int)FindMousePromotionInContactRange(v14, a2, &v25, &v26) )
    {
      v18 = v25;
      v19 = v26;
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
    }
  }
  else
  {
    MousePromotionEntry = FindMousePromotionEntry(v14, a2);
    v18 = MousePromotionEntry;
    if ( MousePromotionEntry && (*((_DWORD *)MousePromotionEntry + 5) & 0x40004) != 0 )
      v18 = 0LL;
    v19 = v18;
  }
  if ( !v18 )
    return 0LL;
  if ( v5 == 0x10000000 )
  {
    v5 = DetectPromotionType(v18, v19);
    if ( v5 == v23 )
    {
      if ( CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(W32GetUserSessionState(v17, v16) + 16424) )
      {
        *a3 = 0x10000000;
        goto LABEL_17;
      }
      return 0LL;
    }
  }
  v20 = v5 & 0x20000;
  if ( !v19 )
  {
    if ( v20 )
      return 0LL;
    v24 = CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(W32GetUserSessionState(v17, v16) + 16424);
    goto LABEL_28;
  }
  if ( v20 )
  {
    v24 = *((_DWORD *)v19 + 9) == a2;
LABEL_28:
    if ( !v24 )
      return 0LL;
  }
  if ( !v19 || (v5 & 0x1000000) != 0 || (*((_DWORD *)v19 + 5) & 0x8000) == 0 )
  {
    *a3 = v5;
LABEL_17:
    v21 = a5;
    *a4 = v18;
    *v21 = v19;
    return 1LL;
  }
  return 0LL;
}
