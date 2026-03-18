/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CBAF0
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800CB30C (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1802728B4 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x1800CC2C0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x1800CC750 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800CE110 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirtyRegionAnnotation::GetZ(CDirtyRegionAnnotation *this, const struct CVisualTree *a2, int a3)
{
  struct _LIST_ENTRY **v3; // rbx
  unsigned int v4; // r12d
  const struct CVisualTree *v6; // rsi
  struct _LIST_ENTRY **v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // r14
  __int64 *k; // rax
  struct _LIST_ENTRY *v11; // rbp
  struct _LIST_ENTRY *v12; // rdi
  __int64 v13; // rax
  struct _LIST_ENTRY **v14; // r15
  struct _LIST_ENTRY **v15; // rbp
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rbx
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *v19; // r8
  struct _LIST_ENTRY *v20; // r13
  struct _LIST_ENTRY *v22; // r8
  __int64 v23; // rax
  struct _LIST_ENTRY **v24; // rdx
  __int64 n; // rcx
  struct _LIST_ENTRY **v26; // rcx
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *ii; // rax
  __int64 v29; // rdx
  struct _LIST_ENTRY **v30; // rbp
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // r14
  unsigned __int64 v34; // rbx
  void (__fastcall *v35)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64); // r9
  struct _LIST_ENTRY *v36; // rbp
  CTreeData *p_Blink; // r14
  struct COcclusionInfo *OcclusionInfo; // rax
  struct _LIST_ENTRY *v39; // rdx
  struct _LIST_ENTRY *v40; // rax
  struct _LIST_ENTRY *v41; // rdx
  struct _LIST_ENTRY *v42; // rax
  struct _LIST_ENTRY *m; // rcx
  struct _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *j; // rcx
  int Flink_high; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  char v49; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v50[64]; // [rsp+28h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v51; // [rsp+70h] [rbp+8h] BYREF
  const struct CVisualTree *v52; // [rsp+78h] [rbp+10h]

  v52 = a2;
  v3 = (struct _LIST_ENTRY **)*((_QWORD *)this + 2);
  v4 = 0;
  v6 = a2;
  if ( !*((_BYTE *)this + 40) )
  {
    while ( 1 )
    {
      if ( !v3 )
        return v4;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v6 + 184LL))(v6) )
      {
        v30 = v3 + 41;
LABEL_54:
        if ( v30 )
        {
          v31 = v30[22];
          Flink = 0LL;
          while ( v31 != v30[23] )
          {
            if ( LODWORD(v31->Flink[2].Flink) == a3 )
            {
              Flink = v31->Flink;
              break;
            }
            v31 = (struct _LIST_ENTRY *)((char *)v31 + 8);
          }
          Blink = v30[31][1].Blink[55].Blink;
          if ( v30[27] != Blink )
          {
            v30[27] = Blink;
            v40 = v30[22];
            if ( (unsigned __int64)(((char *)v30[23] - (char *)v40) >> 3) > 1 )
            {
              while ( v40 != v30[23] )
              {
                if ( v40->Flink == Flink
                  || (v41 = v40->Flink[1].Flink) == 0LL
                  || (unsigned __int64)((char *)Blink - (char *)v41) < 0xA )
                {
                  v40 = (struct _LIST_ENTRY *)((char *)v40 + 8);
                }
                else
                {
                  v51 = v40;
                  v40 = *(struct _LIST_ENTRY **)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                                  v30 + 22,
                                                  v50,
                                                  &v51);
                }
              }
            }
          }
          if ( Flink )
          {
            v34 = 0LL;
            if ( g_pComposition )
              v34 = *((_QWORD *)g_pComposition + 111);
            if ( Flink[1].Flink != (struct _LIST_ENTRY *)v34 )
            {
              v35 = (void (__fastcall *)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))Flink->Flink[1].Flink;
              if ( v35 == COcclusionInfo::UpdateZFromValidParent )
              {
                v36 = Flink->Blink;
                while ( 1 )
                {
                  v36 = v36 == *((struct _LIST_ENTRY **)v6 + 9) ? 0LL : v36[5].Blink;
                  if ( !v36 )
                    return LODWORD(Flink[2].Blink);
                  p_Blink = 0LL;
                  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v6 + 184LL))(v6) )
                  {
                    p_Blink = (CTreeData *)&v36[20].Blink;
                  }
                  else
                  {
                    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v36);
                    if ( TreeDataListHead )
                    {
                      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
                      {
                        if ( (const struct CVisualTree *)i[2].Flink == v6 )
                        {
                          p_Blink = (CTreeData *)&i[-22].Blink;
                          break;
                        }
                      }
                    }
                  }
                  OcclusionInfo = CTreeData::GetOcclusionInfo(p_Blink, (unsigned int)Flink[2].Flink, 0);
                  if ( OcclusionInfo && *((_QWORD *)OcclusionInfo + 2) == v34 )
                  {
                    HIDWORD(Flink[2].Flink) = *((_DWORD *)OcclusionInfo + 10);
                    LODWORD(Flink[2].Blink) = *((_DWORD *)OcclusionInfo + 10);
                    Flink[1].Flink = (struct _LIST_ENTRY *)v34;
                    return LODWORD(Flink[2].Blink);
                  }
                }
              }
              if ( v35 == CWindowOcclusionInfo::UpdateZFromValidParent )
              {
                COcclusionInfo::UpdateZFromValidParent((COcclusionInfo *)Flink, v6, v34);
                Flink_high = HIDWORD(Flink[2].Flink);
                v4 = (unsigned int)Flink[2].Blink;
                LODWORD(Flink[3].Flink) = Flink_high;
                HIDWORD(Flink[3].Flink) = Flink_high;
                return v4;
              }
              ((void (__fastcall *)(struct _LIST_ENTRY *, const struct CVisualTree *, unsigned __int64))Flink->Flink[1].Flink)(
                Flink,
                v6,
                v34);
            }
            return LODWORD(Flink[2].Blink);
          }
        }
      }
      else
      {
        v44 = CVisual::GetTreeDataListHead((CVisual *)v3);
        if ( v44 )
        {
          for ( j = v44->Flink; j != v44; j = j->Flink )
          {
            v30 = &j[-22].Blink;
            if ( (const struct CVisualTree *)j[2].Flink == v6 )
              goto LABEL_54;
          }
        }
      }
      if ( v3 == *((struct _LIST_ENTRY ***)v6 + 9) )
        v3 = 0LL;
      else
        v3 = (struct _LIST_ENTRY **)v3[11];
    }
  }
  while ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v6 + 184LL))(v6) )
    {
      v7 = v3 + 41;
LABEL_5:
      if ( v7 )
      {
        v8 = (__int64 *)v7[22];
        v9 = 0LL;
        for ( k = v8; k != (__int64 *)v7[23]; ++k )
        {
          if ( *(_DWORD *)(*k + 32) == a3 )
          {
            v9 = *k;
            break;
          }
        }
        v11 = (__int64)v7[31][1].Blink[55].Blink;
        if ( v7[27] != (struct _LIST_ENTRY *)v11 )
        {
          v7[27] = (struct _LIST_ENTRY *)v11;
          if ( (unsigned __int64)(((char *)v7[23] - (char *)v8) >> 3) > 1 )
          {
            while ( v8 != (__int64 *)v7[23] )
            {
              if ( *v8 == v9 || (v29 = *(_QWORD *)(*v8 + 16)) == 0 || (unsigned __int64)(v11 - v29) < 0xA )
              {
                ++v8;
              }
              else
              {
                v51 = (struct _LIST_ENTRY *)v8;
                v8 = *(__int64 **)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                    v7 + 22,
                                    &v49,
                                    &v51);
              }
            }
          }
        }
        if ( v9 )
        {
          v12 = 0LL;
          if ( g_pComposition )
            v12 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 111);
          if ( *(struct _LIST_ENTRY **)(v9 + 16) != v12 )
          {
            if ( *(void (__fastcall **)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))(*(_QWORD *)v9 + 16LL) == COcclusionInfo::UpdateZFromValidParent )
            {
              v13 = *(_QWORD *)(v9 + 8);
              if ( v13 == *((_QWORD *)v6 + 9) )
                goto LABEL_119;
              v14 = *(struct _LIST_ENTRY ***)(v13 + 88);
              while ( v14 )
              {
                v15 = 0LL;
                if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v6 + 184LL))(v6) )
                {
                  v15 = v14 + 41;
                }
                else
                {
                  v42 = CVisual::GetTreeDataListHead((CVisual *)v14);
                  if ( v42 )
                  {
                    for ( m = v42->Flink; m != v42; m = m->Flink )
                    {
                      if ( (const struct CVisualTree *)m[2].Flink == v6 )
                      {
                        v15 = &m[-22].Blink;
                        break;
                      }
                    }
                  }
                }
                v16 = v15[22];
                v17 = 0LL;
                v18 = v16;
                v19 = v15[23];
                while ( v18 != v19 )
                {
                  if ( LODWORD(v18->Flink[2].Flink) == *(_DWORD *)(v9 + 32) )
                  {
                    v17 = v18->Flink;
                    break;
                  }
                  v18 = (struct _LIST_ENTRY *)((char *)v18 + 8);
                }
                v20 = v15[31][1].Blink[55].Blink;
                if ( v15[27] != v20 )
                {
                  v15[27] = v20;
                  if ( (unsigned __int64)(((char *)v19 - (char *)v16) >> 3) > 1 )
                  {
                    while ( v16 != v15[23] )
                    {
                      if ( v16->Flink == v17
                        || (v39 = v16->Flink[1].Flink) == 0LL
                        || (unsigned __int64)((char *)v20 - (char *)v39) < 0xA )
                      {
                        v16 = (struct _LIST_ENTRY *)((char *)v16 + 8);
                      }
                      else
                      {
                        v51 = v16;
                        v16 = *(struct _LIST_ENTRY **)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                                        v15 + 22,
                                                        v50,
                                                        &v51);
                      }
                    }
                    v6 = v52;
                  }
                }
                if ( v17 && v17[1].Flink == v12 )
                {
                  *(_DWORD *)(v9 + 36) = v17[2].Blink;
                  *(_DWORD *)(v9 + 40) = v17[2].Blink;
                  *(_QWORD *)(v9 + 16) = v12;
                  return *(unsigned int *)(v9 + 36);
                }
                if ( v14 == *((struct _LIST_ENTRY ***)v6 + 9) )
