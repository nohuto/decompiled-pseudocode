/*
 * XREFs of PopPepTriggerComponentActiveActivity @ 0x1402C28B0
 * Callers:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepTriggerActivity @ 0x1402C1E00 (PopPepTriggerActivity.c)
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
