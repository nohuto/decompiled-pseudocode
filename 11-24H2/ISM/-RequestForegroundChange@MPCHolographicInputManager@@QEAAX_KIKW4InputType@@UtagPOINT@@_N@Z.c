/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BB2DC
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA3D0 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800FD420 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800ACFC4 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800AD06C (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x1800ADFA8 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800B9F0C (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800B9F40 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800BAD28 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        bool a7)
{
  unsigned int v7; // r12d
  __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  char IsEnabled; // al
  bool v18; // si
  ISMTracing *v19; // rcx
  unsigned int Ancestor; // eax
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v22)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v23; // rbx
  void (__fastcall *v24)(__int64, unsigned __int64, _QWORD, _QWORD, int); // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ThreadIdFromViewId; // edi
  struct ViewHierarchyWithWindowManager *v27; // rax
  unsigned int ProcessIdFromViewId; // eax
  ForegroundManager *ForegroundManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF

  v7 = (unsigned int)a4;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x53B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v11 = MPCHolographicInputManager::Get3DFocusedWindowId((MPCHolographicInputManager *)a1);
  v12 = 0;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v13, v14, v15);
  if ( FocusedTarget )
    v12 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 80LL))(FocusedTarget);
  IsEnabled = ISMTracing::IsEnabled();
  v18 = a7;
  if ( IsEnabled )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v19, a2, v11, a3, v7, v18);
  }
  LOBYTE(Ancestor) = IsEdition(8778LL);
  if ( (_BYTE)Ancestor )
  {
    if ( a2 )
    {
      Ancestor = (unsigned int)GetAncestor((HWND)(int)v11, 2u);
      if ( v11 != a2 && (!a3 || v12 != a3) && Ancestor != a2 )
      {
        SetForegroundWindow((HWND)(int)a2);
        v32 = 0LL;
        if ( v18 )
        {
          if ( a3 )
          {
            v21 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 3280);
            v22 = **v21;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
            if ( v22(v21, &GUID_9ea1391d_b072_488c_9579_08639d61cf31, &v32) >= 0 )
            {
              v23 = v32;
              v24 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, int))(*(_QWORD *)v32 + 24LL);
              ViewHierarchy = ISMStatics::GetViewHierarchy();
              ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, a3);
              v27 = ISMStatics::GetViewHierarchy();
              ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v27, a3);
              v24(v23, a2, a3, ProcessIdFromViewId, ThreadIdFromViewId);
            }
          }
        }
        LOBYTE(Ancestor) = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      }
    }
  }
  else
  {
    ForegroundManager = ISMStatics::GetForegroundManager();
    LOBYTE(Ancestor) = ForegroundManager::SetForegroundActivatableEntity(ForegroundManager, a2);
  }
  return Ancestor;
}
