/*
 * XREFs of _anonymous_namespace_::ContextToLauncherShowMethod @ 0x1802015B4
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024B870 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800E6AB0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherShowMethod(__int64 *a1)
{
  __int64 v1; // r10
  const WCHAR *v2; // r11
  const WCHAR *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8

  v1 = *a1;
  v2 = &pvData;
  if ( *a1 )
  {
    v3 = *(const WCHAR **)(v1 + 16);
    v4 = *(unsigned int *)(v1 + 4);
  }
  else
  {
    v3 = &pvData;
    v4 = 0LL;
  }
  if ( v4 == 11 && !(unsigned int)std::_WChar_traits<unsigned short>::compare((__int64)v3, L"StartButton", 11LL) )
    return 11LL;
  if ( v1 )
  {
    v2 = *(const WCHAR **)(v1 + 16);
    v5 = *(unsigned int *)(v1 + 4);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 == 4 && !(unsigned int)std::_WChar_traits<unsigned short>::compare((__int64)v2, L"Drag", 4LL) )
    return 16LL;
  else
    return 0LL;
}
