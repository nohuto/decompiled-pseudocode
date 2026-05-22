/*
 * XREFs of ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800FB750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800263B0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$CopyTo@UIMPCTarget@@@?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEBAJPEAPEAUIMPCTarget@@@Z @ 0x18009A9FC (--$CopyTo@UIMPCTarget@@@-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEBAJPEAPEAUIMPCTarget@@@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BD4BC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BE7C8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800FB2BC (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget **a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  const char *v9; // r9
  int v10; // eax
  bool v11; // r13
  bool v12; // r14
  __int64 v13; // rcx
  char v14; // r12
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax
  HWND v25; // rcx
  struct MPCHolographicInputManager *Instance; // r14
  unsigned int v27; // ebp
  unsigned __int64 WindowIdFromViewId; // rax
  struct ViewHierarchyWithWindowManager *v29; // rax
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  bool v32; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LPARAM lParam; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x143,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
  if ( !std::_Atomic_storage<bool,1>::load((__int64)this + 96) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x146,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      v9);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 40LL))(
          *((_QWORD *)this + 6),
          v8 + 80,
          v8 + 240);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v10,
      v30);
  v11 = 1;
  v12 = !*((_BYTE *)a2 + 241)
     && (*(_DWORD *)a2 & 0x2600) != 0
     && ((unsigned int)(*((_DWORD *)a2 + 16) - 1) <= 1 || *((_DWORD *)a2 + 17) == 2);
  v32 = v12;
  v13 = *((_QWORD *)this + 3);
  v14 = 0;
  LOBYTE(lParam) = 0;
  if ( v13 )
    LOBYTE(lParam) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13) != 0;
  if ( IsEdition(8778LL) )
  {
    if ( *((_BYTE *)a2 + 312) )
      goto LABEL_36;
    if ( v12 && *((_BYTE *)a2 + 638) && !(_BYTE)lParam && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
      v14 = 1;
  }
  if ( !*((_BYTE *)a2 + 312) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
    {
      v15 = Microsoft::WRL::ComPtr<IMPCFocusTarget>::CopyTo<IMPCTarget>((_QWORD *)this + 5, (__int64)a4);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x16D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v15,
          v30);
    }
    else if ( *((_QWORD *)this + 2) )
    {
      v16 = Microsoft::WRL::ComPtr<IMPCFocusTarget>::CopyTo<IMPCTarget>((_QWORD *)this + 2, (__int64)a4);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x171,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v16,
          v30);
    }
    else if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)a2 + 638) || !*((_QWORD *)this + 5) )
      {
        v18 = Microsoft::WRL::ComPtr<IMPCFocusTarget>::CopyTo<IMPCTarget>((_QWORD *)this + 3, (__int64)a4);
        if ( v18 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x177,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v18,
            v30);
      }
      else
      {
        v17 = Microsoft::WRL::ComPtr<IMPCFocusTarget>::CopyTo<IMPCTarget>((_QWORD *)this + 5, (__int64)a4);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x17D,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v17,
            v30);
      }
    }
    goto LABEL_44;
  }
LABEL_36:
  if ( *((_BYTE *)a2 + 240) )
  {
    v19 = Microsoft::WRL::ComPtr<IMPCFocusTarget>::CopyTo<IMPCTarget>((_QWORD *)this + 5, (__int64)a4);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x187,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v19,
        v30);
  }
  else
  {
    v20 = *((unsigned int *)a2 + 154);
    v21 = (__int64 *)((char *)a2 + 280);
    if ( !(_DWORD)v20 || v20 == *v21 )
    {
      v22 = *v21;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v22);
      *((_DWORD *)a2 + 154) = ViewIdFromWindowId;
      if ( !ViewIdFromWindowId )
      {
        v25 = (HWND)*(int *)v21;
        LODWORD(lParam) = 0;
        EnumChildWindows(
          v25,
          (WNDENUMPROC)lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_,
          (LPARAM)&lParam);
        *((_DWORD *)a2 + 154) = lParam;
      }
    }
    MPCInputRouter::GetMPCTarget((MPCInputRouter *)((char *)this - 632), *v21, *((_DWORD *)a2 + 72), a4);
  }
LABEL_44:
  if ( v32 && (v14 || *((_BYTE *)a2 + 312)) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    if ( v14 || !*((_BYTE *)a2 + 240) || *((_DWORD *)a2 + 68) )
      v11 = 0;
    v27 = *((_DWORD *)a2 + 1);
    if ( v14 )
    {
      WindowIdFromViewId = *((_QWORD *)a2 + 80);
    }
    else
    {
      v4 = *((_DWORD *)a2 + 154);
      v29 = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v29);
    }
    MPCHolographicInputManager::RequestForegroundChange(
      (__int64)Instance,
      WindowIdFromViewId,
      v4,
      (const char *)v27,
      v30,
      v31,
      v11);
  }
}
