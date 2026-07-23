/*
 * XREFs of MiInsertReadiedSystemCacheViews @ 0x140355814
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x140355700 (MiRebalanceSystemCacheFreedViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8 (MiConsumeSystemCacheTbFlushNeededView.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInsertReadiedSystemCacheViews(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // r10
  unsigned int v8; // r11d
  _QWORD *i; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  unsigned int j; // r11d
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax

  v2 = a1 + 2288;
  v3 = a1 + 2320;
LABEL_2:
  while ( 1 )
  {
    v4 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
      break;
    if ( (_QWORD *)v4[1] != a2 )
      goto LABEL_10;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_10;
    *a2 = v5;
    *(_QWORD *)(v5 + 8) = a2;
    v4[4] &= 0x3FFFFFFFFFFFFFFFuLL;
    v6 = (*((_DWORD *)v4 + 4) >> 18) & 7;
    v7 = &v4[-5 * v6];
    v8 = 0;
    for ( i = v7 + 4; ; i += 5 )
    {
      if ( v8 >= 8 )
      {
        v11 = &v4[-5 * v6];
        for ( j = 0; j < 8; ++j )
        {
          if ( j != v6 )
          {
            v13 = *v11;
            if ( *(_QWORD **)(*v11 + 8LL) != v11 )
              goto LABEL_10;
            v14 = (_QWORD *)v11[1];
            if ( (_QWORD *)*v14 != v11 )
              goto LABEL_10;
            *v14 = v13;
            *(_QWORD *)(v13 + 8) = v14;
          }
          v11 += 5;
        }
        *(_QWORD *)(v2 + 16) -= 7LL;
        v15 = *(_QWORD **)(v3 + 8);
        if ( *v15 == v3 )
        {
          *v7 = v3;
          v7[1] = v15;
          *v15 = v7;
          *(_QWORD *)(v3 + 8) = v7;
          ++*(_QWORD *)(v3 + 16);
          goto LABEL_2;
        }
LABEL_10:
        __fastfail(3u);
      }
      if ( *i >= 0x4000000000000000uLL )
        break;
      ++v8;
    }
    v10 = *(_QWORD **)(v2 + 8);
    if ( *v10 != v2 )
      goto LABEL_10;
    *v4 = v2;
    v4[1] = v10;
    *v10 = v4;
    *(_QWORD *)(v2 + 8) = v4;
    ++*(_QWORD *)(v2 + 16);
  }
  a2[2] = 0LL;
}
