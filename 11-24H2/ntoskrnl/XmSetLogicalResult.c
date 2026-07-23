/*
 * XREFs of XmSetLogicalResult @ 0x140461EB0
 * Callers:
 *     XmXorOp @ 0x140460E80 (XmXorOp.c)
 *     XmTestOp @ 0x140461D20 (XmTestOp.c)
 *     XmOrOp @ 0x140572DF0 (XmOrOp.c)
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

__int64 __fastcall XmSetLogicalResult(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  __int64 result; // rax

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 124) != 22 )
    XmStoreResult(a1, a2);
  result = -v3;
  *(_DWORD *)(v2 + 16) = (((v3 == 0 ? 0x40 : 0) | (*(_DWORD *)(a1 + 16) & 0xFFFFFFFA ^ (4
                                                                                      * (((*((_BYTE *)XmBitCount
                                                                                           + (v3 & 0xF))
                                                                                         + *((_BYTE *)XmBitCount
                                                                                           + ((unsigned __int8)v3 >> 4))) & 1) == 0))) & 0xFFFFFF2F) ^ (((v3 >> (8 * *(_BYTE *)(v2 + 120) + 7)) & 1) << 7)) & 0xFFFFF7FF;
  return result;
}
