/*
 * XREFs of ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x180571A44
 * Callers:
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571BA4 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801837A0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z @ 0x180678B54 (-GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Base32Encode(__int64 a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // edx
  unsigned __int16 *v6; // r9
  int Chars; // eax
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::resize((wchar_t *)a1, 0xDuLL);
  v12 = 0;
  v6 = (unsigned __int16 *)a1;
  if ( *(_QWORD *)(a1 + 24) > 7uLL )
    v6 = *(unsigned __int16 **)a1;
  Chars = Common::Base32Encoding::GetChars(a2, v5, 0xDu, v6, &v12);
  if ( Chars < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      (const char *)(unsigned int)Chars,
      v10);
  if ( v12 != 13 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v8);
  return a1;
}
