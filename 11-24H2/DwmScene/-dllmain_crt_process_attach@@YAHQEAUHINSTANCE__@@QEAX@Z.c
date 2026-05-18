/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000B358
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000B300 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18000B77C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18000B7BC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18000B7F8 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18000B91C (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18000B9F0 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18000BA90 (__scrt_release_startup_lock.c)
 *     sub_18000BE80 @ 0x18000BE80 (sub_18000BE80.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18000BEA8 (__scrt_initialize_default_local_stdio_options.c)
 *     sub_18000BECC @ 0x18000BECC (sub_18000BECC.c)
 *     sub_18000BEEC @ 0x18000BEEC (sub_18000BEEC.c)
 *     sub_18000C054 @ 0x18000C054 (sub_18000C054.c)
 *     _initterm @ 0x18000C2D6 (_initterm.c)
 *     _initterm_e @ 0x18000C2E2 (_initterm_e.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v4; // bl
  char v5; // di
  __int64 v6; // rcx
  void (__fastcall **v7)(HINSTANCE, __int64, void *const); // rax
  void (__fastcall **v8)(HINSTANCE, __int64, void *const); // rbx

  if ( !(unsigned __int8)_scrt_initialize_crt(0LL) )
    return 0LL;
  v4 = _scrt_acquire_startup_lock();
  v5 = 1;
  if ( dword_1801C3CB4 )
  {
    sub_18000BEEC(7LL);
    __debugbreak();
    JUMPOUT(0x18000B469LL);
  }
  dword_1801C3CB4 = 1;
  if ( (unsigned __int8)_scrt_dllmain_before_initialize_c() )
  {
    sub_18000C054();
    sub_18000BE80();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)_scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_1800F30F8, (_PVFV *)&qword_1800F4870);
        dword_1801C3CB4 = 2;
        v5 = 0;
      }
    }
  }
  LOBYTE(v6) = v4;
  _scrt_release_startup_lock(v6);
  if ( v5 )
    return 0LL;
  v7 = (void (__fastcall **)(HINSTANCE, __int64, void *const))sub_18000BECC();
  v8 = v7;
  if ( *v7 )
  {
    if ( (unsigned __int8)_scrt_is_nonwritable_in_current_image(v7) )
      (*v8)(a1, 2LL, a2);
  }
  ++dword_1801C3CB0;
  return 1LL;
}
