/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x1800B3AA8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner>>::operator IDCompositionRenderTargetPartner * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(*a1);
  return v1;
}
