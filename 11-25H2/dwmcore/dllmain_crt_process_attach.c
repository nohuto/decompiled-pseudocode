/*
 * XREFs of dllmain_crt_process_attach @ 0x18025C358
 * Callers:
 *     dllmain_crt_dispatch @ 0x18025C300 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18025BF24 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18025BF64 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18025BFA0 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18025C0C4 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18025C198 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18025C238 (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x18025CD50 (__scrt_fastfail.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x18025CF70 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18025CF98 (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x18025CFBC (__scrt_get_dyn_tls_init_callback.c)
 *     _RTC_Initialize @ 0x18025CFCC (_RTC_Initialize.c)
 *     _initterm_0 @ 0x18025D0D6 (_initterm_0.c)
 *     _initterm_e_0 @ 0x18025D0E2 (_initterm_e_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall dllmain_crt_process_attach(__int64 a1, __int64 a2)
{
  char v4; // bl
  char v5; // di
  void (__fastcall **dyn_tls_init_callback)(__int64, __int64, __int64); // rax
  void (__fastcall **v7)(__int64, __int64, __int64); // rbx

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v4 = _scrt_acquire_startup_lock();
  v5 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18025C469LL);
  }
  _scrt_current_native_startup_state = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v5 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v4);
  if ( v5 )
    return 0LL;
  dyn_tls_init_callback = (void (__fastcall **)(__int64, __int64, __int64))_scrt_get_dyn_tls_init_callback();
  v7 = dyn_tls_init_callback;
  if ( *dyn_tls_init_callback )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)dyn_tls_init_callback) )
      (*v7)(a1, 2LL, a2);
  }
  ++dword_180405994;
  return 1LL;
}
