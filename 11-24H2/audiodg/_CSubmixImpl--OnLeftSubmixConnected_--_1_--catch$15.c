/*
 * XREFs of _CSubmixImpl::OnLeftSubmixConnected_::_1_::catch$15 @ 0x140094060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected_::_1_::catch_15(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return 0LL;
}
