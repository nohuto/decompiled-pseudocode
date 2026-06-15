/*
 * XREFs of _CApplication::DelinkProcess_::_1_::catch$7 @ 0x18004CE99
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::DelinkProcess_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return 0LL;
}
