/*
 * XREFs of XmRorOp @ 0x1405733D0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmRorOp(_DWORD *a1)
{
  int v2; // r10d
  int v3; // ecx
  unsigned int v4; // r9d
  int v5; // r10d
  unsigned __int8 v6; // r11

  v2 = a1[27];
  v3 = 8 * a1[30] + 7;
  v4 = a1[26];
  v5 = v3 & v2;
  if ( v5 )
  {
    if ( v5 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> v3)) << 11)) & 0x800;
    do
    {
      v6 = v4;
      v4 = (v4 >> 1) | ((v4 & 1) << v3);
      --v5;
    }
    while ( v5 );
    a1[4] ^= (v6 ^ (unsigned __int8)a1[4]) & 1;
  }
  return XmStoreResult((__int64)a1, v4);
}
