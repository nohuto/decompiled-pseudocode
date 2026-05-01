/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x180593724
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x180593C70 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x180593A84 (--0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
        _QWORD *a1,
        struct IUnknown ***a2,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a3,
        unsigned __int64 *a4)
{
  struct IUnknown ***v6; // rbx
  unsigned __int64 v8; // rbp
  __int64 i; // r14
  struct IUnknown **v10; // rdi
  BOOL v11; // ebx
  _BYTE v13[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[88]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+8h]

  v6 = a2;
  *a4 = 0LL;
  v8 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  for ( i = 0LL; ; i += 32LL )
  {
    v15 = ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
            (ItemAnimationCoordinatorBase::ComponentInfo *)v13,
            a3);
    v10 = (struct IUnknown **)(ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
                                 (ItemAnimationCoordinatorBase::ComponentInfo *)v14,
                                 (const struct ItemAnimationCoordinatorBase::ComponentInfo *)(i + *a1))
                             + 8);
    v11 = SHIsSameObject(**v6, *v10) == 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v15 + 8));
    if ( !v11 )
      break;
    ++v8;
    v6 = a2;
    if ( v8 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v8;
  return 0LL;
}
