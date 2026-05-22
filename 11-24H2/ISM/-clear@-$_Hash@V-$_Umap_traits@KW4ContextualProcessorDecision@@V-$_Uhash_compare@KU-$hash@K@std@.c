/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001F6F0
 * Callers:
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001EC20 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18009A91C (--1_Clear_guard@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void *v6; // r8
  unsigned __int64 v7; // rcx
  char *v8; // rax
  char *v9; // r15
  char *v10; // rbp
  char *v11; // rsi
  char *v12; // r14
  char **v13; // r12
  char *v14; // r13
  char *v15; // rcx
  char *v16; // rbx
  __int64 v17; // rcx
  char **v18; // rbp
  char *v19; // r12
  char *v20; // rcx
  char *v21; // rbx
  char *v22; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+68h] [rbp+10h]

  v2 = a1[2];
  if ( v2 )
  {
    if ( a1[7] >> 3 > v2 )
    {
      v9 = (char *)a1[1];
      v10 = *(char **)v9;
      if ( *(char **)v9 != v9 )
      {
        v11 = *(char **)v9;
        v12 = (char *)*((_QWORD *)v10 + 1);
        v23 = a1[3];
        v13 = (char **)(v23
                      + 16
                      * ((0x100000001B3LL
                        * ((unsigned __int8)v10[19] ^ (0x100000001B3LL
                                                     * ((unsigned __int8)v10[18] ^ (0x100000001B3LL
                                                                                  * ((unsigned __int8)v10[17] ^ (0x100000001B3LL * ((unsigned __int8)v10[16] ^ 0xCBF29CE484222325uLL)))))))) & a1[6]));
        v14 = *v13;
        v22 = v13[1];
        while ( 1 )
        {
          v15 = v11;
          v16 = v11;
          v11 = *(char **)v11;
          std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)0x18);
          --a1[2];
          if ( v16 == v22 )
            break;
          if ( v11 == v9 )
          {
            if ( v14 == v10 )
              *v13 = v11;
            goto LABEL_13;
          }
        }
        if ( v14 == v10 )
        {
          *v13 = v9;
          v8 = v9;
        }
        else
        {
          v8 = v12;
        }
        v13[1] = v8;
        while ( v11 != v9 )
        {
          v18 = (char **)(v23
                        + 16
                        * (a1[6] & std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
                                     v17,
                                     v11 + 16)));
          v19 = v18[1];
          while ( 1 )
          {
            v20 = v11;
            v21 = v11;
            v11 = *(char **)v11;
            std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)0x18);
            --a1[2];
            if ( v21 == v19 )
              break;
            if ( v11 == v9 )
            {
              *v18 = v11;
              goto LABEL_13;
            }
          }
          *v18 = v9;
          v18[1] = v9;
        }
LABEL_13:
        *(_QWORD *)v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
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
