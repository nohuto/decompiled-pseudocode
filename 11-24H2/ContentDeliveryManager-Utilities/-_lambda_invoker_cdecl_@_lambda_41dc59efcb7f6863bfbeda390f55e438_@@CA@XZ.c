/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_41dc59efcb7f6863bfbeda390f55e438_@@CA@XZ @ 0x180040AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002CF30 (--_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_41dc59efcb7f6863bfbeda390f55e438_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  MobilityExperience::Telemetry::MobilityExperienceLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize(
             &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
             1u,
             &v1,
             (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)MobilityExperience::Telemetry::MobilityExperienceLogging::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
