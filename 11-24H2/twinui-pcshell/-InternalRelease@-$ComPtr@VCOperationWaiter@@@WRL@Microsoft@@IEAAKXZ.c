/*
 * XREFs of ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180015204
 * Callers:
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x180013C40 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _lambda_d7e722f97b0ff1a046566d4f834dfe37_::__lambda_d7e722f97b0ff1a046566d4f834dfe37_ @ 0x180013E20 (_lambda_d7e722f97b0ff1a046566d4f834dfe37_--__lambda_d7e722f97b0ff1a046566d4f834dfe37_.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x180014E48 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180014F98 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ??1?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ @ 0x18023A9A0 (--1-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ.c)
 *     CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___ @ 0x1802CBEB0 (CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___--_CAsyncCallbackWithLambda_.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802CE330 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
