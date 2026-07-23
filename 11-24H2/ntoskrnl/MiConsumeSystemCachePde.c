/*
 * XREFs of MiConsumeSystemCachePde @ 0x140463984
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiConsumeSystemCachePde(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rax
  _QWORD *v8; // rax

  v1 = (_QWORD *)(a1 + 2320);
  v3 = *(_QWORD **)(a1 + 2320);
  if ( v3 == (_QWORD *)(a1 + 2320) )
    return 0LL;
  if ( (_QWORD *)v3[1] != v1 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_7:
    __fastfail(3u);
  *v1 = v4;
  *(_QWORD *)(v4 + 8) = v1;
  v5 = a1 + 2288;
  --v1[2];
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = v3[4] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v6 )
        break;
      v3[4] = v7 | 0x8000000000000000uLL;
      v3 += 5;
      v6 = 1;
    }
    v3[4] = v7;
    v8 = *(_QWORD **)(v5 + 8);
    if ( *v8 != v5 )
      goto LABEL_7;
    *v3 = v5;
    ++v6;
    v3[1] = v8;
    *v8 = v3;
    *(_QWORD *)(v5 + 8) = v3;
    v3 += 5;
  }
  while ( v6 < 8 );
  *(_QWORD *)(v5 + 16) += 7LL;
  return v3 - 40;
}
