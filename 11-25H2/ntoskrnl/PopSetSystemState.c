/*
 * XREFs of PopSetSystemState @ 0x140476768
 * Callers:
 *     PoSetSystemState @ 0x140476720 (PoSetSystemState.c)
 *     PopAllowAwayModeSettingCallback @ 0x140740CC0 (PopAllowAwayModeSettingCallback.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSetSystemState @ 0x1404767A4 (PopDiagTraceSetSystemState.c)
 *     PopUserPresentSet @ 0x140476860 (PopUserPresentSet.c)
 */

__int64 __fastcall PopSetSystemState(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v2 = a2;
    v3 = a1;
    result = PopDiagTraceSetSystemState(a1, a2);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(v2);
  }
  return result;
}
