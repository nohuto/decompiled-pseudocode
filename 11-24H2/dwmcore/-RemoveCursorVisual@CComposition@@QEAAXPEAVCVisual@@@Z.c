/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18019E044
 * Callers:
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18019DF3C (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x1802636C0 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  CExcludeVisualReference *v2; // rbx
  CExcludeVisualReference **v3; // r15
  struct CVisual *VisualNoRef; // rax
  struct CVisual *v7; // rdi
  CResource **v8; // rbp
  CResource **i; // rdi
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference *)*((_QWORD *)this + 768);
  v3 = (CExcludeVisualReference **)((char *)this + 6136);
  while ( v2 != *v3 )
  {
    v2 = (CExcludeVisualReference *)((char *)v2 - 32);
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v2);
    v7 = VisualNoRef;
    if ( VisualNoRef == a2 || !VisualNoRef )
    {
      std::vector<CursorVisualData>::erase(v3, &v10, v2);
      if ( v7 == a2 )
      {
        v8 = (CResource **)*((_QWORD *)this + 771);
        for ( i = (CResource **)*((_QWORD *)this + 770); i != v8; ++i )
          CResource::UnRegisterNotifierInternal(*i, a2);
      }
    }
  }
}
