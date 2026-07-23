/*
 * XREFs of MiMirrorVerify @ 0x140673FA4
 * Callers:
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiMirrorVerify(__int64 a1)
{
  int v1; // ebp
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 i; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *j; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 k; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v3 = 0LL;
  do
  {
    v4 = v3 & -(__int64)(v3 < (unsigned __int64)xmmword_140E301D0);
    v5 = xmmword_140E301D0 - 1;
    while ( 1 )
    {
      if ( v5 - v4 == -1LL )
        goto LABEL_6;
      v7 = (_QWORD *)(*((_QWORD *)&xmmword_140E301D0 + 1) + 8 * (v4 >> 6));
      for ( i = ~*v7 | ((1LL << (v4 & 0x3F)) - 1); i == -1; i = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > *((_QWORD *)&xmmword_140E301D0 + 1) + 8 * (v5 >> 6) )
          goto LABEL_6;
      }
      _BitScanForward64(&v9, ~i);
      v6 = v9 + (((__int64)v7 - *((_QWORD *)&xmmword_140E301D0 + 1)) >> 3 << 6);
      if ( v6 > v5 )
      {
LABEL_6:
        v6 = -1LL;
      }
      else if ( v6 != -1LL )
      {
        break;
      }
      if ( !v4 )
        break;
      v10 = v3 + 1;
      if ( v3 + 1 > (unsigned __int64)xmmword_140E301D0 )
        v10 = xmmword_140E301D0;
      v5 = v10 - 1;
      v4 = 0LL;
    }
    if ( v6 < v3 || v6 == -1LL )
      break;
    v11 = 0LL;
    v12 = xmmword_140E301D0;
    if ( (unsigned __int64)xmmword_140E301D0 > v6 )
    {
      v13 = *((_QWORD *)&xmmword_140E301D0 + 1) + 8 * ((unsigned __int64)(xmmword_140E301D0 - 1) >> 6);
      v14 = (_QWORD *)(*((_QWORD *)&xmmword_140E301D0 + 1) + 8 * (v6 >> 6));
      v15 = ((1LL << (v6 & 0x3F)) - 1) | *v14;
      for ( j = v14 + 1; ; ++j )
      {
        v17 = ~v15;
        if ( v17 )
          break;
        if ( (unsigned __int64)j > v13 )
        {
          v12 = xmmword_140E301D0;
LABEL_26:
          v19 = v12;
          goto LABEL_36;
        }
        v15 = *++v14;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v17);
      v19 = (unsigned int)v18 + (((__int64)v14 - *((_QWORD *)&xmmword_140E301D0 + 1)) >> 3 << 6);
      v12 = xmmword_140E301D0;
      if ( v19 > (unsigned __int64)xmmword_140E301D0 )
        goto LABEL_26;
      for ( k = ~(v17 | ((1LL << v18) - 1)); !k; k = *v21 )
      {
        v21 = v14 + 1;
        if ( (unsigned __int64)(v14 + 1) > v13 )
        {
          k = 64LL;
          goto LABEL_33;
        }
        ++v14;
      }
      _BitScanForward64(&k, k);
LABEL_33:
      v22 = k + (((__int64)v14 - *((_QWORD *)&xmmword_140E301D0 + 1)) >> 3 << 6);
      v12 = xmmword_140E301D0;
      if ( v22 > (unsigned __int64)xmmword_140E301D0 )
        v22 = xmmword_140E301D0;
      v11 = v22 - v19;
LABEL_36:
      if ( v11 )
        goto LABEL_43;
    }
    v19 = v12;
LABEL_43:
    v23 = v19 - v6;
    v1 = guard_dispatch_icall_no_overrides(v6 << 12, v23 << 12);
    if ( v1 < 0 )
      break;
    v3 = v23 + v11 + v6;
  }
  while ( v3 < (unsigned __int64)xmmword_140E301D0 );
  return (unsigned int)v1;
}
