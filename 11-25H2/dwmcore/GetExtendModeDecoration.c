/*
 * XREFs of GetExtendModeDecoration @ 0x180230460
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801D1904 (AppendCustomSamplerShaderBody.c)
 *     PerformSample @ 0x1801D20D0 (PerformSample.c)
 * Callees:
 *     <none>
 */

char __fastcall GetExtendModeDecoration(char a1)
{
  switch ( a1 )
  {
    case 1:
      return 67;
    case 2:
      return 87;
    case 3:
      return 77;
  }
  return 0;
}
