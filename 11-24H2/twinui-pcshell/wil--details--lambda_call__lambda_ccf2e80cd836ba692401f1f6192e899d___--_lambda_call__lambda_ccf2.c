/*
 * XREFs of wil::details::lambda_call__lambda_ccf2e80cd836ba692401f1f6192e899d___::_lambda_call__lambda_ccf2e80cd836ba692401f1f6192e899d___ @ 0x18033D5F4
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$7 @ 0x1806E1948 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1948.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_ccf2e80cd836ba692401f1f6192e899d___::_lambda_call__lambda_ccf2e80cd836ba692401f1f6192e899d___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 50) = 0;
  }
  return result;
}
