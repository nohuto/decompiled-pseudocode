/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180019040
 * Callers:
 *     ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x1801C6070 (-EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::clear(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void *v6; // r8
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // r12
  _QWORD *v12; // r15
  _QWORD *v13; // r13
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rbp
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // [rsp+60h] [rbp+8h]
  unsigned __int64 v21; // [rsp+68h] [rbp+10h]

  v2 = a1[2];
  if ( v2 )
  {
    if ( a1[7] >> 3 > v2 )
    {
      v8 = (_QWORD *)a1[1];
      v9 = (_QWORD *)*v8;
      if ( (_QWORD *)*v8 != v8 )
      {
        v10 = (_QWORD *)*v8;
        v11 = (_QWORD *)v9[1];
        v21 = a1[3];
        v12 = (_QWORD *)(v21
                       + 16
                       * ((0x100000001B3LL
                         * (*((unsigned __int8 *)v9 + 19) ^ (0x100000001B3LL
                                                           * (*((unsigned __int8 *)v9 + 18) ^ (0x100000001B3LL
                                                                                             * (*((unsigned __int8 *)v9
                                                                                                + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 16) ^ 0xCBF29CE484222325uLL)))))))) & a1[6]));
        v13 = (_QWORD *)*v12;
        v20 = (_QWORD *)v12[1];
        do
        {
          v14 = v10;
          v15 = v10;
          v10 = (_QWORD *)*v10;
          std::_Deallocate<16,0>(v14, 24LL);
          --a1[2];
          if ( v15 == v20 )
          {
            if ( v13 == v9 )
            {
              *v12 = v8;
              v16 = v8;
            }
            else
            {
              v16 = v11;
            }
            v12[1] = v16;
            while ( v10 != v8 )
            {
              v12 = (_QWORD *)(v21
                             + 16
                             * ((0x100000001B3LL
                               * (*((unsigned __int8 *)v10 + 19) ^ (0x100000001B3LL
                                                                  * (*((unsigned __int8 *)v10 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v10 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v10 + 16) ^ 0xCBF29CE484222325uLL)))))))) & a1[6]));
              v17 = (_QWORD *)v12[1];
              while ( 1 )
              {
                v18 = v10;
                v19 = v10;
                v10 = (_QWORD *)*v10;
                std::_Deallocate<16,0>(v18, 24LL);
                --a1[2];
                if ( v19 == v17 )
                  break;
                if ( v10 == v8 )
                  goto LABEL_19;
              }
              *v12 = v8;
              v12[1] = v8;
            }
            goto LABEL_20;
          }
        }
        while ( v10 != v8 );
        if ( v13 == v9 )
LABEL_19:
          *v12 = v10;
LABEL_20:
        *v11 = v10;
        v10[1] = v11;
      }
    }
    else
    {
      v3 = (_QWORD **)a1[1];
      *v3[1] = 0LL;
      v4 = *v3;
      if ( v4 )
      {
        do
        {
          v5 = (_QWORD *)*v4;
          operator delete(v4, (const struct std::nothrow_t *)0x18);
          v4 = v5;
        }
        while ( v5 );
      }
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8) = a1[1];
      a1[2] = 0LL;
      v6 = (void *)a1[3];
      v7 = (a1[4] - (unsigned __int64)v6 + 7) >> 3;
      if ( (unsigned __int64)v6 > a1[4] )
        v7 = 0LL;
      if ( v7 )
        memset64(v6, a1[1], v7);
    }
  }
}
