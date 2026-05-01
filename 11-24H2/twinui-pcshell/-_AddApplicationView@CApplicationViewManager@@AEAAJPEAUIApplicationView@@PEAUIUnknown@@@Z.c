/*
 * XREFs of ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002D384
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x180101B60 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ?AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801F0CD0 (-AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18002CED0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::_AddApplicationView(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  _QWORD *v6; // rsi
  struct IApplicationView *v7; // rbx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct IApplicationView **v11; // rax
  struct IApplicationView *v13; // [rsp+20h] [rbp-28h] BYREF

  v6 = (_QWORD *)((char *)this + 536);
  v7 = a2;
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = 0;
  v9 = v6[1];
  if ( v9 != v6[3]
    || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
               (__int64)v6,
               v9 + 1,
               a3),
        v8 >= 0) )
  {
    v10 = v6[1];
    v6[1] = v10 + 1;
    v11 = (struct IApplicationView **)(*v6 + 8 * v10);
    if ( v11 )
    {
      *v11 = 0LL;
      if ( v11 != &v13 )
      {
        *v11 = a2;
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    CApplicationViewManager::RaiseApplicationViewChanged((char *)this + 136, a2, 0LL, a3, v13);
  return (unsigned int)v8;
}
