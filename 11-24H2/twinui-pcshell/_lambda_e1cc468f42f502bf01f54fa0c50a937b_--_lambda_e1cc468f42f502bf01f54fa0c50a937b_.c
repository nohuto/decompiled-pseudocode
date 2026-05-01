/*
 * XREFs of _lambda_e1cc468f42f502bf01f54fa0c50a937b_::_lambda_e1cc468f42f502bf01f54fa0c50a937b_ @ 0x1802E2E38
 * Callers:
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1801E0DF0 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CA440 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_e1cc468f42f502bf01f54fa0c50a937b_::_lambda_e1cc468f42f502bf01f54fa0c50a937b_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
