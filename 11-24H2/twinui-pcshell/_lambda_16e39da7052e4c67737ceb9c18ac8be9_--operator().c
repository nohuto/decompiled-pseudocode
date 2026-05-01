/*
 * XREFs of _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180183B98
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run @ 0x180183B70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___--.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x180184200 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180184398 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator()(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  int v5; // eax
  _QWORD *v6; // r12
  int v7; // eax
  __int64 v8; // r15
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 **); // rdi
  __int64 *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  unsigned int v19; // r14d
  __int64 v20; // rax
  int v21; // eax
  _DWORD *v22; // rdx
  int v23; // eax
  int v24; // eax
  WindowingEnvironmentConfig *v25; // rcx
  int v26; // edx
  unsigned int v27; // r8d
  int v28; // eax
  int v29; // eax
  const char *v30; // r9
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _DWORD *v34; // r8
  __int64 result; // rax
  __int64 *v36; // rbx
  __int64 (__fastcall *v37)(__int64 *, HSTRING, _QWORD, _QWORD); // rsi
  unsigned __int64 v38; // rdi
  unsigned int v39; // eax
  UINT32 v40; // edx
  HRESULT v41; // eax
  int v42; // edx
  unsigned int v43; // r8d
  int v44; // eax
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, _QWORD, __int64 **); // r14
  __int64 *v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rax
  int v53; // [rsp+20h] [rbp-278h]
  unsigned int v54; // [rsp+30h] [rbp-268h] BYREF
  unsigned int v55; // [rsp+34h] [rbp-264h] BYREF
  __int64 *v56; // [rsp+38h] [rbp-260h] BYREF
  __int64 v57; // [rsp+40h] [rbp-258h] BYREF
  __int128 v58; // [rsp+50h] [rbp-248h] BYREF
  HMONITOR v59; // [rsp+60h] [rbp-238h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-230h] BYREF
  HSTRING string; // [rsp+80h] [rbp-218h] BYREF
  DISPLAYCONFIG_TARGET_DEVICE_NAME v62; // [rsp+90h] [rbp-208h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  try
  {
    v56 = 0LL;
    v57 = 0LL;
    v2 = *a1;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 80) + 32LL))(*(_QWORD *)(*a1 + 80));
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL);
    v57 = 0LL;
    v5 = v4(v3, &v57);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBB,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5,
        v53);
    v54 = 0;
    v6 = (_QWORD *)a1[1];
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v6 + 24LL))(*v6, &v54);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBE,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v7,
        v53);
    v8 = v2 + 104;
    v9 = *(__int64 **)(v2 + 104);
    v10 = (__int64 *)v9[1];
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[12] = 0;
    v11 = v9;
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( *((_DWORD *)v10 + 7) < v54 )
      {
        v10 = (__int64 *)v10[2];
      }
      else
      {
        v11 = v10;
        v10 = (__int64 *)*v10;
      }
    }
    if ( v11 == v9 || *((_BYTE *)v11 + 25) || v54 < *((_DWORD *)v11 + 7) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 80) + 40LL))(*(_QWORD *)(v2 + 80));
      v13 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v12 + 48LL);
      v14 = v56;
      v56 = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
      v15 = v13(v12, &v56);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC3,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v15,
          v53);
      v55 = 0;
      v16 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v56 + 64))(v56, &v55);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC6,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v16,
          v53);
      hstringHeader.Reserved.Reserved1 = (PVOID)__PAIR64__(v54, v55);
      *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)a1[2];
      LOBYTE(string) = *(_DWORD *)a1[3] != 0;
      v17 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
      v18 = *(_OWORD *)&_mm_unpackhi_pd(
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8],
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8]);
      v19 = (unsigned int)string;
    }
    else
    {
      v17 = *((_OWORD *)v11 + 2);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v17;
      v18 = v11[6];
      v55 = *((_DWORD *)v11 + 14);
      v45 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 80) + 40LL))(*(_QWORD *)(v2 + 80));
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v45 + 56LL);
      v47 = v56;
      v56 = 0LL;
      if ( v47 )
        (*(void (__fastcall **)(__int64 *))(*v47 + 16))(v47);
      v48 = v46(v45, LODWORD(hstringHeader.Reserved.Reserved1), &v56);
      if ( v48 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCD,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v48,
          v53);
      *(_QWORD *)&v58 = v11;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
        (__int64 *)&v58,
        v49,
        v50,
        v51);
      v52 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
                      v2 + 104,
                      v11);
      std::_Deallocate<16,0>(v52, (const struct std::nothrow_t *)0x40);
      v19 = v55;
    }
    v20 = *v56;
    v58 = *(_OWORD *)a1[4];
    v21 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v20 + 104))(v56, &v58);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v21,
        v53);
    v22 = (_DWORD *)a1[3];
    LOBYTE(v22) = *v22 != 0;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v56 + 112))(v56, v22);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD2,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v23,
        v53);
    v59 = 0LL;
    v24 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(*(_QWORD *)*v6 + 40LL))(*v6, &v59);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD5,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v24,
        v53);
    memset_0(&v62, 0, sizeof(v62));
    if ( WindowingEnvironmentConfig::GetTargetDeviceName(v25, v59, &v62) >= 0 )
    {
      v36 = v56;
      v37 = *(__int64 (__fastcall **)(__int64 *, HSTRING, _QWORD, _QWORD))(*v56 + 168);
      v38 = -1LL;
      do
        ++v38;
      while ( v62.monitorDevicePath[v38] );
      if ( v38 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v26, v27);
        __debugbreak();
      }
      v39 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v38, v26, v27);
      v40 = v39 - 1;
      if ( (unsigned int)v38 < v39 )
        v40 = v38;
      v41 = WindowsCreateStringReference(v62.monitorDevicePath, v40, &hstringHeader, &string);
      if ( v41 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41, v42, v43);
        __debugbreak();
      }
      v44 = v37(v36, string, 0LL, 0LL);
      if ( v44 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xDB,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v44,
          v53);
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v2 + 64) + 96LL))(*(_QWORD *)(v2 + 64), v56);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDE,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v28,
        v53);
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 56LL))(v57);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v29,
        v53);
    v31 = *(_QWORD **)v8;
    v32 = *(_QWORD **)(*(_QWORD *)v8 + 8LL);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = (unsigned __int64)v32;
    v33 = v31;
    while ( !*((_BYTE *)v32 + 25) )
    {
      hstringHeader.Reserved.Reserved1 = v32;
      if ( *((_DWORD *)v32 + 7) < v54 )
      {
        *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 0;
        v32 = (_QWORD *)v32[2];
      }
      else
      {
        *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 1;
        v33 = v32;
        v32 = (_QWORD *)*v32;
      }
    }
    if ( *((_BYTE *)v33 + 25) || v54 < *((_DWORD *)v33 + 7) )
    {
      if ( *(_QWORD *)(v2 + 112) == 0x3FFFFFFFFFFFFFFLL )
        std::_Throw_tree_length_error();
      v58 = (unsigned __int64)(v2 + 104);
      v34 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
      v34[7] = v54;
      *((_OWORD *)v34 + 2) = v17;
      *((_QWORD *)v34 + 6) = v18;
      v34[14] = v19;
      *(_QWORD *)v34 = v31;
      *((_QWORD *)v34 + 1) = v31;
      *((_QWORD *)v34 + 2) = v31;
      *((_WORD *)v34 + 12) = 0;
      v58 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
      std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
        (_QWORD *)(v2 + 104),
        (__int64)&v58,
        (__int64)v34);
    }
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64 *))(*v56 + 16))(v56);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE4,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v30);
  }
  return result;
}
