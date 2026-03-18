/*
 * XREFs of GetExtendModeDecoration @ 0x180224C50
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801BEFD4 (AppendCustomSamplerShaderBody.c)
 *     PerformSample @ 0x1801BF7F8 (PerformSample.c)
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
