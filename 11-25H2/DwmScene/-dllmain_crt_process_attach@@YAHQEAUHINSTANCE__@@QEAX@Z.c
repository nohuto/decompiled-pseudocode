/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18000AF88
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000AF30 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18000B3AC (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18000B3EC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18000B428 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18000B54C (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18000B620 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18000B6C0 (__scrt_release_startup_lock.c)
 *     sub_18000B874 @ 0x18000B874 (sub_18000B874.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18000B89C (__scrt_initialize_default_local_stdio_options.c)
 *     sub_18000B8C0 @ 0x18000B8C0 (sub_18000B8C0.c)
 *     sub_18000B8E0 @ 0x18000B8E0 (sub_18000B8E0.c)
 *     sub_18000BA48 @ 0x18000BA48 (sub_18000BA48.c)
 *     _initterm @ 0x18000BE76 (_initterm.c)
 *     _initterm_e @ 0x18000BE82 (_initterm_e.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
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
  if ( dword_1801C2C94 )
  {
    sub_18000B8E0(7LL);
    __debugbreak();
    JUMPOUT(0x18000B099LL);
  }
  dword_1801C2C94 = 1;
  if ( (unsigned __int8)_scrt_dllmain_before_initialize_c() )
  {
    sub_18000BA48();
    sub_18000B874();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)_scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_1800F20F0, (_PVFV *)&qword_1800F3868);
        dword_1801C2C94 = 2;
        v5 = 0;
      }
    }
  }
  LOBYTE(v6) = v4;
  _scrt_release_startup_lock(v6);
  if ( v5 )
    return 0LL;
  v7 = (void (__fastcall **)(HINSTANCE, __int64, void *const))sub_18000B8C0();
  v8 = v7;
  if ( *v7 )
  {
    if ( (unsigned __int8)_scrt_is_nonwritable_in_current_image(v7) )
      (*v8)(a1, 2LL, a2);
  }
  ++dword_1801C2C90;
  return 1LL;
}
