/*
 * XREFs of dllmain_crt_process_detach @ 0x18005E400
 * Callers:
 *     dllmain_crt_dispatch @ 0x18005E280 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18005C7F0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18005C944 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18005C97C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18005CB1C (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18005CB48 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x18005D240 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18005E6F0 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x18005E784 (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v3; // bl
  __int64 v4; // rcx
  BOOL v5; // ebx

  if ( dword_180148290 <= 0 )
    return 0LL;
  --dword_180148290;
  v3 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x18005E484LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  v5 = _scrt_uninitialize_crt(v4, 0) != 0;
  _scrt_dllmain_uninitialize_critical();
  return v5;
}
