/*
 * XREFs of ??$Do@V_lambda_8310241115156db3d8926b31d9f5a4c3_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8310241115156db3d8926b31d9f5a4c3_@@AEBV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180414B4C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1804208A0 (-MoveNext@-$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal.c)
 * Callees:
 *     ??$?0V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@Z @ 0x180413BE4 (--$-0V-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplay.c)
 *     ??$AtomicUpdate@V_lambda_87ddd0c40772eaba1c31a94be300d9b9_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_87ddd0c40772eaba1c31a94be300d9b9_@@AEBV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180414118 (--$AtomicUpdate@V_lambda_87ddd0c40772eaba1c31a94be300d9b9_@@V_lambda_08f4cb743079a90dc8e15f092a1.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_8310241115156db3d8926b31d9f5a4c3_,_lambda_08f4cb743079a90dc8e15f092a1add52_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE ***v10; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = a3[1];
    v9 = *a3;
    v10 = (_BYTE ***)a3[2];
    v12[0] = v8;
    v13 = v9;
    v12[1] = &v13;
    v4 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_87ddd0c40772eaba1c31a94be300d9b9_,_lambda_08f4cb743079a90dc8e15f092a1add52_>(
           (volatile signed __int32 *)(v9 + 72),
           (__int64)v12,
           v10);
    XWinRT::IntVersionTag::IntVersionTag(&v13, a2);
    if ( a1[1] != (_DWORD)v13 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
