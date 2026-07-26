/*
 * XREFs of ndisValidateNdisVarDataDescInputString @ 0x140174860
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateNdisVarDataDescInputBufferBounds @ 0x140141090 (ndisValidateNdisVarDataDescInputBufferBounds.c)
 *     ndisValidateAndConvertWcharStringToUnicodeString @ 0x140172F60 (ndisValidateAndConvertWcharStringToUnicodeString.c)
 */

char __fastcall ndisValidateNdisVarDataDescInputString(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  char result; // al
  unsigned __int16 *v6; // r8
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  result = ndisValidateNdisVarDataDescInputBufferBounds(a1, a2, a3, a4, v7);
  if ( result )
    return ndisValidateAndConvertWcharStringToUnicodeString(v7[0], *v6, (__int64)v6, 0, a4);
  return result;
}
