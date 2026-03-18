/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1407A3788
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140824848 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140EFE8F8 != 0;
  return result;
}
