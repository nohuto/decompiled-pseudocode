/*
 * XREFs of _CVpoContext::Initialize_::_1_::catch$7 @ 0x140096FE3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVpoContext::Initialize_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 136) = *v3;
  return 0LL;
}
