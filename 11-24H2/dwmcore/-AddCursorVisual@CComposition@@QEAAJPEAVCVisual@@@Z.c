/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC
 * Callers:
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18019DF3C (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18029079C (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 * Callees:
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x180096358 (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@UCursorVisualData@@@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAPEAUCursorVisualData@@QEAU2@$$QEAU2@@Z @ 0x18025977C (--$_Emplace_reallocate@UCursorVisualData@@@-$vector@UCursorVisualData@@V-$allocator@UCursorVisua.c)
 *     ??0CursorVisualData@@QEAA@$$QEAU0@@Z @ 0x180259BA0 (--0CursorVisualData@@QEAA@$$QEAU0@@Z.c)
 *     ??1CursorVisualData@@QEAA@XZ @ 0x18025A508 (--1CursorVisualData@@QEAA@XZ.c)
 *     ?EnsureVisualTree@CursorVisualData@@QEAAXXZ @ 0x18025A9C8 (-EnsureVisualTree@CursorVisualData@@QEAAXXZ.c)
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  CExcludeVisualReference *v2; // rbx
  CExcludeVisualReference **v3; // rdi
  struct CVisual *VisualNoRef; // rax
  __int64 v7; // rax
  CResource **v8; // rdi
  CResource **i; // rbx
  _BYTE v11[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference *)*((_QWORD *)this + 768);
  v3 = (CExcludeVisualReference **)((char *)this + 6136);
  while ( v2 != *v3 )
  {
    v2 = (CExcludeVisualReference *)((char *)v2 - 32);
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v2);
    if ( VisualNoRef )
    {
      if ( VisualNoRef == a2 )
        goto LABEL_8;
    }
    else
    {
      std::vector<CursorVisualData>::erase(v3, &v13, v2);
    }
  }
  v2 = 0LL;
LABEL_8:
  if ( !v2 )
  {
    CExcludeVisualReference::CExcludeVisualReference((CExcludeVisualReference *)v11, a2);
    v7 = *((_QWORD *)this + 771);
    v12 = 0LL;
    if ( *((_QWORD *)this + 770) != v7 )
      CursorVisualData::EnsureVisualTree((CursorVisualData *)v11);
    if ( v3[1] == v3[2] )
    {
      std::vector<CursorVisualData>::_Emplace_reallocate<CursorVisualData>(v3, v3[1], v11);
    }
    else
    {
      CursorVisualData::CursorVisualData(v3[1], v11);
      v3[1] = (CExcludeVisualReference *)((char *)v3[1] + 32);
    }
    v8 = (CResource **)*((_QWORD *)this + 771);
    for ( i = (CResource **)*((_QWORD *)this + 770); i != v8; ++i )
      CResource::RegisterNotifier(*i, a2);
    CursorVisualData::~CursorVisualData((CursorVisualData *)v11);
  }
  return 0LL;
}
