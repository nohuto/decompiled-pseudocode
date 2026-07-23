/*
 * XREFs of MiIsAnyPartOfRangeInHugePfn @ 0x1406651B8
 * Callers:
 *     MiAcquireAddMemoryResources @ 0x1407D86E8 (MiAcquireAddMemoryResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAnyPartOfRangeInHugePfn(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r11
  unsigned __int64 *v7; // r9
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rdi
  bool v10; // zf
  bool i; // zf
  __int64 v12; // rax

  v2 = 0;
  if ( !stru_140E2FD70.Buffer )
    return 0LL;
  v3 = ((a1 + a2 - 1) >> 18) & 0x3FFFFF;
  v4 = (a1 >> 18) & 0x3FFFFF;
  v5 = v3 - v4 + 1;
  if ( v4 >= stru_140E2FD70.SizeOfBitMap )
    return 1LL;
  if ( v5 <= 1 )
    return (((a1 + a2 - 1) >> 18) & 0x3FFFFF) != v4
        || _bittest64((const signed __int64 *)&stru_140E2FD70.Buffer[v4 >> 6], (a1 >> 18) & 0x3F);
  if ( stru_140E2FD70.SizeOfBitMap - v4 < v5 )
    return 1LL;
  v7 = &stru_140E2FD70.Buffer[v4 >> 6];
  v8 = *v7;
  v9 = &stru_140E2FD70.Buffer[v3 >> 6];
  if ( v7 != v9 )
  {
    for ( i = (v8 & (-1LL << (a1 >> 18))) == 0; i; i = v12 == 0 )
    {
      v12 = *++v7;
      if ( v7 == v9 )
      {
        v10 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v3)) == 0;
        goto LABEL_15;
      }
    }
    return 1LL;
  }
  v10 = (v8 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << (a1 >> 18))) == 0;
LABEL_15:
  LOBYTE(v2) = !v10;
  return v2;
}
