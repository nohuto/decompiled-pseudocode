/*
 * XREFs of ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x18009DCF8
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18009C170 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x1800D70C0 (-GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z.c)
 *     ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x1800D7100 (-GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall winrt::hstring::c_str(winrt::hstring *this)
{
  if ( *(_QWORD *)this )
    return *(wchar_t **)(*(_QWORD *)this + 16LL);
  else
    return word_18011F0D4;
}
