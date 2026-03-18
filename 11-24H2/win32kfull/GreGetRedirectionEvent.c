/*
 * XREFs of GreGetRedirectionEvent @ 0x140219C90
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x14026B1A0 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1402A1CB0 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 */

__int64 __fastcall GreGetRedirectionEvent(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  Gre::Base *v2; // rcx

  v1 = Gre::Base::Globals(a1);
  if ( IsDwmActive(v2) )
    return *(_QWORD *)(*((_QWORD *)v1 + 17) + 336LL);
  else
    return 0LL;
}
