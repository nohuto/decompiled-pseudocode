/*
 * XREFs of ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F66B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D6A8 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1B84 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CF1C8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F5E30 (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Prox.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F5FB0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x1800F74E0 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemCursorController2::AttachApplication2(
        std::_Ref_count_base **this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoCustomCursorControllerClient2Proxy *a3)
{
  __int64 v4; // rdx
  std::_Ref_count_base *v5; // rax
  std::_Ref_count_base *v6; // rdi
  float *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-40h]
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v18; // [rsp+48h] [rbp-20h]
  _BYTE v19[24]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int PeerId; // [rsp+70h] [rbp+8h] BYREF
  void (__fastcall ***v22)(_QWORD); // [rsp+80h] [rbp+18h] BYREF
  void *v23; // [rsp+88h] [rbp+20h]

  v22 = (void (__fastcall ***)(_QWORD))a3;
  try
  {
    if ( this[10] )
    {
      PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6) + 16LL));
      if ( SystemCursorController2::IsApplicationPeer((SystemCursorController2 *)this, PeerId) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          72LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x8000FFFFLL,
          v14);
      v4 = ((unsigned __int64)this[10] - 8) & -(__int64)(this[10] != 0LL);
      v5 = this[11];
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      v14 = v4;
      v15 = this[11];
      v23 = operator new(0x70uLL);
      v6 = (std::_Ref_count_base *)std::_Ref_count_obj2<CustomCursorApplication2>::_Ref_count_obj2<CustomCursorApplication2>(
                                     (__int64)v23,
                                     &v14,
                                     (int *)&PeerId,
                                     &v22);
      v16[0] = (char *)v6 + 16;
      v16[1] = v6;
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      v7 = (float *)(*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this[10] + 96LL))(this[10]);
      std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
        v7,
        (__int64)v19,
        &PeerId);
      v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v17, v16);
      v10 = *v8;
      *v8 = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 24) = v10;
      v11 = v8[1];
      v8[1] = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 32) = v11;
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8);
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          85LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v12,
          v14);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      (const char *)v9);
  }
  return 0LL;
}
