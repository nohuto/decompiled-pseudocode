/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x18009DD10
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1802669B8 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18009E4E0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800A00E0 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirtyRegionAnnotation::GetZ(CDirtyRegionAnnotation *this, const struct CVisualTree *a2, int a3)
{
  _QWORD *v3; // rbx
  unsigned int v4; // r12d
  const struct CVisualTree *v6; // rsi
  _QWORD *v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // r14
  __int64 *k; // rax
  __int64 v11; // rbp
  struct _LIST_ENTRY *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // r15
  struct _LIST_ENTRY *v15; // rbp
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rbx
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *v19; // r8
  struct _LIST_ENTRY *v20; // r13
  __int64 v22; // r8
  __int64 v23; // rax
  _BYTE *v24; // rdx
  __int64 n; // rcx
  _QWORD **v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *ii; // rax
  __int64 v29; // rdx
  struct _LIST_ENTRY *v30; // rbp
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v32; // rdi
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
  char v49[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v50[64]; // [rsp+28h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v51; // [rsp+70h] [rbp+8h] BYREF
  const struct CVisualTree *v52; // [rsp+78h] [rbp+10h]

  v52 = a2;
  v3 = (_QWORD *)*((_QWORD *)this + 2);
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
        v30 = (struct _LIST_ENTRY *)(v3 + 41);
LABEL_54:
        if ( v30 )
        {
          Flink = v30[11].Flink;
          v32 = 0LL;
          while ( Flink != v30[11].Blink )
          {
            if ( LODWORD(Flink->Flink[2].Flink) == a3 )
            {
              v32 = Flink->Flink;
              break;
            }
            Flink = (struct _LIST_ENTRY *)((char *)Flink + 8);
          }
          Blink = v30[15].Blink[1].Blink[55].Blink;
          if ( v30[13].Blink != Blink )
          {
            v30[13].Blink = Blink;
            v40 = v30[11].Flink;
            if ( (unsigned __int64)(((char *)v30[11].Blink - (char *)v40) >> 3) > 1 )
            {
              while ( v40 != v30[11].Blink )
              {
                if ( v40->Flink == v32
                  || (v41 = v40->Flink[1].Flink) == 0LL
                  || (unsigned __int64)((char *)Blink - (char *)v41) < 0xA )
                {
                  v40 = (struct _LIST_ENTRY *)((char *)v40 + 8);
                }
                else
                {
                  v51 = v40;
                  v40 = *(struct _LIST_ENTRY **)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                                  &v30[11],
                                                  v50,
                                                  &v51);
                }
              }
            }
          }
          if ( v32 )
          {
            v34 = 0LL;
            if ( g_pComposition )
              v34 = *((_QWORD *)g_pComposition + 111);
            if ( v32[1].Flink != (struct _LIST_ENTRY *)v34 )
            {
              v35 = (void (__fastcall *)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))v32->Flink[1].Flink;
              if ( v35 == COcclusionInfo::UpdateZFromValidParent )
              {
                v36 = v32->Blink;
                while ( 1 )
                {
                  v36 = v36 == *((struct _LIST_ENTRY **)v6 + 9) ? 0LL : v36[5].Blink;
                  if ( !v36 )
                    return LODWORD(v32[2].Blink);
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
                          p_Blink = (CTreeData *)&i[-22];
                          break;
                        }
                      }
                    }
                  }
                  OcclusionInfo = CTreeData::GetOcclusionInfo(p_Blink, (unsigned int)v32[2].Flink, 0);
                  if ( OcclusionInfo && *((_QWORD *)OcclusionInfo + 2) == v34 )
                  {
                    HIDWORD(v32[2].Flink) = *((_DWORD *)OcclusionInfo + 10);
                    LODWORD(v32[2].Blink) = *((_DWORD *)OcclusionInfo + 10);
                    v32[1].Flink = (struct _LIST_ENTRY *)v34;
                    return LODWORD(v32[2].Blink);
                  }
                }
              }
              if ( (char *)v35 == (char *)CWindowOcclusionInfo::UpdateZFromValidParent )
              {
                COcclusionInfo::UpdateZFromValidParent((COcclusionInfo *)v32, v6, v34);
                Flink_high = HIDWORD(v32[2].Flink);
                v4 = (unsigned int)v32[2].Blink;
                LODWORD(v32[3].Flink) = Flink_high;
                HIDWORD(v32[3].Flink) = Flink_high;
                return v4;
              }
              ((void (__fastcall *)(struct _LIST_ENTRY *, const struct CVisualTree *, unsigned __int64))v32->Flink[1].Flink)(
                v32,
                v6,
                v34);
            }
            return LODWORD(v32[2].Blink);
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
            v30 = j - 22;
            if ( (const struct CVisualTree *)j[2].Flink == v6 )
              goto LABEL_54;
          }
        }
      }
      if ( v3 == *((_QWORD **)v6 + 9) )
        v3 = 0LL;
      else
        v3 = (_QWORD *)v3[11];
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
        v11 = *(_QWORD *)(*(_QWORD *)(v7[31] + 24LL) + 888LL);
        if ( v7[27] != v11 )
        {
          v7[27] = v11;
          if ( (unsigned __int64)((__int64)(v7[23] - (_QWORD)v8) >> 3) > 1 )
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
                                    v49,
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
              v14 = *(_QWORD **)(v13 + 88);
              while ( v14 )
              {
                v15 = 0LL;
                if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v6 + 184LL))(v6) )
                {
                  v15 = (struct _LIST_ENTRY *)(v14 + 41);
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
                        v15 = m - 22;
                        break;
                      }
                    }
                  }
                }
                v16 = v15[11].Flink;
                v17 = 0LL;
                v18 = v16;
                v19 = v15[11].Blink;
                while ( v18 != v19 )
                {
                  if ( LODWORD(v18->Flink[2].Flink) == *(_DWORD *)(v9 + 32) )
                  {
                    v17 = v18->Flink;
                    break;
                  }
                  v18 = (struct _LIST_ENTRY *)((char *)v18 + 8);
                }
                v20 = v15[15].Blink[1].Blink[55].Blink;
                if ( v15[13].Blink != v20 )
                {
                  v15[13].Blink = v20;
                  if ( (unsigned __int64)(((char *)v19 - (char *)v16) >> 3) > 1 )
                  {
                    while ( v16 != v15[11].Blink )
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
                                                        &v15[11],
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
                if ( v14 == *((_QWORD **)v6 + 9) )
LABEL_119:
                  v14 = 0LL;
                else
                  v14 = (_QWORD *)v14[11];
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
      if ( *(int *)v22 < 0 )
      {
        v23 = *(unsigned int *)(v22 + 4);
        v24 = (_BYTE *)(v22 + 8);
        for ( n = 0LL; (unsigned int)n < (unsigned int)v23; ++v24 )
        {
          if ( *v24 == 1 )
            break;
          n = (unsigned int)(n + 1);
        }
        v26 = (unsigned int)n >= (unsigned int)v23 ? 0LL : (_QWORD **)(v23 + 15 + v22 + 8 * n - (((_BYTE)v23 + 15) & 7));
        v27 = *v26;
        if ( v27 )
        {
          for ( ii = (_QWORD *)*v27; ii != v27; ii = (_QWORD *)*ii )
          {
            v7 = ii - 44;
            if ( (const struct CVisualTree *)ii[4] == v6 )
              goto LABEL_5;
          }
        }
      }
    }
    if ( v3 == *((_QWORD **)v6 + 9) )
      v3 = 0LL;
    else
      v3 = (_QWORD *)v3[11];
  }
  return v4;
}
