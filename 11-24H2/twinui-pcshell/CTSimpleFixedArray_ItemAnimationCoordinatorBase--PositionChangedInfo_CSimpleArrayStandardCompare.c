/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x1804E04D0
 * Callers:
 *     ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1804E1950 (-PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804E079C (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____(
        _QWORD *a1,
        __int64 a2,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a3,
        unsigned __int64 *a4)
{
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v5; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 *v12; // r15
  bool v13; // si
  _BYTE v15[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v16[104]; // [rsp+50h] [rbp-68h] BYREF

  v5 = a3;
  *a4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < a1[1] )
  {
    v10 = (__int64 *)ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
                       (ItemAnimationCoordinatorBase::PositionChangedInfo *)v15,
                       v5);
    v11 = ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
            (ItemAnimationCoordinatorBase::PositionChangedInfo *)v16,
            (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)(v9 + *a1));
    v12 = (__int64 *)v11;
    v13 = **(_DWORD **)a2 == *(_DWORD *)(v11 + 8)
       && SHIsSameObject(**(struct IUnknown ***)(a2 + 8), *(struct IUnknown **)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    if ( v13 )
    {
      *a4 = v8;
      return 0LL;
    }
    ++v8;
    v9 += 48LL;
    v5 = a3;
  }
  return 2147647531LL;
}
