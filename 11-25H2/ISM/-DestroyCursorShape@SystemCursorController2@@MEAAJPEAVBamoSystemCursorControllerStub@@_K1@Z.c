/*
 * XREFs of ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800F51D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase@_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1800230A8 (--$_Erase@_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058550 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D918 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C39B8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F42E0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x1800F5810 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x1800F6398 (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x1800F6D48 (--$count@X@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@.c)
 *     ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x1800F8E4C (-RemoveShape@SystemCursor2@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController2::DestroyCursorShape(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  int ProcessId; // eax
  bool v9; // r8
  char v10; // dl
  __int64 *v11; // rax
  float *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  const char *v15; // r9
  __int64 result; // rax
  int v17[2]; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-50h]
  SystemCursor2 *v19[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v21; // [rsp+48h] [rbp-30h]
  _BYTE v22[40]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int PeerId; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      (const char *)0x8000FFFFLL,
      v17[0]);
  try
  {
    PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6) + 16LL));
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6)
                                                                                              + 16LL));
    if ( !HIBYTE(a4) || (v9 = 0, v10 = 1, HIBYTE(a4) == 1) )
    {
      v10 = 0;
      v9 = HIBYTE(a4) == 0;
    }
    if ( v10 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        232LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)0x80070057LL,
        v17[0]);
    *(_OWORD *)v19 = 0LL;
    if ( v9 )
    {
      if ( PeerId != *((_DWORD *)this + 18) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          242LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070005LL,
          v17[0]);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 112LL))(
              *((_QWORD *)this + 10),
              a3) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          244LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070057LL,
          v17[0]);
      v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**((_QWORD **)this + 10) + 120LL))(
                         *((_QWORD *)this + 10),
                         &v20,
                         a3);
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
        v19,
        v11);
    }
    else
    {
      if ( *(_DWORD *)((char *)&v25 + 2) != ProcessId )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          252LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x80070005LL,
          v17[0]);
      if ( !SystemCursorController2::IsApplicationPeer(this, PeerId) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          255LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x8000FFFFLL,
          v17[0]);
      v12 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 96LL))(*((_QWORD *)this + 10));
      v13 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
              v12,
              (__int64)v22,
              &PeerId);
      std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
        &v20,
        (_QWORD *)(*(_QWORD *)v13 + 24LL));
      *(_QWORD *)v17 = a4;
      if ( std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count<void>(
             v20 + 16,
             v17) )
      {
        std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Erase<unsigned __int64>();
      }
      v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 10) + 104LL))(
                         *((_QWORD *)this + 10),
                         v17);
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
        v19,
        v14);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( !SystemCursor2::ShapeExists(v19[0], a4) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        264LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)0x80070057LL,
        v17[0]);
    SystemCursor2::RemoveShape(v19[0], a4);
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x10F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v15);
    return 0LL;
  }
  return result;
}
