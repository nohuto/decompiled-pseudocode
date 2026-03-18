/*
 * XREFs of ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1400A7EC4
 * Callers:
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1400A7D0C (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1400A86A8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int64 a1, unsigned int *a2)
{
  __int16 v3; // di
  __int64 UserSessionState; // rcx
  __int64 i; // r10
  struct tagMOUSE_PROMOTION_CACHE *result; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 5 )
      return 0LL;
    result = (struct tagMOUSE_PROMOTION_CACHE *)(UserSessionState + 8 * ((unsigned int)i + 2 * i + 2053));
    if ( *(_WORD *)result == v3 )
      break;
  }
  *a2 = i;
  return result;
}
