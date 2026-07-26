/*
 * XREFs of ndisValidateNdisVarDataDesc32InputString @ 0x1401442E8
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateAndConvertWcharStringToUnicodeString @ 0x140172F60 (ndisValidateAndConvertWcharStringToUnicodeString.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x140173000 (ndisValidateEmbeddedBufferBounds.c)
 */

char __fastcall ndisValidateNdisVarDataDesc32InputString(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  int v5; // ebx
  int v6; // r8d
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int64)a3 >= a1
    && (unsigned __int64)(a3 + 4) <= a1 + a2
    && (v5 = *a3,
        (unsigned __int8)ndisValidateEmbeddedBufferBounds(
                           a1,
                           a2,
                           (_DWORD)a3,
                           8,
                           *((_DWORD *)a3 + 1),
                           v5,
                           2,
                           (__int64)&v8)) )
  {
    return ndisValidateAndConvertWcharStringToUnicodeString(v8, v5, v6, 0, a4);
  }
  else
  {
    return 0;
  }
}
