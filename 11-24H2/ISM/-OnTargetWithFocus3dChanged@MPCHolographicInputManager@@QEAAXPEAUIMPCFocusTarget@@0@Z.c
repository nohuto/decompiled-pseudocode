/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800BB174
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800FE8F8 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800118EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800B28CC (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BAAB0 (-MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BAB08 (-MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BF028 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHolographicInputManager::OnTargetWithFocus3dChanged(
        MPCHolographicInputManager *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  char v6; // si
  char v7; // bp
  int v8; // eax
  int v9; // eax
  MPCCursorManager *v10; // rcx
  ISMTracing *v11; // rcx
  ISMTracing *v12; // rcx
  MPCGamepadInputHelper *Instance; // rax
  struct IMPCFocusTarget *v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *i; // rdi

  v6 = 0;
  v7 = 0;
  if ( !IsEdition(1024LL) )
  {
    if ( a3 && (*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(a3) )
    {
      v8 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v6 = GetPropW((HWND)v8, L"Windows.UI.Input.Spatial.DisableMouseRouting") != 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v7 = GetPropW((HWND)v9, L"Windows.UI.Input.Spatial.Disable3DFocusGamepadRouting") != 0LL;
    }
    if ( v6 != *((_BYTE *)this + 3366) )
    {
      v10 = (MPCCursorManager *)*((_QWORD *)this + 423);
      *((_BYTE *)this + 3366) = v6;
      if ( v10 )
        MPCCursorManager::UpdateState(v10);
      if ( ISMTracing::IsEnabled() )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse_(v11, (const bool *)this + 3366);
      }
    }
    if ( v7 != *((_BYTE *)this + 3367) )
    {
      *((_BYTE *)this + 3367) = v7;
      if ( ISMTracing::IsEnabled() )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DGamepad_(v12, (const bool *)this + 3367);
      }
    }
  }
  Instance = MPCGamepadInputHelper::GetInstance();
  MPCGamepadInputHelper::OnTargetWithFocus3dChanged(Instance, v14, a3);
  v15 = (_QWORD *)*((_QWORD *)this + 414);
  for ( i = (_QWORD *)*((_QWORD *)this + 413); i != v15; ++i )
    (*(void (__fastcall **)(_QWORD, struct IMPCFocusTarget *, struct IMPCFocusTarget *))(*(_QWORD *)*i + 336LL))(
      *i,
      a2,
      a3);
}
