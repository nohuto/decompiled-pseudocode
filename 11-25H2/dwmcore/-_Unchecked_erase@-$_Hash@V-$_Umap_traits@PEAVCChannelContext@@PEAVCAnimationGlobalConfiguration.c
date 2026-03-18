/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801E3A1C
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180256FCC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800C149C (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  _QWORD *v17; // r12
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  __int64 v22; // [rsp+70h] [rbp+18h]
  _QWORD *v23; // [rsp+78h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = a2;
    v7 = (_QWORD *)a2[1];
    v8 = a1[3];
    v22 = a1[1];
    v9 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
           (__int64)a1,
           (__int64)(a2 + 2));
    v10 = 2 * (a1[6] & v9);
    v21 = *(_QWORD **)(v8 + 16 * (a1[6] & v9));
    v23 = *(_QWORD **)(v8 + 16 * (a1[6] & v9) + 8);
    while ( 1 )
    {
      v11 = v6;
      v12 = v6;
      v6 = (_QWORD *)*v6;
      std::_Deallocate<16,0>(v11, 0x20uLL);
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
      v15 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
              v13,
              (__int64)(v6 + 2));
      v16 = 2 * (a1[6] & v15);
      v17 = *(_QWORD **)(v8 + 16 * (a1[6] & v15) + 8);
      while ( 1 )
      {
        v18 = v6;
        v19 = v6;
        v6 = (_QWORD *)*v6;
        std::_Deallocate<16,0>(v18, 0x20uLL);
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
    v6[1] = v7;
  }
  return a3;
}
