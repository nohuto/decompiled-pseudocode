/*
 * XREFs of _RTC_Initialize @ 0x140005734
 * Callers:
 *     pre_c_initialization @ 0x140004C40 (pre_c_initialization.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl RTC_Initialize()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_izz; i < &_rtc_izz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
