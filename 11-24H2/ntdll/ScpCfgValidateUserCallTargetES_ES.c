/*
 * XREFs of ScpCfgValidateUserCallTargetES_ES @ 0x18016E1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ScpCfgValidateUserCallTargetES_ES(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(8 * (a1 >> 9) + 0x123456789ABCDEFLL);
  result = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v1, result) )
      return result;
    return ScpCfgHandleInvalidCallTarget_ES();
  }
  v3 = result & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) )
    return ScpCfgHandleInvalidCallTarget_ES();
  result = v3 | 1;
  if ( !_bittest64(&v1, result) )
    return ScpCfgHandleInvalidCallTarget_ES();
  return result;
}
