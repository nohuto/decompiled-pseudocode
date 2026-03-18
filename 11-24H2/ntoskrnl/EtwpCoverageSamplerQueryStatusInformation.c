/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1407B2B58
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x14095EFC8 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140EFEC78 != 0;
  return result;
}
