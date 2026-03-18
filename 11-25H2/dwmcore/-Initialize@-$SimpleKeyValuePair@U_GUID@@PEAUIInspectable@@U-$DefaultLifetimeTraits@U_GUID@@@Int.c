/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@@Z @ 0x1802CD48C
 * Callers:
 *     ?Make@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x1802CDEB0 (-Make@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@.c)
 * Callees:
 *     ??$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@1@V231@@Z @ 0x1802C97A4 (--$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-$GitStorageType@UIInspectab.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802CEC30 (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Initialize(
        __int64 a1,
        __int128 *a2,
        __m128i *a3)
{
  __m128i v3; // xmm0
  __int128 v5; // xmm6
  int v6; // ebx
  void *v7; // rcx
  char v8; // dl
  __int128 v9; // xmm0
  __m128i v10; // xmm1
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __m128i v13; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  *(_QWORD *)&v12 = 0LL;
  v5 = *a2;
  BYTE8(v12) = 0;
  v13 = v3;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>((__int64)&v12, &v13);
  if ( v6 >= 0 )
  {
    v9 = v12;
    *(_OWORD *)(a1 + 64) = v5;
    v10 = *(__m128i *)(a1 + 80);
    *(_OWORD *)(a1 + 80) = v9;
    v7 = (void *)v10.m128i_i64[0];
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  if ( v8 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v7);
  }
  else if ( v7 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
