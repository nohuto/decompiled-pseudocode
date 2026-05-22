/*
 * XREFs of ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F9AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180090A54 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CF1C8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F5FB0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F8778 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$make_shared@VCursorBitmapData@SystemCursors@@$$V@std@@YA?AV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@XZ @ 0x1800F8A50 (--$make_shared@VCursorBitmapData@SystemCursors@@$$V@std@@YA-AV-$shared_ptr@VCursorBitmapData@Sys.c)
 *     ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x1800F8B54 (--$make_shared@VSystemCursorShape2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA-AV-.c)
 *     ??$make_shared@VSystemCursorShapeBitmap2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@3@@std@@YA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@@Z @ 0x1800F8BF8 (--$make_shared@VSystemCursorShapeBitmap2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEAV-$share.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F9208 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800F94AC (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x180160034 (-InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SystemCursorService2::CreateCursorShape(
        SystemCursorService2 *this,
        __int64 a2,
        __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        const unsigned __int8 *a6,
        unsigned int a7)
{
  unsigned int v9; // ebx
  char *v11; // r14
  _QWORD *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // r15
  int v15; // eax
  __int64 *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  std::_Ref_count_base *v19; // rcx
  _QWORD *v20; // rax
  float *v21; // r8
  SystemCursors::CursorBitmapData *v22; // [rsp+20h] [rbp-81h] BYREF
  std::_Ref_count_base *v23; // [rsp+28h] [rbp-79h]
  __int64 v24; // [rsp+30h] [rbp-71h] BYREF
  std::_Ref_count_base *v25; // [rsp+38h] [rbp-69h]
  _QWORD v26[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v27; // [rsp+50h] [rbp-51h] BYREF
  std::_Ref_count_base *v28; // [rsp+58h] [rbp-49h]
  __int64 v29; // [rsp+60h] [rbp-41h] BYREF
  std::_Ref_count_base *v30; // [rsp+68h] [rbp-39h]
  __int64 v31; // [rsp+70h] [rbp-31h] BYREF
  std::_Ref_count_base *v32; // [rsp+78h] [rbp-29h]
  __int64 v33; // [rsp+80h] [rbp-21h] BYREF
  std::_Ref_count_base *v34; // [rsp+88h] [rbp-19h]
  _BYTE v35[16]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v36[64]; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+47h]
  __int64 v38; // [rsp+F8h] [rbp+57h] BYREF
  __int64 v39; // [rsp+100h] [rbp+5Fh] BYREF

  v39 = a3;
  v38 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(SystemCursorService2 *))(*(_QWORD *)this + 112LL))(this) )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
      (float *)this + 12,
      (__int64)v35,
      &v38);
    v11 = (char *)this + 24;
    v12 = (_QWORD *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)this + 24, &v31);
    std::make_shared<SystemCursorShape2,std::shared_ptr<SystemCursorService2>,unsigned __int64 &>(&v24, v12, &v39);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
    v13 = 0;
    v14 = v24;
    while ( v13 < a5 )
    {
      std::make_shared<SystemCursors::CursorBitmapData,>(&v22);
      v15 = SystemCursors::CursorBitmapData::InitializeFromBamoBlob(
              v22,
              (const struct CursorBitmapDataHeader *)((char *)a4 + 29 * v13),
              a6,
              a7);
      v9 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x82,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)(unsigned int)v15);
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
        if ( v25 )
          std::_Ref_count_base::_Decref(v25);
        return v9;
      }
      v16 = (__int64 *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)v11, &v33);
      std::make_shared<SystemCursorShapeBitmap2,std::shared_ptr<SystemCursorService2>,std::shared_ptr<SystemCursors::CursorBitmapData> &>(
        &v29,
        v16,
        &v22);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      v17 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v26, &v29);
      std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v27, (_QWORD *)(*v17 + 16LL));
      v18 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
              (float *)(v14 + 16),
              (__int64)v36,
              (_DWORD *)(v27 + 4));
      std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)(*(_QWORD *)v18 + 24LL), v17);
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      v19 = (std::_Ref_count_base *)v17[1];
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      ++v13;
    }
    v20 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v26, &v24);
    SystemCursor2::AddShape(v21, v20);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    return 0LL;
  }
  else
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x80070057LL);
    return v9;
  }
}
