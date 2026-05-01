/*
 * XREFs of ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x18069D560
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180119F58 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 */

__int64 __fastcall XamlAltTabViewHost::ViewLoaded(XamlAltTabViewHost *this, __int64 a2)
{
  XamlAltTabViewHost *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (XamlAltTabViewHost *)((char *)this - 120);
  try
  {
    XamlAltTabViewHost::DisplayAltTab(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E2,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v3);
  }
  return result;
}
