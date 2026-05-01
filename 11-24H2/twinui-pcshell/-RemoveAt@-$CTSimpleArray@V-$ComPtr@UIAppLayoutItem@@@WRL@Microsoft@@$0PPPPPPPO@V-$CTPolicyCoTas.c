/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180086E70
 * Callers:
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1801E6E10 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18029AA4C (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x1804C4A80 (-Remove@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPol.c)
 *     ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804DF240 (-ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableIt.c)
 *     ?RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1806C4A30 (-RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z @ 0x1806C4AC0 (-RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z.c)
 *     ?RemoveItemByIndex@CAppLayout@@UEAAJI@Z @ 0x1806C4B60 (-RemoveItemByIndex@CAppLayout@@UEAAJI@Z.c)
 *     ?_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1806C5BCC (-_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x1806C5C50 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1806C5CC8 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // r8

  if ( a2 >= a1[1] )
    return 2147650721LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*a1 + 8 * a2));
  v5 = a1[1];
  if ( a2 != v5 - 1 )
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v5 - a2) - 8);
  --a1[1];
  return 0LL;
}
