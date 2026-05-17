/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800FB290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x18003A2D4 (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800FB2C0 (RtlpFcRemoveChangeRegistration.c)
 */

__int64 __fastcall RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1801D4988 )
  {
    RtlpFcRemoveChangeRegistration(a1, a1);
    return RtlpFcFreeChangeRegistration(a1);
  }
  return result;
}
