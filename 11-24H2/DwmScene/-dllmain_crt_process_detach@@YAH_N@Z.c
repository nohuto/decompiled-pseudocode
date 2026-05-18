/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18000B470
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000B300 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18000B77C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18000B8C8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18000B900 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18000BA90 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18000BABC (__scrt_uninitialize_crt.c)
 *     sub_18000BE94 @ 0x18000BE94 (sub_18000BE94.c)
 *     sub_18000BEEC @ 0x18000BEEC (sub_18000BEEC.c)
 *     sub_18000C098 @ 0x18000C098 (sub_18000C098.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx

  if ( dword_1801C3CB0 <= 0 )
    return 0LL;
  --dword_1801C3CB0;
  v4 = _scrt_acquire_startup_lock();
  if ( dword_1801C3CB4 != 2 )
  {
    sub_18000BEEC(7LL);
    __debugbreak();
    JUMPOUT(0x18000B4F0LL);
  }
  _scrt_dllmain_uninitialize_c(v3);
  sub_18000BE94(v5);
  sub_18000C098(v6);
  dword_1801C3CB4 = 0;
  LOBYTE(v7) = v4;
  _scrt_release_startup_lock(v7);
  LOBYTE(v8) = a1;
  v9 = (unsigned __int8)_scrt_uninitialize_crt(v8, 0LL);
  _scrt_dllmain_uninitialize_critical(v10);
  return v9;
}
