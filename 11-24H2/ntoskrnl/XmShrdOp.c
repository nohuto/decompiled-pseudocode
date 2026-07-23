/*
 * XREFs of XmShrdOp @ 0x140573780
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmShrdOp(__int64 a1)
{
  unsigned int v1; // r10d
  int v2; // r11d
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  unsigned int v5; // r10d

  v1 = *(unsigned __int8 *)(a1 + 144);
  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 144) )
  {
    if ( *(_DWORD *)(a1 + 120) == 3 )
    {
      if ( v1 == 1 )
        *(_DWORD *)(a1 + 16) ^= ((unsigned __int16)*(_DWORD *)(a1 + 16) ^ (unsigned __int16)(((_WORD)v2 << 11) ^ (v3 >> 20))) & 0x800;
      v4 = v3 >> (v1 - 1);
      v3 = (v3 >> v1) | (v2 << (32 - v1));
      v5 = v3 >> 31;
    }
    else
    {
      if ( v1 == 1 )
      {
        *(_DWORD *)(a1 + 16) ^= ((unsigned __int16)*(_DWORD *)(a1 + 16) ^ (unsigned __int16)(((_WORD)v2 << 11) ^ (v3 >> 4))) & 0x800;
      }
      else if ( v1 > 0x10 )
      {
        LOBYTE(v1) = v1 - 16;
        v3 = (unsigned __int16)v2;
        LOWORD(v2) = 0;
      }
      v4 = v3 >> (v1 - 1);
      v3 = (unsigned __int16)((v3 >> v1) | ((_WORD)v2 << (16 - v1)));
      v5 = v3 >> 15;
    }
    *(_DWORD *)(a1 + 16) = (v5 << 7) | (v3 == 0 ? 0x40 : 0) | ((*(_DWORD *)(a1 + 16) ^ ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(a1 + 16)) & 1) & 0xFFFFFFFB ^ (4 * (((*((_BYTE *)XmBitCount + (v3 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v3 >> 4))) & 1) == 0))) & 0xFFFFFF3F;
  }
  return XmStoreResult(a1, v3);
}
