/*
 * XREFs of ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804B6AC4
 * Callers:
 *     ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x1804B6060 (ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--Run.c)
 *     ?ViewVirtualDesktopChanged@SwitchItemFilteredCollection@@UEAAJPEAUIApplicationView@@@Z @ 0x1804B6760 (-ViewVirtualDesktopChanged@SwitchItemFilteredCollection@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804B6940 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804B4BF0 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x1804B6C28 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804BFF00 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804C02CC (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::_ApplyFilterToItem(
        SwitchItemFilteredCollection *this,
        struct IUnknown *a2,
        unsigned __int8 a3)
{
  int v3; // r14d
  __int64 v6; // rdx
  int v7; // ebx
  bool v8; // al
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v13; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v3 = a3;
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
         (_QWORD *)this + 2,
         v6,
         &v13,
         &v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v8 = SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(this, (struct IObservableItem *)a2);
  if ( v7 )
  {
    if ( v8 )
    {
      v13 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v9 = ObservableObjectArray::_AddItem(this, &v13, (unsigned int)(2 * v3));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      if ( v9 < 0 )
      {
        v10 = 341LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
  }
  else if ( !v8 )
  {
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v9 = ObservableObjectArray::_RemoveItem(this, &v13, (unsigned int)(2 * v3 + 1));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    if ( v9 < 0 )
    {
      v10 = 345LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
