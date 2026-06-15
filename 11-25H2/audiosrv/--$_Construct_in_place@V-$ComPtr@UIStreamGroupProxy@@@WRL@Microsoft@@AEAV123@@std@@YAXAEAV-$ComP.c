/*
 * XREFs of ??$_Construct_in_place@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x1800A65D4
 * Callers:
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800246AC (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18009FAE0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F4264 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x1800F43B0 (_lambda_44fd5c58d02accc22ae075b126dea950_--operator().c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F4460 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F51C0 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F54C0 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<Microsoft::WRL::ComPtr<IStreamGroupProxy>,Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  return Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
}
