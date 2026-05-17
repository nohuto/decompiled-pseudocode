/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x1800D5D20
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppAlpcpValidateAlpc @ 0x1800D6BDC (TppAlpcpValidateAlpc.c)
 */

void __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  _BYTE *v1; // rbx

  v1 = (_BYTE *)(a1 + 288);
  if ( !(unsigned int)TppAlpcpValidateAlpc(a1, 0LL, 1LL) || (*v1 & 1) == 0 )
    TppRaiseInvalidParameter();
  *(_DWORD *)v1 &= ~2u;
}
