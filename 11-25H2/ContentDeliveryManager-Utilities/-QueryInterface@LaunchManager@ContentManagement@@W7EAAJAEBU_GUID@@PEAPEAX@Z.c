/*
 * XREFs of ?QueryInterface@LaunchManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::LaunchManager::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
