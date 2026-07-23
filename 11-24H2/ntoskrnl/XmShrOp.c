/*
 * XREFs of XmShrOp @ 0x1405736A0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmShrOp(_DWORD *a1)
{
  int v1; // r8d
  unsigned int v3; // edx
  int v4; // ecx
  char v5; // bl
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // r8d

  v1 = a1[30];
  v3 = a1[26];
  v4 = a1[27];
  v5 = 8 * v1 + 7;
  if ( v4 )
  {
    v6 = v3 >> v4;
    v7 = v3 >> (v4 - 1);
    if ( v1 == 3 )
    {
      v8 = v3 >> 31;
    }
    else if ( v1 == 1 )
    {
      v8 = v3 >> 15;
    }
    else
    {
      v8 = v3 >> 7;
    }
    v9 = ((unsigned __int8)v7 ^ (unsigned __int8)a1[4]) & 1;
    v10 = (v6 == 0 ? 0x40 : 0) | ((a1[4] ^ v9 ^ ((unsigned __int16)(*((_WORD *)a1 + 8) ^ v9) ^ (unsigned __int16)((_WORD)v8 << 11)) & 0x800) & 0xFFFFFFFB ^ (4 * (((*((_BYTE *)XmBitCount + (v6 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v6 >> 4))) & 1) == 0))) & 0xFFFFFFBF;
    v3 = v6;
    a1[4] = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)((unsigned __int8)(v6 >> v5) << 7)) & 0x80;
  }
  return XmStoreResult((__int64)a1, v3);
}
