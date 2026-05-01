/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801BF8D0
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180395A50 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x1800576AC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800BBE6C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BFA38 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x1802C81A0 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  WCHAR *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rdx
  HRESULT v4; // eax
  int v5; // eax
  UINT32 length; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int16 *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10[4]; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  length = 0;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(this[45], &length);
  *(_OWORD *)Src = 0LL;
  *(__m128i *)v10 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src[0]) = 0;
  std::wstring::reserve(Src, length + 43);
  std::wstring::append(Src, (void *)L"Windows.Internal.ShellExperience.JumpView", 0x29uLL);
  std::wstring::append((wchar_t *)Src, 1uLL, 0x20u);
  std::wstring::append(Src, StringRawBuffer, length);
  string = 0LL;
  v3 = (const unsigned __int16 *)Src;
  if ( *(_QWORD *)&v10[2] > 7uLL )
    v3 = Src[0];
  v4 = Microsoft::WRL::Wrappers::HString::Set(&string, v3, v10[0]);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x492,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      length);
  v5 = CSingleViewShellExperience::SetArgs((CSingleViewShellExperience *)(this + 19), string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x493,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      length);
  WindowsDeleteString(string);
  string = 0LL;
  std::wstring::_Tidy_deallocate((void **)Src);
  return 0LL;
}
