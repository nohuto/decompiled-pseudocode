/*
 * XREFs of ndisValidateNdisOffsetAndLengthInputString @ 0x140140F90
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateAndConvertWcharStringToUnicodeString @ 0x140172F60 (ndisValidateAndConvertWcharStringToUnicodeString.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x140173620 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 */

__int64 __fastcall ndisValidateNdisOffsetAndLengthInputString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  result = ndisValidateNdisOffsetAndLengthInputBufferBounds(a1, a2, &v8);
  if ( (_BYTE)result )
  {
    LOBYTE(v7) = 1;
    return ndisValidateAndConvertWcharStringToUnicodeString(v8, *(_DWORD *)(v5 + 4), v6, v7, a3);
  }
  return result;
}
