/*
 * XREFs of ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000B300
 * Callers:
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000B4F8 (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     sub_18000B814 @ 0x18000B814 (sub_18000B814.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x18000B844 (__scrt_dllmain_crt_thread_detach.c)
 */

__int64 __fastcall dllmain_crt_dispatch(HINSTANCE a1, int a2, void *const a3)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a2 )
    return dllmain_crt_process_detach(a3 != 0LL);
  v3 = a2 - 1;
  if ( !v3 )
    return dllmain_crt_process_attach(a1, a3);
  v4 = (unsigned int)(v3 - 1);
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      return 1LL;
    LOBYTE(result) = _scrt_dllmain_crt_thread_detach(a1, v4, a3);
  }
  else
  {
    LOBYTE(result) = sub_18000B814(a1, v4, a3);
  }
  return (unsigned __int8)result;
}
