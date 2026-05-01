/*
 * XREFs of ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLauncherUIMode@@@WRL@Microsoft@@@012@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x1803A14E0
 * Callers:
 *     _lambda_cbf01a40321e9ff125f683f9a48deaf4_::operator() @ 0x1803A1E34 (_lambda_cbf01a40321e9ff125f683f9a48deaf4_--operator().c)
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3668 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(
        __int64 *a1,
        _DWORD *a2)
{
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(
           (CLauncherUIMode **)a1,
           a2);
}
