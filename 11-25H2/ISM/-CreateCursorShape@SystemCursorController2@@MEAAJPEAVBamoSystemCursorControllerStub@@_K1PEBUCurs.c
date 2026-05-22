/*
 * XREFs of ?CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F4E80
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180023450 (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D918 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C39B8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F42E0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x1800F5810 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x1800F6D48 (--$count@X@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController2::CreateCursorShape(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        __int64 a4,
        const struct CursorBitmapDataHeader *a5,
        unsigned int a6)
{
  int ProcessId; // eax
  bool v11; // r8
  char v12; // dl
  float *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  const char *v17; // r9
  int v19; // [rsp+20h] [rbp-88h]
  unsigned int v20; // [rsp+20h] [rbp-88h]
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-60h] BYREF
  std::_Ref_count_base *v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  std::_Ref_count_base *v25; // [rsp+60h] [rbp-48h]
  _BYTE v26[16]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v27[48]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int PeerId; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+20h]

  v30 = a4;
  if ( *((_QWORD *)this + 10) )
  {
    try
    {
      PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6) + 16LL));
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6)
                                                                                                + 16LL));
      if ( !HIBYTE(a4) || (v11 = 0, v12 = 1, HIBYTE(a4) == 1) )
      {
        v12 = 0;
        v11 = HIBYTE(a4) == 0;
      }
      if ( v12 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          174LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070057LL,
          v19);
      if ( v11 )
      {
        if ( PeerId != *((_DWORD *)this + 18) )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            179LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller2.cpp",
            (const char *)0x80070005LL,
            v19);
      }
      else
      {
        if ( *(_DWORD *)((char *)&v30 + 2) != ProcessId )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            185LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller2.cpp",
            (const char *)0x80070005LL,
            v19);
        if ( !SystemCursorController2::IsApplicationPeer(this, PeerId) )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            188LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller2.cpp",
            (const char *)0x8000FFFFLL,
            v19);
        v13 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 96LL))(*((_QWORD *)this + 10));
        v14 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
                v13,
                (__int64)v26,
                &PeerId);
        std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
          &v24,
          (_QWORD *)(*(_QWORD *)v14 + 24LL));
        v21 = a4;
        v15 = v24;
        if ( !std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count<void>(
                v24 + 16,
                &v21) )
          std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::emplace<unsigned __int64 const &>(
            v15 + 16,
            (__int64)v27,
            &v21);
        (*(void (__fastcall **)(_QWORD, __int64 **))(**((_QWORD **)this + 10) + 104LL))(*((_QWORD *)this + 10), &v22);
        a3 = *v22;
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
        if ( v25 )
          std::_Ref_count_base::_Decref(v25);
      }
      v20 = a6;
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, const struct CursorBitmapDataHeader *))(**((_QWORD **)this + 10) + 40LL))(
              *((_QWORD *)this + 10),
              a3,
              a4,
              a5);
      if ( v16 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          207LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v16,
          v20);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xD1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller2.cpp",
        v17);
    }
  }
  return 0LL;
}
