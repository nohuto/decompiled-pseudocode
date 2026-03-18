/*
 * XREFs of PopPepUpdateIdleState @ 0x1402C0D24
 * Callers:
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1403A5D50 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x1405D6724 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D6820 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1402BEB90 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1402C0D90 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned int v7; // r9d

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    v7 = result | 0x80000000;
    if ( !a3 )
      v7 = result;
    return PopPepTriggerActivity(a1, a2, 1, v7);
  }
  return result;
}
