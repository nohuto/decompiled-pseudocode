/*
 * XREFs of _lambda_b8a139c36294ee7a0b7be3bff03bc510_::_lambda_b8a139c36294ee7a0b7be3bff03bc510_ @ 0x180309644
 * Callers:
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801F5F40 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 *     ?RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18020A604 (-RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_b8a139c36294ee7a0b7be3bff03bc510_::_lambda_b8a139c36294ee7a0b7be3bff03bc510_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v5; // rcx

  v3 = *a3;
  *a1 = a2;
  v5 = a1 + 1;
  *v5 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  return a1;
}
