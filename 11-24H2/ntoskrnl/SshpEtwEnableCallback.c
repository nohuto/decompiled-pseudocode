/*
 * XREFs of SshpEtwEnableCallback @ 0x140A70760
 * Callers:
 *     <none>
 * Callees:
 *     SshpTracingRundownBlockerState @ 0x140A70784 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140A70884 (SshpTracingRundownCollectionState.c)
 */

void __fastcall SshpEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 2 )
  {
    SshpTracingRundownBlockerState(SourceId, ControlCode, Level, MatchAnyKeyword);
    SshpTracingRundownCollectionState();
  }
}
