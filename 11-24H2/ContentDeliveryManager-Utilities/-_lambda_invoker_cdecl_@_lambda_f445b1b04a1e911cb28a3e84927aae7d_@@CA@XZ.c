/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CA@XZ @ 0x180040B30
 * Callers:
 *     <none>
 * Callees:
 *     ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002CF30 (--_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  MobilityExperience::Telemetry::MobilityExperienceLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize(
             &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
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
