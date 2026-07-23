/*
 * XREFs of XmRolOp @ 0x140573320
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmRolOp(_DWORD *a1)
{
  int v1; // eax
  int v2; // edi
  unsigned int v3; // r9d
  int v4; // ebx
  unsigned int v5; // edx

  v1 = a1[30];
  v2 = 8 * v1 + 7;
  v3 = a1[26];
  v4 = v2 & a1[27];
  if ( v4 )
  {
    if ( v4 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)(v3 >> (8 * v1 + 7)) ^ (unsigned __int16)(v3 >> (8 * v1 + 6))) << 11)) & 0x800;
    do
    {
      v5 = v3 >> v2;
      v3 = (v3 >> v2) | (((1 << (8 * v1 + 7)) - 1) | (1 << (8 * v1 + 7))) & (2 * v3);
      --v4;
    }
    while ( v4 );
    a1[4] ^= ((unsigned __int8)v5 ^ (unsigned __int8)a1[4]) & 1;
  }
  return XmStoreResult((__int64)a1, v3);
}
