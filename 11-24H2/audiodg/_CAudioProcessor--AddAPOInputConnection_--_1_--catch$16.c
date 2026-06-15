/*
 * XREFs of _CAudioProcessor::AddAPOInputConnection_::_1_::catch$16 @ 0x1400918F9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::AddAPOInputConnection_::_1_::catch_16(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 144);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 272) = *v3;
  return 0LL;
}
