/*
 * XREFs of ?OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x18006D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D6A8 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CF1C8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Erase@I@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x1800F5F0C (--$_Erase@I@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@IU-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F5FB0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x1800F74E0 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1800F98F8 (-Cleanup@CustomCursorApplication2@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController2::OnStubDisconnected(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2)
{
  const char *v3; // r9
  __int64 v4; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  CustomCursorApplication2 *v8; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int PeerId; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6) + 16LL));
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4) )
      {
        if ( SystemCursorController2::IsApplicationPeer(this, PeerId) )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 96LL))(*((_QWORD *)this + 10));
          v7 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
                           v6,
                           v10,
                           &PeerId);
          std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v8, *v7 + 24LL);
          std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::_Erase<unsigned int>(
            v6,
            &PeerId);
          CustomCursorApplication2::Cleanup(v8);
          if ( v9 )
            std::_Ref_count_base::_Decref(v9);
        }
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x129,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller2.cpp",
      v3);
  }
  return 0LL;
}
