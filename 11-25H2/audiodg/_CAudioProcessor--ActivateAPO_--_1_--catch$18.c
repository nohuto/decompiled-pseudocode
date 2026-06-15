/*
 * XREFs of _CAudioProcessor::ActivateAPO_::_1_::catch$18 @ 0x140093C6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::ActivateAPO_::_1_::catch_18(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 248);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 72) = *v3;
  return 0LL;
}
