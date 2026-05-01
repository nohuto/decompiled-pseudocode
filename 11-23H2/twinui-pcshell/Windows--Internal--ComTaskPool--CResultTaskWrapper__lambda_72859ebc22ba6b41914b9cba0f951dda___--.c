/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda_____lambda_72859ebc22ba6b41914b9cba0f951dda___ @ 0x180214988
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda____0 @ 0x180214B8C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914_ea_180214B8C.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805FFDB0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda_____lambda_72859ebc22ba6b41914b9cba0f951dda___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 2,
    a3);
  a1[2] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
  a1[42] = *(_QWORD *)(a3 + 320);
  *a1 = off_1807C7F08;
  result = a1;
  a1[43] = a2;
  return result;
}
