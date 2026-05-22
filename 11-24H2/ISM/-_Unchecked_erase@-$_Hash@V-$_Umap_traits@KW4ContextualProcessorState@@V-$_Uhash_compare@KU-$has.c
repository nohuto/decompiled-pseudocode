/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18007C2C4
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001BC80 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800281A0 (-clear@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 */

char *__fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        char *a2,
        char *a3)
{
  char *v6; // rdi
  char **v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  char *v11; // rcx
  char *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  char *v17; // r12
  char *v18; // rcx
  char *v19; // rbx
  char *v21; // [rsp+68h] [rbp+10h]
  __int64 v22; // [rsp+70h] [rbp+18h]
  char *v23; // [rsp+78h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = a2;
    v7 = (char **)*((_QWORD *)a2 + 1);
    v8 = a1[3];
    v22 = a1[1];
    v9 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
           (__int64)a1,
           (__int64)(a2 + 16));
    v10 = 2 * (a1[6] & v9);
    v21 = *(char **)(v8 + 16 * (a1[6] & v9));
    v23 = *(char **)(v8 + 16 * (a1[6] & v9) + 8);
    while ( 1 )
    {
      v11 = v6;
      v12 = v6;
      v6 = *(char **)v6;
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)0x18);
      --a1[2];
      if ( v12 == v23 )
        break;
      if ( v6 == a3 )
      {
        if ( v21 == a2 )
          *(_QWORD *)(v8 + 8 * v10) = v6;
        goto LABEL_16;
      }
    }
    if ( v21 == a2 )
    {
      v13 = v22;
      *(_QWORD *)(v8 + 8 * v10) = v22;
      v14 = (_QWORD *)v22;
    }
    else
    {
      v14 = v7;
    }
    *(_QWORD *)(v8 + 8 * v10 + 8) = v14;
    while ( v6 != a3 )
    {
      v15 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
              v13,
              (__int64)(v6 + 16));
      v16 = 2 * (a1[6] & v15);
      v17 = *(char **)(v8 + 16 * (a1[6] & v15) + 8);
      while ( 1 )
      {
        v18 = v6;
        v19 = v6;
        v6 = *(char **)v6;
        std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)0x18);
        --a1[2];
        if ( v19 == v17 )
          break;
        if ( v6 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v16) = v6;
          goto LABEL_16;
        }
      }
      *(_QWORD *)(v8 + 8 * v16) = v22;
      *(_QWORD *)(v8 + 8 * v16 + 8) = v22;
    }
LABEL_16:
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
  }
  return a3;
}
