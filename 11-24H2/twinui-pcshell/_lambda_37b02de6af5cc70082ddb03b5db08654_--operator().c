/*
 * XREFs of _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x18013E618
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run @ 0x18013E5F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18013E9BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802CBD78 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t@UIW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_37b02de6af5cc70082ddb03b5db08654_::operator()(_QWORD *a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned int i; // esi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  int v29[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v32; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v33; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h] BYREF
  __int64 v35; // [rsp+98h] [rbp+20h] BYREF

  v2 = (_DWORD *)a1[1];
  v3 = *(_QWORD *)(*(_QWORD *)(*a1 + 168LL) + 8LL);
  v4 = *(_QWORD *)(*a1 + 168LL);
  while ( !*(_BYTE *)(v3 + 25) )
  {
    if ( *(_DWORD *)(v3 + 32) >= *v2 )
    {
      v4 = v3;
      v3 = *(_QWORD *)v3;
    }
    else
    {
      v3 = *(_QWORD *)(v3 + 16);
    }
  }
  if ( *(_BYTE *)(v4 + 25) || *v2 < *(_DWORD *)(v4 + 32) )
    v4 = *(_QWORD *)(*a1 + 168LL);
  v5 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)v29 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
  {
    v8 = *a1 + 168LL;
    v32 = v4;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      &v32,
      v6,
      v7,
      v8);
    v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Extract(
            v9,
            v4);
    std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>>>(
      v11,
      v10);
    try
    {
      v35 = 0LL;
      v12 = *(__int64 **)(*a1 + 192LL);
      v13 = *v12;
      v35 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 48))(v12, &v35);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB6,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v14,
          v29[0]);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      v16 = v15;
      v30 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      if ( !v16 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)0x8000FFFFLL,
          v29[0]);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, 0LL);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBB,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v17,
          v29[0]);
      v33 = 0LL;
      v18 = *(_QWORD *)v16;
      v33 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v18 + 48))(v16, &v33);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBE,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v19,
          v29[0]);
      LODWORD(v32) = 0;
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v33 + 56))(v33, &v32);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC1,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v20,
          v29[0]);
      for ( i = 0; i < (unsigned int)v32; ++i )
      {
        v34 = 0LL;
        v22 = *v33;
        v34 = 0LL;
        v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v22 + 48))(v33, i, &v34);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC6,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v23,
            v29[0]);
        v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 104LL))(v16, v34);
        if ( v24 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC7,
            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v24,
            v29[0]);
        if ( v34 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
              *(_QWORD *)(*a1 + 184LL),
              v16);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCA,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v25,
          v29[0]);
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 56LL))(v35);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCC,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v26,
          v29[0]);
      if ( v33 )
        (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    catch ( ... )
    {
      LODWORD(v32) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0xCE,
                       (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                       v27);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v29);
      return (unsigned int)v32;
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
