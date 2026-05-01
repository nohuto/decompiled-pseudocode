/*
 * XREFs of ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804BFF00
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B34EC (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804B46FC (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804B5780 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 *     ?RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z @ 0x1804B60AC (-RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804B6AC4 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1804BFFC4 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 */

__int64 __fastcall ObservableObjectArray::_AddItem(_QWORD *a1, __int64 *a2, void *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r14d
  __int64 *v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  v5 = a1[3];
  v6 = (unsigned int)a3;
  if ( v5 != a1[5]
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)(a1 + 2),
               v5 + 1,
               a3),
        v4 >= 0) )
  {
    ++a1[3];
    v8 = (__int64 *)(a1[2] + 8LL * a1[3] - 8);
    if ( a1[2] + 8LL * a1[3] == 8 )
      goto LABEL_7;
    *v8 = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  }
  if ( v4 < 0 )
  {
    v9 = 46LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
LABEL_7:
  v4 = ObservableObjectArray::_FireNotification(a1,  IVirtualDesktopNotification::`vcall'{24,{flat}}, v6, *a2);
  if ( v4 < 0 )
  {
    v9 = 47LL;
    goto LABEL_9;
  }
  return (unsigned int)v4;
}
