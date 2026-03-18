/*
 * XREFs of ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x18010C05C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x1800CC2C0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowOcclusionInfo::GetSpriteBitmapZ(CWindowOcclusionInfo *this, const struct CVisualTree *a2)
{
  __int64 v2; // r14
  __int64 *i; // rdi
  __int64 *p_Blink; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 k; // rcx
  __int64 v10; // r12
  int v11; // eax
  __int64 v13; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( g_pComposition )
    v2 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)this + 2) != v2 )
  {
    i = (__int64 *)*((_QWORD *)this + 1);
    if ( i == *((__int64 **)a2 + 9) )
      goto LABEL_27;
LABEL_5:
    for ( i = (__int64 *)i[11]; i; i = 0LL )
    {
      p_Blink = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        p_Blink = i + 41;
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)i);
        if ( TreeDataListHead )
        {
          for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
          {
            if ( (const struct CVisualTree *)j[2].Flink == a2 )
            {
              p_Blink = (__int64 *)&j[-22].Blink;
              break;
            }
          }
        }
      }
      v7 = p_Blink[22];
      v8 = 0LL;
      for ( k = v7; k != p_Blink[23]; k += 8LL )
      {
        if ( *(_DWORD *)(*(_QWORD *)k + 32LL) == *((_DWORD *)this + 8) )
        {
          v8 = *(_QWORD *)k;
          break;
        }
      }
      v10 = *(_QWORD *)(*(_QWORD *)(p_Blink[31] + 24) + 888LL);
      if ( p_Blink[27] != v10 )
      {
        p_Blink[27] = v10;
        if ( (unsigned __int64)((p_Blink[23] - v7) >> 3) > 1 )
        {
          while ( v7 != p_Blink[23] )
          {
            if ( *(_QWORD *)v7 == v8
              || (v13 = *(_QWORD *)(*(_QWORD *)v7 + 16LL)) == 0
              || (unsigned __int64)(v10 - v13) < 0xA )
            {
              v7 += 8LL;
            }
            else
            {
              v16 = v7;
              v7 = *detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                      p_Blink + 22,
                      &v17,
                      &v16);
            }
          }
        }
      }
      if ( v8 && *(_QWORD *)(v8 + 16) == v2 )
      {
        *((_DWORD *)this + 9) = *(_DWORD *)(v8 + 40);
        *((_DWORD *)this + 10) = *(_DWORD *)(v8 + 40);
        *((_QWORD *)this + 2) = v2;
        break;
      }
      if ( i != *((__int64 **)a2 + 9) )
        goto LABEL_5;
LABEL_27:
      ;
    }
    v11 = *((_DWORD *)this + 9);
    *((_DWORD *)this + 12) = v11;
    *((_DWORD *)this + 13) = v11;
  }
  return *((unsigned int *)this + 12);
}
