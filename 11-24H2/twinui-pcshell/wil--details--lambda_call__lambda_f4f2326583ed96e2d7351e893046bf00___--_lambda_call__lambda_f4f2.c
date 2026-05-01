/*
 * XREFs of wil::details::lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___::_lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___ @ 0x180347CCC
 * Callers:
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806E3B9B (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E3B9B.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806E3C2B (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E3C2B.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806E3CC1 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E3CC1.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806E3DDE (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeC_ea_1806E3DDE.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806E3E62 (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeC_ea_1806E3E62.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1_::_1_::dtor$7 @ 0x1806E3EC6 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_Resu_ea_1806E3EC6.c)
 * Callees:
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023C80C (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@II@Foundation@Win.c)
 */

void __fastcall wil::details::lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___::_lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel(*(__int64 (__fastcall *****)(_QWORD, __int64 *, __int64 *))a1);
  }
}
