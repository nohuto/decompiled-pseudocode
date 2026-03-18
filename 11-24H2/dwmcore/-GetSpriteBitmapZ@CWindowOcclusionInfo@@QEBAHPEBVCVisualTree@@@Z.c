/*
 * XREFs of ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x18009D374
 * Callers:
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x1802929EC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18009E4E0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowOcclusionInfo::GetSpriteBitmapZ(CWindowOcclusionInfo *this, const struct CVisualTree *a2)
{
  struct _LIST_ENTRY *v2; // r14
  _QWORD *i; // rdi
  struct _LIST_ENTRY *v6; // rbp
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v8; // rsi
  struct _LIST_ENTRY *k; // rcx
  struct _LIST_ENTRY *Blink; // r12
  int v11; // eax
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v16; // [rsp+60h] [rbp+8h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( g_pComposition )
    v2 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 111);
  if ( *((struct _LIST_ENTRY **)this + 2) != v2 )
  {
    i = (_QWORD *)*((_QWORD *)this + 1);
    if ( i == *((_QWORD **)a2 + 9) )
      goto LABEL_27;
LABEL_5:
    for ( i = (_QWORD *)i[11]; i; i = 0LL )
    {
      v6 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        v6 = (struct _LIST_ENTRY *)(i + 41);
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
              v6 = j - 22;
              break;
            }
          }
        }
      }
      Flink = v6[11].Flink;
      v8 = 0LL;
      for ( k = Flink; k != v6[11].Blink; k = (struct _LIST_ENTRY *)((char *)k + 8) )
      {
        if ( LODWORD(k->Flink[2].Flink) == *((_DWORD *)this + 8) )
        {
          v8 = k->Flink;
          break;
        }
      }
      Blink = v6[15].Blink[1].Blink[55].Blink;
      if ( v6[13].Blink != Blink )
      {
        v6[13].Blink = Blink;
        if ( (unsigned __int64)(((char *)v6[11].Blink - (char *)Flink) >> 3) > 1 )
        {
          while ( Flink != v6[11].Blink )
          {
            if ( Flink->Flink == v8
              || (v13 = Flink->Flink[1].Flink) == 0LL
              || (unsigned __int64)((char *)Blink - (char *)v13) < 0xA )
            {
              Flink = (struct _LIST_ENTRY *)((char *)Flink + 8);
            }
            else
            {
              v16 = Flink;
              Flink = *(struct _LIST_ENTRY **)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                                &v6[11],
                                                &v17,
                                                &v16);
            }
          }
        }
      }
      if ( v8 && v8[1].Flink == v2 )
      {
        *((_DWORD *)this + 9) = v8[2].Blink;
        *((_DWORD *)this + 10) = v8[2].Blink;
        *((_QWORD *)this + 2) = v2;
        break;
      }
      if ( i != *((_QWORD **)a2 + 9) )
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
