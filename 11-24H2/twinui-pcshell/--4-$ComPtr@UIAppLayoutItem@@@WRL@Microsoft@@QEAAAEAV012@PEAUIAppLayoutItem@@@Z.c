/*
 * XREFs of ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x1806C34F8
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1801AE8C8 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x1806C3B70 (-FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z @ 0x1806C4AC0 (-RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1806C506C (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  }
  return a1;
}
