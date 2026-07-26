/*
 * XREFs of _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1401669D0
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x14014288C (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall lambda_4865fb945cd28a177f845da523c8204e_::operator()(_DWORD **a1, _DWORD *a2, unsigned int a3)
{
  char *v4; // r10
  __int64 i; // r8
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // ecx
  char *v9; // r11
  unsigned int v10; // eax
  char *v11; // rcx
  size_t v12; // r8
  char *v13; // r10
  _DWORD *v14; // r9

  if ( a3 < 4 || *a2 != 2 || a3 - 4 < 0x18 )
    return 3221225534LL;
  v4 = (char *)a2 + a3;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i + 2 * i + 1;
    v7 = a2[v6 + 2];
    v8 = a2[v6 + 1];
    v9 = (char *)&a2[v6];
    v10 = v8 + v7;
    if ( v10 < v8 )
      return 3221225534LL;
    v11 = &v9[v10];
    if ( v11 < v9 || v11 > v4 )
      return 3221225534LL;
  }
  if ( a2[1] != 7 )
    return 3221225534LL;
  if ( a2[4] != 18 )
    return 3221225534LL;
  v12 = (unsigned int)a2[5];
  if ( a2[2] != 4 )
    return 3221225534LL;
  if ( !a2[5] )
    return 3221225534LL;
  if ( (v12 & 1) != 0 )
    return 3221225534LL;
  v13 = (char *)a2 + (unsigned int)a2[6];
  if ( v13[v12 + 15] || v13[v12 + 14] )
    return 3221225534LL;
  v14 = *a1;
  *v14 = *(_DWORD *)((char *)a2 + (unsigned int)a2[3] + 4);
  memmove(v14 + 1, v13 + 16, v12);
  return 0LL;
}
