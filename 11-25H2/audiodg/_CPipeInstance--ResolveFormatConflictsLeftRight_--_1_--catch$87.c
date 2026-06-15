/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch$87 @ 0x14009281B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch_87(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 320);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 64) = *v3;
  return 0LL;
}
