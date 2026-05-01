/*
 * XREFs of _anonymous_namespace_::ContextToSearchShowArgs @ 0x1805005E8
 * Callers:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180200F70 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

const wchar_t *__fastcall anonymous_namespace_::ContextToSearchShowArgs(winrt::hstring *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8

  if ( winrt::operator==((__int64)this, (__int64)L"TaskbarSearchBox", a3) )
    return L"StartMode=Proactive&QuerySource=TaskBarSearchBox";
  if ( winrt::operator==((__int64)this, (__int64)L"SearchButton", v4) )
    return L"StartMode=Proactive&QuerySource=SearchButton";
  return winrt::hstring::c_str(this);
}
