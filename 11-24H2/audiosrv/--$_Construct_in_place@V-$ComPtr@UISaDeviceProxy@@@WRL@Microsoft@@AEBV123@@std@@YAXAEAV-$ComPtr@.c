/*
 * XREFs of ??$_Construct_in_place@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@AEBV123@@std@@YAXAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@AEBV123@@Z @ 0x1800C5520
 * Callers:
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18009C3E0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F9610 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x1800F975C (_lambda_44fd5c58d02accc22ae075b126dea950_--operator().c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F980C (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FA220 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FA520 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  return Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
}
