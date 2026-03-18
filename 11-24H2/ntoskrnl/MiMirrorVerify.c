/*
 * XREFs of MiMirrorVerify @ 0x140672DD4
 * Callers:
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiMirrorVerify(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 i)
{
  int v4; // ebp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *j; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 k; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v6 = 0LL;
  do
  {
    v7 = v6 & -(__int64)(v6 < (unsigned __int64)xmmword_140E30090);
    v8 = xmmword_140E30090 - 1;
    while ( 1 )
    {
      if ( v8 - v7 == -1LL )
        goto LABEL_6;
      v10 = (_QWORD *)(*((_QWORD *)&xmmword_140E30090 + 1) + 8 * (v7 >> 6));
      for ( i = ~*v10 | ((1LL << (v7 & 0x3F)) - 1); i == -1LL; i = ~*v10 )
      {
        if ( (unsigned __int64)++v10 > *((_QWORD *)&xmmword_140E30090 + 1) + 8 * (v8 >> 6) )
          goto LABEL_6;
      }
      i = ~i;
      _BitScanForward64(&v11, i);
      v9 = v11 + (((__int64)v10 - *((_QWORD *)&xmmword_140E30090 + 1)) >> 3 << 6);
      if ( v9 > v8 )
      {
LABEL_6:
        v9 = -1LL;
      }
      else if ( v9 != -1LL )
      {
        break;
      }
      if ( !v7 )
        break;
      v12 = v6 + 1;
      if ( v6 + 1 > (unsigned __int64)xmmword_140E30090 )
        v12 = xmmword_140E30090;
      v8 = v12 - 1;
      v7 = 0LL;
    }
    if ( v9 < v6 || v9 == -1LL )
      break;
    v13 = 0LL;
    v14 = xmmword_140E30090;
    if ( (unsigned __int64)xmmword_140E30090 > v9 )
    {
      i = *((_QWORD *)&xmmword_140E30090 + 1) + 8 * ((unsigned __int64)(xmmword_140E30090 - 1) >> 6);
      v15 = (_QWORD *)(*((_QWORD *)&xmmword_140E30090 + 1) + 8 * (v9 >> 6));
      v16 = ((1LL << (v9 & 0x3F)) - 1) | *v15;
      for ( j = v15 + 1; ; ++j )
      {
        v8 = ~v16;
        if ( v8 )
          break;
        if ( (unsigned __int64)j > i )
        {
          v14 = xmmword_140E30090;
LABEL_26:
          v19 = v14;
          goto LABEL_36;
        }
        v16 = *++v15;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v8);
      v19 = (unsigned int)v18 + (((__int64)v15 - *((_QWORD *)&xmmword_140E30090 + 1)) >> 3 << 6);
      v14 = xmmword_140E30090;
      if ( v19 > (unsigned __int64)xmmword_140E30090 )
        goto LABEL_26;
      for ( k = ~(v8 | ((1LL << v18) - 1)); !k; k = *v21 )
      {
        v21 = v15 + 1;
        if ( (unsigned __int64)(v15 + 1) > i )
        {
          k = 64LL;
          goto LABEL_33;
        }
        ++v15;
      }
      _BitScanForward64(&k, k);
LABEL_33:
      v22 = k + (((__int64)v15 - *((_QWORD *)&xmmword_140E30090 + 1)) >> 3 << 6);
      v14 = xmmword_140E30090;
      if ( v22 > (unsigned __int64)xmmword_140E30090 )
        v22 = xmmword_140E30090;
      v13 = v22 - v19;
LABEL_36:
      if ( v13 )
        goto LABEL_43;
    }
    v19 = v14;
LABEL_43:
    v23 = v19 - v9;
    v4 = guard_dispatch_icall_no_overrides(v9 << 12, v23 << 12, v8, i);
    if ( v4 < 0 )
      break;
    v6 = v23 + v13 + v9;
  }
  while ( v6 < (unsigned __int64)xmmword_140E30090 );
  return (unsigned int)v4;
}
