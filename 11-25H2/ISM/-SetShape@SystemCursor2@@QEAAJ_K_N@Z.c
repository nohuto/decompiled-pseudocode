/*
 * XREFs of ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800F9688
 * Callers:
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800F77DC (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800F8A20 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x1800F8E4C (-RemoveShape@SystemCursor2@@QEAAX_K@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800F9628 (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1800F9918 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 * Callees:
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800584E8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x1800F6398 (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F6AA8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F7538 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z @ 0x1800F7B20 (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800F84C4 (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z @ 0x1800F91AC (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z.c)
 *     ?SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z @ 0x1800FA4E4 (-SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursor2::SetShape(SystemCursor2 *this, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  float v9; // xmm6_4
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  std::_Ref_count_base *v17; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a2;
  InputTraceLogging::Cursor::SetCursorImage(a2);
  v5 = v19;
  *((_QWORD *)this + 6) = v19;
  if ( !SystemCursor2::ShapeExists(this, v5) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  std::weak_ptr<SystemCursorService2>::lock((__int64)this + 56, &v14);
  if ( !v14 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x8000FFFFLL);
LABEL_8:
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    return 2147549183LL;
  }
  v7 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 22,
         (__int64)&v16,
         &v19);
  SystemCursorShape2::FindClosestShapeBitmap(*(_QWORD *)(*(_QWORD *)v7 + 24LL), &v12, *((_DWORD *)this + 8));
  if ( !v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x8000FFFFLL);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    goto LABEL_8;
  }
  if ( *((_QWORD *)this + 9) != v12 || a3 )
  {
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v16, (_QWORD *)(v12 + 16));
    v8 = v16;
    v9 = (float)*(int *)(v16 + 4) / *((float *)this + 48);
    v10 = SystemCursors::HardwareCursorVisual::SetShape(
            *((SystemCursors::HardwareCursorVisual **)this + 21),
            *(void **)(v16 + 24),
            *(_DWORD *)(v16 + 8),
            *(_DWORD *)(v16 + 12),
            *(_DWORD *)(v16 + 16),
            *(_DWORD *)(v16 + 20),
            *(_BYTE *)v16,
            v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v10);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      return v11;
    }
    InputTraceLogging::Cursor::ChangeDwmCursorShape(
      1,
      0,
      *(_DWORD *)(v8 + 8),
      *(_DWORD *)(v8 + 12),
      *(_DWORD *)(v8 + 16),
      *(_DWORD *)(v8 + 20),
      *(_BYTE *)v8,
      (int)(float)(v9 * 100.0));
    std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)this + 9, &v12);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  *((_QWORD *)this + 5) = v19;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return 0LL;
}
