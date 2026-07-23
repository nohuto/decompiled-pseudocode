/*
 * XREFs of PfSnPrefetchCacheEntryGet @ 0x140949040
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140948CE8 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14094A9E4 (PfSnPrefetchCacheEntryUpdate.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnPrefetchCacheCtxStart @ 0x140AAB2C0 (PfSnPrefetchCacheCtxStart.c)
 */

__int64 __fastcall PfSnPrefetchCacheEntryGet(__int64 a1, _OWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // r12d
  __int64 v7; // r14
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  __int128 v17; // xmm1
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  _QWORD *i; // rdx
  __int64 v29; // [rsp+60h] [rbp+8h]
  __int64 v30; // [rsp+60h] [rbp+8h]
  _OWORD *Buf2; // [rsp+68h] [rbp+10h]
  __int64 v33; // [rsp+70h] [rbp+18h]

  Buf2 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v7 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v8 = 1;
  v9 = 0LL;
  v10 = a3 & v7;
  v29 = a3 & v7;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_5;
    if ( !(v4 >> 5) )
      break;
    a2 = Buf2;
    v9 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v29)) & ((v4 >> 5) - 1));
    do
    {
LABEL_5:
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        goto LABEL_13;
    }
    while ( v10 != (v7 & *(_QWORD *)(v9 + 8)) );
    if ( !v9 )
      break;
    v11 = memcmp((const void *)(v9 + 32), a2, 0x40uLL);
    a2 = Buf2;
    if ( !v11 )
    {
      v12 = (_QWORD *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 16);
      if ( *(_QWORD *)(v13 + 8) != v9 + 16 )
        goto LABEL_12;
      v14 = *(_QWORD **)(v9 + 24);
      if ( (_QWORD *)*v14 != v12 )
        goto LABEL_12;
      *v14 = v13;
      v15 = a1 + 16;
      *(_QWORD *)(v13 + 8) = v14;
      v16 = *(_QWORD **)(v15 + 8);
      if ( *v16 != v15 )
        goto LABEL_12;
      *v12 = v15;
      *(_QWORD *)(v9 + 24) = v16;
      *v16 = v12;
      *(_QWORD *)(v15 + 8) = v12;
      v8 = 0;
      if ( a4 )
      {
LABEL_20:
        *a4 = v8;
        return v9;
      }
      return v9;
    }
  }
LABEL_13:
  if ( a4 )
  {
    if ( *(_QWORD *)(a1 + 8) || (int)PfSnPrefetchCacheCtxStart(a1) >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)v9;
      }
      else
      {
        v25 = (_QWORD *)(a1 + 16);
        v26 = *(_QWORD **)(a1 + 16);
        if ( v26[1] != a1 + 16 || (v27 = *v26, *(_QWORD **)(*v26 + 8LL) != v26) )
LABEL_12:
          __fastfail(3u);
        *v25 = v27;
        v9 = (__int64)(v26 - 2);
        *(_QWORD *)(v27 + 8) = v25;
        v30 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           * ((37
                             * (BYTE6(v30)
                              + 37
                              * (BYTE5(v30)
                               + 37
                               * (BYTE4(v30)
                                + 37
                                * (BYTE3(v30)
                                 + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                             + HIBYTE(v30)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
              (*i & 1) == 0;
              i = (_QWORD *)*i )
        {
          if ( *i == v9 )
          {
            *i = *(_QWORD *)v9;
            --*(_DWORD *)a1;
            *(_QWORD *)v9 |= 0x8000000000000002uLL;
            break;
          }
        }
      }
      memset_0((void *)v9, 0, 0x78uLL);
      *(_OWORD *)(v9 + 32) = *Buf2;
      *(_OWORD *)(v9 + 48) = Buf2[1];
      *(_OWORD *)(v9 + 64) = Buf2[2];
      v17 = Buf2[3];
      *(_QWORD *)(v9 + 8) = a3;
      *(_OWORD *)(v9 + 80) = v17;
      v18 = *(_DWORD *)(a1 + 4);
      v33 = a3 & (-1LL << (v18 & 0x1F));
      v19 = *(_QWORD *)(a1 + 8);
      v20 = (37
           * (BYTE6(v33)
            + 37
            * (BYTE5(v33)
             + 37
             * (BYTE4(v33)
              + 37 * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
           + HIBYTE(v33)) & ((v18 >> 5) - 1);
      *(_QWORD *)v9 = *(_QWORD *)(v19 + 8 * v20);
      v21 = (_QWORD *)(v9 + 16);
      *(_QWORD *)(v19 + 8 * v20) = v9;
      ++*(_DWORD *)a1;
      v22 = a1 + 16;
      v23 = *(_QWORD **)(v22 + 8);
      if ( *v23 != v22 )
        goto LABEL_12;
      *v21 = v22;
      *(_QWORD *)(v9 + 24) = v23;
      *v23 = v21;
      *(_QWORD *)(v22 + 8) = v21;
    }
    else
    {
      v9 = 0LL;
    }
    goto LABEL_20;
  }
  return 0LL;
}
