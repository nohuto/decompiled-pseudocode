/*
 * XREFs of ScpCfgDispatchUserCallTargetES_ES @ 0x18016E0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScpCfgDispatchUserCallTargetES_ES()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r11
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r10

  v1 = *(_QWORD *)(8 * (v0 >> 9) + 0x123456789ABCDEFLL);
  v2 = v0 >> 3;
  if ( (v0 & 0xF) != 0 )
  {
    v4 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _bittest64(&v1, v4) && _bittest64(&v1, v4 | 1) )
      return ((__int64 (*)(void))v0)();
  }
  else if ( _bittest64(&v1, v2) )
  {
    return ((__int64 (*)(void))v0)();
  }
  return ScpCfgHandleInvalidCallTarget_ES();
}
