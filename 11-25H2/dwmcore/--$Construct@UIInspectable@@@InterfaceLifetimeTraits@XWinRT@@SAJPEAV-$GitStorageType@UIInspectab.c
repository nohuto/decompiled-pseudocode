/*
 * XREFs of ??$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@1@V231@@Z @ 0x1802C97A4
 * Callers:
 *     ?Initialize@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@@Z @ 0x1802CD48C (-Initialize@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Int.c)
 *     ?Lookup@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1802CDA60 (-Lookup@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  char v3; // al

  v2 = *a2;
  v3 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  *(_BYTE *)(a1 + 8) = v3;
  if ( v3 )
  {
    *(_QWORD *)a1 = v2.m128i_i64[0];
    _InterlockedIncrement((volatile signed __int32 *)v2.m128i_i64[0]);
  }
  else
  {
    *(_QWORD *)a1 = v2.m128i_i64[0];
    if ( v2.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2.m128i_i64[0] + 8LL))(v2.m128i_i64[0]);
  }
  return 0LL;
}
