/*
 * XREFs of _CAudioProcessor::CommitGraphChanges_::_1_::catch$4 @ 0x140091FF9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::CommitGraphChanges_::_1_::catch_4(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 168) = *v3;
  return 0LL;
}
