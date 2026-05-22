/*
 * XREFs of ?clear@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAAXXZ @ 0x180048200
 * Callers:
 *     ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x180048190 (-List@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::clear(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  void *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  char *v19; // rcx
  _QWORD *v20; // rdi
  _QWORD *v21; // [rsp+60h] [rbp+8h]
  unsigned __int64 v22; // [rsp+68h] [rbp+10h]

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
        v22 = a1[3];
        v12 = (_QWORD *)(v22
                       + 16
                       * ((0x100000001B3LL
                         * (*((unsigned __int8 *)v9 + 19) ^ (0x100000001B3LL
                                                           * (*((unsigned __int8 *)v9 + 18) ^ (0x100000001B3LL
                                                                                             * (*((unsigned __int8 *)v9
                                                                                                + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 16) ^ 0xCBF29CE484222325uLL)))))))) & a1[6]));
        v13 = (_QWORD *)v12[1];
        v21 = (_QWORD *)*v12;
        do
        {
          v14 = v10;
          v15 = v10;
          v10 = (_QWORD *)*v10;
          operator delete(v14, (const struct std::nothrow_t *)0x18);
          --a1[2];
          if ( v15 == v13 )
          {
            if ( v21 == v9 )
            {
              *v12 = v8;
              v17 = v8;
            }
            else
            {
              v17 = v11;
            }
            v12[1] = v17;
            while ( v10 != v8 )
            {
              v12 = (_QWORD *)(v22
                             + 16
                             * (a1[6] & std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
                                          v16,
                                          (__int64)(v10 + 2))));
              v18 = (_QWORD *)v12[1];
              while ( 1 )
              {
                v19 = (char *)v10;
                v20 = v10;
                v10 = (_QWORD *)*v10;
                std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)0x18);
                --a1[2];
                if ( v20 == v18 )
                  break;
                if ( v10 == v8 )
                  goto LABEL_11;
              }
              *v12 = v8;
              v12[1] = v8;
            }
            goto LABEL_12;
          }
        }
        while ( v10 != v8 );
        if ( v21 == v9 )
LABEL_11:
          *v12 = v10;
LABEL_12:
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
