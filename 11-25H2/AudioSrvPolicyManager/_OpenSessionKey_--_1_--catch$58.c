/*
 * XREFs of _OpenSessionKey_::_1_::catch$58 @ 0x18004C220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenSessionKey_::_1_::catch_58(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 168);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 120) = *v3;
  return 0LL;
}
