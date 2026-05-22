/*
 * XREFs of ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x1801717C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x180085928 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1800D9760 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@1234@@Z @ 0x180169390 (--$CreateExternalVector@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAU.c)
 *     ?substr@?$basic_string_view@GU?$char_traits@G@std@@@std@@QEBA?AV12@_K_K@Z @ 0x180172F80 (-substr@-$basic_string_view@GU-$char_traits@G@std@@@std@@QEBA-AV12@_K_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall StringToHstringVectorParser(__int64 *a1, _WORD *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int16 v8; // r10
  __int64 v9; // rdi
  __m128i v10; // xmm1
  _WORD *v11; // rax
  __m128i v12; // xmm1
  _QWORD v14[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+A0h] [rbp+48h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+50h] BYREF
  HSTRING v18; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+60h] BYREF

  v16 = a1;
  v19 = 0LL;
  Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>>(
    (__int64)a1,
    &v19);
  v14[0] = a2;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v14[1] = v4;
  v5 = 0LL;
  LOWORD(v16) = 44;
  v6 = v19;
  if ( v4 )
  {
    v7 = std::_WChar_traits<unsigned short>::find(a2, v4, &v16);
    if ( v7 )
    {
      v9 = v7 - a2;
      if ( v9 != -1 )
      {
        LOWORD(v16) = v8;
        do
        {
          v10 = *(__m128i *)std::basic_string_view<unsigned short>::substr(v14, v15, v5, v9 - v5);
          string = 0LL;
          Microsoft::WRL::Wrappers::HString::Set(
            &string,
            (const unsigned __int16 *)v10.m128i_i64[0],
            _mm_srli_si128(v10, 8).m128i_u32[0]);
          (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v6 + 104LL))(v6, string);
          v5 = v9 + 1;
          if ( v9 + 1 < v4 && (v11 = std::_WChar_traits<unsigned short>::find(&a2[v5], v4 - v5, &v16)) != 0LL )
            v9 = v11 - a2;
          else
            v9 = -1LL;
          WindowsDeleteString(string);
          string = 0LL;
        }
        while ( v9 != -1 );
      }
    }
  }
  v12 = *(__m128i *)std::basic_string_view<unsigned short>::substr(v14, v15, v5, -1LL);
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HString::Set(
    &v18,
    (const unsigned __int16 *)v12.m128i_i64[0],
    _mm_srli_si128(v12, 8).m128i_u32[0]);
  (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v6 + 104LL))(v6, v18);
  v19 = 0LL;
  *a1 = v6;
  WindowsDeleteString(v18);
  v18 = 0LL;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v19);
  return a1;
}
