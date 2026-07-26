/*
 * XREFs of ndisValidateEmbeddedBufferBounds @ 0x140173000
 * Callers:
 *     ndisValidateNdisVarDataDescInputBufferBounds @ 0x140141090 (ndisValidateNdisVarDataDescInputBufferBounds.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1401442E8 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateEmbeddedBufferBounds(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10

  v8 = a1 + a5;
  v9 = a1 + a2;
  v10 = a3 + a4;
  v11 = v8 + a6;
  if ( v11 < v8
    || v9 < a1
    || v8 < a1
    || v11 > v9
    || a7 && a6 && ((a7 - 1) & (unsigned int)v8) != 0
    || v8 <= a3 && v11 > a3
    || v8 <= v10 && v11 > v10 )
  {
    return 0;
  }
  *a8 = v8;
  return 1;
}