LABEL_119:
                  v14 = 0LL;
                else
                  v14 = (struct _LIST_ENTRY **)v14[11];
              }
            }
            else
            {
              (*(void (__fastcall **)(__int64, const struct CVisualTree *, struct _LIST_ENTRY *))(*(_QWORD *)v9 + 16LL))(
                v9,
                v6,
                v12);
            }
          }
          return *(unsigned int *)(v9 + 36);
        }
      }
    }
    else
    {
      v22 = v3[29];
      if ( SLODWORD(v22->Flink) < 0 )
      {
        v23 = HIDWORD(v22->Flink);
        v24 = &v22->Blink;
        for ( n = 0LL; (unsigned int)n < (unsigned int)v23; v24 = (struct _LIST_ENTRY **)((char *)v24 + 1) )
        {
          if ( *(_BYTE *)v24 == 1 )
            break;
          n = (unsigned int)(n + 1);
        }
        v26 = (unsigned int)n >= (unsigned int)v23
            ? 0LL
            : (struct _LIST_ENTRY **)((char *)&v22->Blink + 8 * n - (((_BYTE)v23 + 15) & 7) + v23 + 7);
        v27 = *v26;
        if ( v27 )
        {
          for ( ii = v27->Flink; ii != v27; ii = ii->Flink )
          {
            v7 = &ii[-22].Blink;
            if ( (const struct CVisualTree *)ii[2].Flink == v6 )
              goto LABEL_5;
          }
        }
      }
    }
    if ( v3 == *((struct _LIST_ENTRY ***)v6 + 9) )
      v3 = 0LL;
    else
      v3 = (struct _LIST_ENTRY **)v3[11];
  }
  return v4;
}
