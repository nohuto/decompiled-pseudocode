/*
 * XREFs of _RTC_Terminate @ 0x1800A89A8
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800A78A0 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl RTC_Terminate()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_tzz; i < &_rtc_tzz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
