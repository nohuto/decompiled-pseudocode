/*
 * XREFs of ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E2248
 * Callers:
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18019D550 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800903BC (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x1800B97F0 (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ??$emplace@AEAKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@1@@Z @ 0x1800E1704 (--$emplace@AEAKV-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValidator@@@std@@@.c)
 *     ??$emplace@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAI$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800E1898 (--$emplace@IV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@@-.c)
 *     ??1?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@QEAA@XZ @ 0x1800E1CEC (--1-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValidator@@@std@@@std@@QEAA@XZ.c)
 *     ??0InputInfoValidator@@QEAA@XZ @ 0x18019C4DC (--0InputInfoValidator@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InjectionRawInputProvider::OnAttachDevice(
        InjectionRawInputProvider *this,
        struct InputInjectionClientProxy *a2)
{
  int v5; // eax
  _DWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  InputInfoValidator *v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  InputInfoValidator *v12; // [rsp+60h] [rbp+30h] BYREF
  _DWORD *v13; // [rsp+68h] [rbp+38h] BYREF
  InputInfoValidator *v14; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v12) = *((_DWORD *)a2 + 10);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 40,
    (__int64)&v13,
    &v12);
  if ( v13 == *((_DWORD **)this + 6) )
  {
    std::make_unique<LegacyDeviceInfo,,0>(&v13);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
    v6 = v13;
    *v13 = v5;
    v6[1] = 8;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, InjectionRawInputProvider *))(**((_QWORD **)this + 3) + 40LL))(
           *((_QWORD *)this + 3),
           v6,
           this);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (InputInfoValidator *)RefCountedObject::operator new(0x50uLL);
      v12 = v9;
      if ( v9 )
        v9 = InputInfoValidator::InputInfoValidator(v9);
      v14 = v9;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>::emplace<unsigned long &,std::unique_ptr<InputInfoValidator>>(
        (float *)this + 26,
        (__int64)v10,
        v6,
        (__int64 *)&v14);
      LODWORD(v12) = *((_DWORD *)a2 + 10);
      std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::emplace<unsigned int,std::unique_ptr<LegacyDeviceInfo>>(
        (float *)this + 10,
        (__int64)v10,
        &v12,
        (__int64 *)&v13);
      std::unique_ptr<InputInfoValidator>::~unique_ptr<InputInfoValidator>((__int64 *)&v14);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
        (const char *)(unsigned int)v7);
    }
    std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>((void **)&v13);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
