/*
 * XREFs of PopPepTriggerComponentActiveActivity @ 0x140319D20
 * Callers:
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopPepTriggerActivity @ 0x140319270 (PopPepTriggerActivity.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PopPepTriggerComponentActiveActivity(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  if ( a2 )
  {
    result = *(_DWORD **)(a2 + 80);
    *(_DWORD *)(a2 + 4) |= 1u;
    *result = 4;
  }
  return result;
}
