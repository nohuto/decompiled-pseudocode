/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1407B2FA8
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140946A88 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140EFEF98 != 0;
  return result;
}
