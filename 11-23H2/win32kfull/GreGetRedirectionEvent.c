/*
 * XREFs of GreGetRedirectionEvent @ 0x1C009E978
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C009E900 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C01DF970 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 */

__int64 __fastcall GreGetRedirectionEvent(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  v1 = Gre::Base::Globals(a1);
  if ( (unsigned int)IsDwmActive() )
    return *(_QWORD *)(*((_QWORD *)v1 + 38) + 336LL);
  else
    return 0LL;
}
