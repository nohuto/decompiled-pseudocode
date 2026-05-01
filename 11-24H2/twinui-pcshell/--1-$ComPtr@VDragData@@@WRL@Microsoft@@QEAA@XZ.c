/*
 * XREFs of ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0BB4
 * Callers:
 *     _AppResizeData_CreateInstance_::_1_::dtor$0 @ 0x1806CDD87 (_AppResizeData_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___&__::_1_::dtor$1 @ 0x1806CDF15 (_Microsoft--WRL--Details--MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___-__--_1_--dto.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppResizeData_AppResizeData_IAppLayout___&__::_1_::dtor$2 @ 0x1806F21AC (_Microsoft--WRL--Details--MakeAndInitialize_AppResizeData_AppResizeData_IAppLayout___-__--_1_--d.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DragData_DragData_IUnknown___&_IAppLayout___&_IApplicationView___&_enum_WindowArrangementViewDragData::DragDataFlags_&__::_1_::dtor$2 @ 0x1806F21BE (_Microsoft--WRL--Details--MakeAndInitialize_DragData_DragData_IUnknown___-_IAppLayout___-_IAppli.c)
 *     _DragData_CreateInstance_::_1_::dtor$0 @ 0x1806F21D0 (_DragData_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<DragData>::~ComPtr<DragData>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(a1);
}
