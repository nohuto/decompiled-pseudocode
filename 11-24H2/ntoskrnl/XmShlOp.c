/*
 * XREFs of XmShlOp @ 0x140460910
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

__int64 __fastcall XmShlOp(_DWORD *a1)
{
  int v1; // r8d
  int v3; // eax
  unsigned int v4; // r9d
  char v5; // bl
  unsigned int v6; // edx
  int v7; // r11d
  unsigned int v8; // edx
  unsigned int v9; // r8d
  bool v10; // zf
  unsigned int v11; // r8d
  char v12; // cl
  int v13; // ecx
  unsigned int v14; // r8d

  v1 = a1[30];
  v3 = a1[27];
  v4 = a1[26];
  v5 = 8 * v1 + 7;
  if ( v3 )
  {
    v6 = v4 ^ (v4 >> 1);
    v7 = v4 << v3;
    if ( v1 == 3 )
    {
      v8 = v6 >> 30;
      LOBYTE(v9) = v4 >> (32 - v3);
      v4 <<= v3;
    }
    else
    {
      v10 = v1 == 1;
      v11 = a1[26];
      if ( v10 )
      {
        v8 = v6 >> 14;
        v12 = 16;
        v4 = (unsigned __int16)v7;
      }
      else
      {
        v8 = v6 >> 6;
        v12 = 8;
        v4 = (unsigned __int8)v7;
      }
      v9 = v11 >> (v12 - v3);
    }
    v13 = a1[4] ^ ((unsigned __int8)v9 ^ (unsigned __int8)a1[4]) & 1;
    v14 = (v4 == 0 ? 0x40 : 0) | ((v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v8 << 11)) & 0x800) & 0xFFFFFFFB ^ (4 * (((*((_BYTE *)XmBitCount + (v4 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v4 >> 4))) & 1) == 0))) & 0xFFFFFFBF;
    a1[4] = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)((unsigned __int8)(v4 >> v5) << 7)) & 0x80;
  }
  return XmStoreResult(a1, v4);
}
