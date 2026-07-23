/*
 * XREFs of RtlULongLongMult @ 0x1800EA69C
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x180029920 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1801702B0 (RtlpFcValidateFeatureConfigurationBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-1073741675;
  }
  return v3;
}
