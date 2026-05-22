/*
 * XREFs of ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E070
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000B724 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18000CA40 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18000CAD0 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ??0?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@QEAA@XZ @ 0x18000CB4C (--0-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@I@2@@std@@QEAA@XZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000CDE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F1DC (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180070FC0 (-OnSystemContextNotification@GestureServices@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180093A10 (--4-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvi.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@1@@Z @ 0x180095904 (--0-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$hash@_K.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801086D0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=14
GestureServices *__fastcall GestureServices::GestureServices(
        GestureServices *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  _QWORD *v3; // rax
  struct KernelContextProvider *Instance; // rax
  struct InputConfigContextProvider *v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v9[3]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v12; // [rsp+80h] [rbp+18h] BYREF

  *(_QWORD *)this = &BamoGestureServicesPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoGestureServicesPrincipal::`vftable'{for `IGestureServicesPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((GestureServices *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoGestureServicesPrincipalImpl::`vftable';
  *(_QWORD *)this = &GestureServices::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &GestureServices::`vftable'{for `IGestureServicesPrincipal'};
  *((_QWORD *)this + 7) = &GestureServices::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  std::unordered_set<unsigned int>::unordered_set<unsigned int>((__int64)this + 136);
  v12 = (char *)this + 200;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(40LL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 26) = v3;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 7LL;
  *((_QWORD *)this + 32) = 8LL;
  *((_DWORD *)this + 50) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 224,
    0x10uLL,
    *((_QWORD *)this + 26));
  v12 = (char *)this + 264;
  LODWORD(v12) = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>(
    (char *)this + 264,
    &v12);
  Instance = KernelContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<InputConfigContextProvider>::operator=((char *)this + 96, Instance);
  v5 = InputConfigContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<InputConfigContextProvider>::operator=((char *)this + 104, v5);
  v6 = SystemContextProvider::RegisterSystemContextObserver(
         *((SystemContextProvider **)this + 13),
         (GestureServices *)((char *)this + 56));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)(unsigned int)v6,
      v9[0]);
  v10 = 0;
  if ( (int)InputConfigContextProvider::GetCurrentContext(*((_QWORD *)this + 13), (__int64)v9) >= 0 )
  {
    v7 = GestureServices::OnSystemContextNotification((char *)this + 56, v9);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\"
                      "gestureservices.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
  }
  if ( v10 != -1LL && v10 && v10 != 1LL )
  {
    if ( v10 == 2LL )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v9);
    }
    else if ( v10 == 3LL )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v9);
    }
  }
  return this;
}
