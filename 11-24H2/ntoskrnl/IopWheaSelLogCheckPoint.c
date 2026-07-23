/*
 * XREFs of IopWheaSelLogCheckPoint @ 0x1405927F0
 * Callers:
 *     <none>
 * Callees:
 *     WheaSelLogCheckPoint @ 0x1407C6C10 (WheaSelLogCheckPoint.c)
 */

__int64 __fastcall IopWheaSelLogCheckPoint(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = WheaSelLogCheckPoint(81LL, a1);
  if ( (int)result >= 0 )
    return WheaSelLogCheckPoint(82LL, a2);
  return result;
}
