/*
 * XREFs of ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801A1E54
 * Callers:
 *     ?OnInserted@OcclusionRectListProxy@@MEAAJI@Z @ 0x18013A2E0 (-OnInserted@OcclusionRectListProxy@@MEAAJI@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017FFF4 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000C34C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18008205C (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800831EC (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x18013BE24 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z @ 0x18013E068 (-OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z.c)
 *     ??$emplace_back@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?A_TAEAUDisplayOcclusionRect@@@Z @ 0x1801A19B0 (--$emplace_back@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplay.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801A1C20 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisplayOcclusionContextProvider::OnOcclusionRectAdded(
        DisplayOcclusionContextProvider *this,
        const struct DockInputIdentity *a2,
        const struct DisplayOcclusionRect *a3,
        const char *a4)
{
  __int64 i; // rcx
  __int64 v6; // rcx
  char v7; // al
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v13; // rax
  SystemContextManager *v14[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+40h] [rbp-B8h]
  __int128 v17; // [rsp+50h] [rbp-A8h]
  __int128 v18; // [rsp+60h] [rbp-98h]
  __int128 v19; // [rsp+70h] [rbp-88h]
  __int128 v20; // [rsp+80h] [rbp-78h]
  __int128 v21; // [rsp+90h] [rbp-68h]
  __int128 v22; // [rsp+A0h] [rbp-58h]
  __int128 v23; // [rsp+B0h] [rbp-48h]
  __int128 v24; // [rsp+C0h] [rbp-38h]
  __int128 v25; // [rsp+D0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  for ( i = *((_QWORD *)this + 11); ; i = v6 + 176 )
  {
    if ( i == *((_QWORD *)this + 12) )
    {
      v7 = 0;
      goto LABEL_6;
    }
    if ( operator==(i, (__int64)a2) )
      break;
  }
  v7 = 1;
LABEL_6:
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      a4);
  v15 = *(_OWORD *)a3;
  v16 = *((_OWORD *)a3 + 1);
  v17 = *((_OWORD *)a3 + 2);
  v18 = *((_OWORD *)a3 + 3);
  v19 = *((_OWORD *)a3 + 4);
  v20 = *((_OWORD *)a3 + 5);
  v21 = *((_OWORD *)a3 + 6);
  v22 = *((_OWORD *)a3 + 7);
  v23 = *((_OWORD *)a3 + 8);
  v24 = *((_OWORD *)a3 + 9);
  v25 = *((_OWORD *)a3 + 10);
  v15 = *(_OWORD *)a2;
  *(_QWORD *)&v16 = *((_QWORD *)a2 + 2);
  std::vector<DisplayOcclusionRect>::emplace_back<DisplayOcclusionRect &>((__int64)this + 88, &v15);
  v8 = DisplayOcclusionContextProvider::Broadcast(this);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v9);
    if ( !*(_DWORD *)ISMScenarios::s_instance )
    {
      InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL)
                                               + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL);
      wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
        v14,
        v13);
      SystemContextManager::OnOcclusionRectAdded(v14[0], (const struct DisplayOcclusionRect *)&v15);
      wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)v14);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v8);
    return v10;
  }
}
