/*
 * XREFs of ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1804E1950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardCompareHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardMergeHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@@@QEAAJ_K0@Z @ 0x1804D79F4 (-_EnsureCapacity@-$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x1804E04D0 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArrayStandardCompare.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ItemAnimationCoordinatorBase::PositionChanged(
        _BYTE *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int128 *a4,
        _BYTE *a5)
{
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  int v14; // ebx
  __int64 v16; // rsi
  unsigned __int64 v17; // r8
  int v18; // r12d
  __int128 v19; // xmm6
  __int128 v20; // xmm7
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+40h] [rbp-99h] BYREF
  __int64 v26; // [rsp+48h] [rbp-91h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-89h] BYREF
  __int64 v28; // [rsp+58h] [rbp-81h] BYREF
  int v29; // [rsp+60h] [rbp-79h]
  __int128 v30; // [rsp+64h] [rbp-75h]
  __int128 v31; // [rsp+74h] [rbp-65h]
  int v32; // [rsp+84h] [rbp-55h]
  __int64 v33; // [rsp+88h] [rbp-51h] BYREF
  int v34; // [rsp+90h] [rbp-49h]
  __int128 v35; // [rsp+94h] [rbp-45h]
  __int128 v36; // [rsp+A4h] [rbp-35h]
  int v37; // [rsp+B4h] [rbp-25h]
  __int128 v38; // [rsp+B8h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+57h]

  LODWORD(v26) = a2;
  *a5 = 1;
  if ( a1[232] )
  {
    LOBYTE(v24) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int64 *))(*(_QWORD *)a1 + 112LL))(a1, a2, &v24) )
    {
      v25 = 0LL;
      v8 = **a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v9 = v8(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v25);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = (unsigned int)v9;
        v12 = 77LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)v11);
        goto LABEL_8;
      }
      v27 = 0LL;
      v13 = a1 + 152;
      v33 = 0LL;
      v34 = 0;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0;
      *(_QWORD *)&v38 = &v26;
      *((_QWORD *)&v38 + 1) = &v25;
      v14 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____(
              v13,
              (__int64)&v38,
              (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v33,
              &v27);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      if ( v14 < 0 )
      {
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 88LL))(v25, &v38);
        v16 = v25;
        v28 = v25;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
        v18 = v26;
        v29 = v26;
        v19 = v38;
        v30 = v38;
        v20 = *a4;
        v31 = *a4;
        v32 = 0;
        v10 = 0;
        v21 = v13[1];
        if ( v21 != v13[3]
          || (v10 = CTSimpleArray<ItemAnimationCoordinatorBase::PositionChangedInfo,4294967294,CTPolicyCoTaskMem<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardCompareHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardMergeHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>>::_EnsureCapacity(
                      v13,
                      v21 + 1,
                      v17),
              v10 >= 0) )
        {
          v22 = v13[1];
          v13[1] = v22 + 1;
          v23 = *v13 + 48 * v22;
          if ( v23 )
          {
            *(_QWORD *)v23 = 0LL;
            if ( (__int64 *)v23 != &v28 )
            {
              *(_QWORD *)v23 = v16;
              v28 = 0LL;
            }
            *(_DWORD *)(v23 + 8) = v18;
            *(_OWORD *)(v23 + 12) = v19;
            *(_OWORD *)(v23 + 28) = v20;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        if ( v10 < 0 )
        {
          v11 = (unsigned int)v10;
          v12 = 91LL;
          goto LABEL_17;
        }
      }
      else
      {
        *(_OWORD *)(*v13 + 48 * v27 + 28) = *a4;
      }
      *a5 = v24;
      v10 = 0;
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
