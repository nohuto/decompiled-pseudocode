/*
 * XREFs of ?RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDockClientProxy@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x180181130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800BC438 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x180180F20 (-RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DeviceDockServer::RegisterDeviceDockClient(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  const char *v7; // r9
  _QWORD *i; // rax
  char v9; // al
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 j; // [rsp+40h] [rbp+20h] BYREF

  InputTraceLogging::DeviceDock::RegisterClient(a3, a4);
  for ( i = *(_QWORD **)(a1 + 56); ; ++i )
  {
    if ( i == *(_QWORD **)(a1 + 64) )
    {
      v9 = 0;
      goto LABEL_6;
    }
    if ( *i == a3 )
      break;
  }
  v9 = 1;
LABEL_6:
  if ( v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v7);
  j = a3;
  if ( a3 )
    (**(void (__fastcall ***)(__int64))a3)(a3);
  v10 = *(__int64 **)(a1 + 64);
  if ( v10 == *(__int64 **)(a1 + 72) )
  {
    std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
      a1 + 56,
      v10,
      &j);
  }
  else
  {
    j = 0LL;
    *v10 = a3;
    *(_QWORD *)(a1 + 64) += 8LL;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&j);
  if ( a4 == 1 && !*(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = a3;
    if ( a3 )
      (**(void (__fastcall ***)(__int64))a3)(a3);
  }
  v11 = **(_QWORD **)(a1 + 88);
  j = v11;
  v12 = a3 + 8;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v12 = a3 + 8;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 8) + 48LL))(
            a3 + 8,
            *(unsigned int *)(v11 + 32),
            *(_QWORD *)(v11 + 40));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &j,
      v14,
      v15,
      v16);
    v11 = j;
  }
  v17 = **(_QWORD **)(a1 + 104);
  j = v17;
  while ( !*(_BYTE *)(v17 + 25) )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
            v12,
            *(unsigned int *)(v17 + 32),
            *(_QWORD *)(v17 + 40));
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v18);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &j,
      v19,
      v20,
      v21);
    v12 = a3 + 8;
    v17 = j;
  }
  v22 = **(_QWORD **)(a1 + 120);
  for ( j = v22; ; v22 = j )
  {
    v23 = *(_QWORD *)v12;
    if ( *(_BYTE *)(v22 + 25) )
      break;
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v23 + 40))(v12, *(unsigned int *)(v22 + 32), v22 + 56);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v24);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &j,
      v25,
      v26,
      v27);
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(v23 + 64))(v12);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      (const char *)(unsigned int)v28);
  return 0LL;
}
