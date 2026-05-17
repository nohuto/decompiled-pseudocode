/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800F7AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcRemoveChangeRegistration @ 0x1800F7AF0 (RtlpFcRemoveChangeRegistration.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F7B3C (RtlpFcFreeChangeRegistration.c)
 */

__int64 __fastcall RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1801D2908 )
  {
    RtlpFcRemoveChangeRegistration(a1, a1);
    return RtlpFcFreeChangeRegistration(a1);
  }
  return result;
}
