/*
 * XREFs of PopPepUpdateIdleState @ 0x140316D20
 * Callers:
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x140452AB0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x1405DB904 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405DBA00 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x140316D90 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x140319270 (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // r9

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    v7 = (unsigned int)result;
    LODWORD(v7) = result | 0x80000000;
    if ( !a3 )
      v7 = (unsigned int)result;
    return PopPepTriggerActivity(a1, a2, 1LL, v7);
  }
  return result;
}
