/*
 * XREFs of PpmStartIllegalProcessorThrottleLogging @ 0x1404BF7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmStartIllegalProcessorThrottleLogging(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 35128) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 35136) = 0;
  return result;
}
