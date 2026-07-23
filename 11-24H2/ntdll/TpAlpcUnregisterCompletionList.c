/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x180084A10
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18008663C (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  _BYTE *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = (_BYTE *)(a1 + 288);
  result = TppAlpcpValidateAlpc(a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*v1 & 1) == 0 )
    result = TppRaiseInvalidParameter(v3);
  *(_DWORD *)v1 &= ~2u;
  return result;
}
