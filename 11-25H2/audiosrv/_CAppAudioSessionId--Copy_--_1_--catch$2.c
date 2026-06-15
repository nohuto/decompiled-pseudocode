/*
 * XREFs of _CAppAudioSessionId::Copy_::_1_::catch$2 @ 0x1801605EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppAudioSessionId::Copy_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return 0LL;
}
