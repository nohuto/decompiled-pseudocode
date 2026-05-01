/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1804E03E0
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1804E08D0 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
        __int64 *a1,
        struct IUnknown ***a2,
        int *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct IUnknown *v12; // [rsp+28h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h]

  *a4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < a1[1] )
  {
    v14 = *a3;
    v15 = *((_QWORD *)a3 + 1);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v16 = *((_OWORD *)a3 + 1);
    v10 = *a1;
    v12 = *(struct IUnknown **)(v9 + *a1 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v13 = *(_OWORD *)(v9 + v10 + 16);
    LODWORD(v10) = SHIsSameObject(**a2, v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    if ( (_DWORD)v10 )
    {
      *a4 = v8;
      return 0LL;
    }
    ++v8;
    v9 += 32LL;
  }
  return 2147647531LL;
}
