/*
 * XREFs of _CPipeInstance::FixupStreamPipe_::_1_::catch$25 @ 0x14009216F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::FixupStreamPipe_::_1_::catch_25(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 184) = *v3;
  return 0LL;
}
