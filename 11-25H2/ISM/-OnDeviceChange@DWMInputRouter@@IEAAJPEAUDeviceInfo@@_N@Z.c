/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18003E804
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003E6F0 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003FA40 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180197D10 (-OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@AEBK@Z @ 0x18003E9B4 (--$find@X@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18003F704 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18003F880 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003F9A0 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char v6; // r15
  char *v7; // rbx
  char *v8; // rcx
  _QWORD *v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD **); // rsi
  __int64 (__fastcall *v11)(_QWORD, GUID *, _QWORD **); // rdi
  int v12; // eax
  __int64 (__fastcall **v13)(_QWORD, _QWORD); // rax
  int v14; // eax
  __int64 v15; // rcx
  int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v19; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (char *)this + 192;
  v8 = (char *)this + 192;
  if ( a3 )
  {
    if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::find<void>(
                      v8,
                      &v19,
                      a2) == *((_QWORD *)this + 25) )
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Try_emplace<unsigned long const &,>(
                               v7,
                               v17)
                + 24LL) = a2;
    else
      v6 = 1;
  }
  else if ( !std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Erase<unsigned long>(v8) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x45C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004005LL,
      v17[0]);
  }
  v9 = (_QWORD *)**((_QWORD **)this + 12);
  while ( v9 != *((_QWORD **)this + 12) )
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v9[7];
    v19 = 0LL;
    v11 = **v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v12 = v11(v10, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v19);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x46C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v12,
        v17[0]);
    if ( !v19 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x470,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x8000FFFFLL,
        v17[0]);
    v13 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v19;
    if ( a3 )
    {
      if ( v6 )
        v14 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v13)[4](v19, a2);
      else
        v14 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v13)[3](v19, a2);
    }
    else
    {
      v14 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v13)[5](v19, a2);
    }
    if ( v14 < 0 )
      v9 = *(_QWORD **)DWMInputRouter::RemoveTarget(this, v17);
    else
      v9 = (_QWORD *)*v9;
    v15 = (__int64)v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return 0LL;
}
