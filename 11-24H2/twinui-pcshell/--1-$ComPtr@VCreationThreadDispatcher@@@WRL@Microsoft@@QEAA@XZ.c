/*
 * XREFs of ??1?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1802237B4
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CreationThreadDispatcher__::_1_::dtor$0 @ 0x1806D3FCE (_wil--MakeAndInitializeOrThrow_CreationThreadDispatcher__--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$38 @ 0x1806E242D (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$38.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CreationThreadDispatcher>::~ComPtr<CreationThreadDispatcher>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1);
}
