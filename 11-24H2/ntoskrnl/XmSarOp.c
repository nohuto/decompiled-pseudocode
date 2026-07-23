/*
 * XREFs of XmSarOp @ 0x140573460
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmSarOp(_DWORD *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // r9d
  int v4; // r8d
  unsigned int v5; // r8d

  v1 = a1[30];
  v2 = a1[27];
  v3 = a1[26];
  if ( v2 )
  {
    v4 = v3 >> (v2 - 1);
    if ( v1 == 3 )
    {
      v3 >>= v2;
    }
    else if ( v1 == 1 )
    {
      v3 = (unsigned __int16)(v3 << 16 >> (v2 + 16));
    }
    else
    {
      v3 = (unsigned __int8)(v3 << 24 >> (v2 + 24));
    }
    v5 = (v3 == 0 ? 0x40 : 0) | ((v4 & 1 ^ a1[4] & 0xFFFFF7FE) & 0xFFFFFFFB ^ (4
                                                                             * (((*((_BYTE *)XmBitCount + (v3 & 0xF))
                                                                                + *((_BYTE *)XmBitCount
                                                                                  + ((unsigned __int8)v3 >> 4))) & 1) == 0))) & 0xFFFFFFBF;
    a1[4] = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)((unsigned __int8)(v3 >> (8 * v1 + 7)) << 7)) & 0x80;
  }
  return XmStoreResult((__int64)a1, v3);
}
