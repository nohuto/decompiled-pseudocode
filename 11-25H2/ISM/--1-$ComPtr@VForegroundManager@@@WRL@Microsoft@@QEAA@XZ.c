/*
 * XREFs of ??1?$ComPtr@VForegroundManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A88E0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ForegroundManager_ForegroundManager__::_1_::dtor$2 @ 0x1801CD488 (_Microsoft--WRL--Details--MakeAndInitialize_ForegroundManager_ForegroundManager__--_1_--dtor$2.c)
 *     _ForegroundManager::Create_::_1_::dtor$0 @ 0x1801CD4DE (_ForegroundManager--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ForegroundManager>::~ComPtr<ForegroundManager>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(a1);
}
