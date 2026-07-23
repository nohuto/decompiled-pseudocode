/*
 * XREFs of MiMirrorReduceBlackToActiveAndPrivatePages @ 0x14049D0BC
 * Callers:
 *     MiMirrorBlackPhase @ 0x140673E6C (MiMirrorBlackPhase.c)
 * Callees:
 *     MiMirrorRemoveInactivePages @ 0x14049D2E8 (MiMirrorRemoveInactivePages.c)
 */

__int64 __fastcall MiMirrorReduceBlackToActiveAndPrivatePages(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 i; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // r8
  _QWORD *j; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 k; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi

  v1 = 0LL;
  do
  {
    v3 = v1 & -(__int64)(v1 < (unsigned __int64)xmmword_140E301E0);
    v4 = xmmword_140E301E0 - 1;
    while ( 1 )
    {
      result = v4 - v3 + 1;
      if ( v4 - v3 == -1LL )
        goto LABEL_7;
      v6 = (_QWORD *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 8 * (v3 >> 6));
      result = ~*v6;
      for ( i = result | ((1LL << (v3 & 0x3F)) - 1); i == -1; i = ~*v6 )
      {
        if ( (unsigned __int64)++v6 > *((_QWORD *)&xmmword_140E301E0 + 1) + 8 * (v4 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~i);
      v8 = result + (((__int64)v6 - *((_QWORD *)&xmmword_140E301E0 + 1)) >> 3 << 6);
      if ( v8 > v4 )
      {
LABEL_7:
        v8 = -1LL;
        goto LABEL_8;
      }
      if ( v8 != -1LL )
        break;
LABEL_8:
      if ( !v3 )
        break;
      v9 = v1 + 1;
      if ( v1 + 1 > (unsigned __int64)xmmword_140E301E0 )
        v9 = xmmword_140E301E0;
      v4 = v9 - 1;
      v3 = 0LL;
    }
    if ( v8 < v1 || v8 == -1LL )
      break;
    v10 = 0LL;
    v11 = xmmword_140E301E0;
    if ( (unsigned __int64)xmmword_140E301E0 > v8 )
    {
      v12 = *((_QWORD *)&xmmword_140E301E0 + 1) + 8 * ((unsigned __int64)(xmmword_140E301E0 - 1) >> 6);
      v13 = (_QWORD *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 8 * (v8 >> 6));
      v14 = ((1LL << (v8 & 0x3F)) - 1) | *v13;
      for ( j = v13 + 1; ; ++j )
      {
        v16 = ~v14;
        if ( v16 )
          break;
        if ( (unsigned __int64)j > v12 )
        {
          v11 = xmmword_140E301E0;
          goto LABEL_35;
        }
        v14 = *++v13;
      }
      _BitScanForward64((unsigned __int64 *)&v17, v16);
      v18 = (unsigned int)v17 + (((__int64)v13 - *((_QWORD *)&xmmword_140E301E0 + 1)) >> 3 << 6);
      v11 = xmmword_140E301E0;
      if ( v18 > (unsigned __int64)xmmword_140E301E0 )
      {
LABEL_35:
        v18 = v11;
        goto LABEL_31;
      }
      for ( k = ~(v16 | ((1LL << v17) - 1)); !k; k = *v20 )
      {
        v20 = v13 + 1;
        if ( (unsigned __int64)(v13 + 1) > v12 )
        {
          k = 64LL;
          goto LABEL_28;
        }
        ++v13;
      }
      _BitScanForward64(&k, k);
LABEL_28:
      v21 = k + (((__int64)v13 - *((_QWORD *)&xmmword_140E301E0 + 1)) >> 3 << 6);
      v11 = xmmword_140E301E0;
      if ( v21 > (unsigned __int64)xmmword_140E301E0 )
        v21 = xmmword_140E301E0;
      v10 = v21 - v18;
LABEL_31:
      if ( v10 )
        continue;
    }
    v18 = v11;
    v22 = v18 - v8;
    result = MiMirrorRemoveInactivePages(a1, v8, v22);
    v1 = v22 + v10 + v8;
  }
  while ( v1 < (unsigned __int64)xmmword_140E301E0 );
  return result;
}
