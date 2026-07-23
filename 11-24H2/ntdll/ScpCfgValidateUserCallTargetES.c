/*
 * XREFs of ScpCfgValidateUserCallTargetES @ 0x18016B1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ScpCfgValidateUserCallTargetES(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(8 * (a1 >> 9) + 0x123456789ABCDEFLL);
  result = a1 >> 3;
  if ( (a1 & 0xF) != 0 )
  {
    result &= ~1uLL;
    if ( !_bittest64(&v1, result) )
      return ScpCfgHandleInvalidCallTarget();
LABEL_5:
    result |= 1uLL;
    if ( _bittest64(&v1, result) )
      return result;
    return ScpCfgHandleInvalidCallTarget();
  }
  if ( !_bittest64(&v1, result) )
    goto LABEL_5;
  return result;
}
