/*
 * XREFs of ?UnsubscribeFromServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@@Z @ 0x180204F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::immersive_shell_component::UnsubscribeFromServices(
        winrt::immersive_shell_component *this,
        struct IServiceProvider *a2)
{
  char *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 16;
  try
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16D,
                           (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                           v3);
  }
  return result;
}
