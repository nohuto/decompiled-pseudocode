/*
 * XREFs of ScpCfgDispatchUserCallTarget @ 0x18016B040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScpCfgDispatchUserCallTarget()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r11
  unsigned __int64 v2; // r10

  v1 = *(_QWORD *)(8 * (v0 >> 9) + 0x123456789ABCDEFLL);
  v2 = v0 >> 3;
  if ( (v0 & 0xF) != 0 )
  {
    v2 &= ~1uLL;
    if ( !_bittest64(&v1, v2) )
      return ScpCfgHandleInvalidCallTarget();
  }
  else if ( _bittest64(&v1, v2) )
  {
    return ((__int64 (*)(void))v0)();
  }
  if ( _bittest64(&v1, v2 | 1) )
    return ((__int64 (*)(void))v0)();
  return ScpCfgHandleInvalidCallTarget();
}
