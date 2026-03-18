/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F8568
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F7F68 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C01AA770 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1)
{
  __int64 v2; // rcx

  KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Mouse::InjectInput();
  v2 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)gptCursorAsync == (_DWORD)v2 )
    v2 = *((unsigned int *)a1 + 3);
  if ( (*((_DWORD *)a1 + 11) & 2) != 0 )
    Enforced(v2);
  SynthesizeMouseInput(0LL);
}
