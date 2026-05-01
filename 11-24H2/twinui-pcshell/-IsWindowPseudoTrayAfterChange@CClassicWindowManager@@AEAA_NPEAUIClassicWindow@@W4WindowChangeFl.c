/*
 * XREFs of ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180140824
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x180286D40 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140C80 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CD0 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CClassicWindowManager::IsWindowPseudoTrayAfterChange(__int64 a1, __int64 a2, char a3)
{
  HWND v5; // rax
  HWND v7; // rdi
  CApplicationManagerUtility *v8; // rax
  HWND v9; // rdx
  HWND v10; // rax
  HWND Window; // rdi
  HWND v12; // rax
  HWND v13; // rax
  HWND v14; // rbp
  char v15; // bl
  HWND v16; // rsi
  HWND v17; // rdx

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) && (a3 & 8) == 0 )
    return 0;
  if ( (a3 & 4) != 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2) && (a3 & 1) == 0 )
    return 0;
  if ( (a3 & 2) != 0 )
    return 0;
  v5 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( !IsWindowVisible(v5) )
    return 0;
  v7 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( (GetWindowLongPtrW(v7, -20) & 0x40000) == 0 && (GetWindowLongPtrW(v7, -20) & 0x8000080) != 0 )
    return 0;
  v8 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( CApplicationManagerUtility::IsForcedAppWindow(v8, v9) )
    return 0;
  v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  Window = GetWindow(v10, 4u);
  if ( !Window )
    return 0;
  v12 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( !IsWindowEnabled(v12) )
    return 0;
  v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( !IsWindowVisible(v13) || IsWindowVisible(Window) && IsWindowEnabled(Window) )
    return 0;
  v14 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  v15 = 1;
  while ( Window )
  {
    v16 = GetWindow(Window, 4u);
    if ( IsWindowVisible(Window)
      && CApplicationManagerUtility::IsTrayWindowStyleCheck(Window, v17)
      && (!v16 || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v17)) )
    {
      return 0;
    }
    if ( CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v17) )
    {
      v15 = 0;
    }
    else if ( v15
           && (GetWindowLongPtrW(Window, -20) & 0x80u) != 0LL
           && ((GetWindowLongPtrW(v14, -20) & 0x10000) == 0 || v16) )
    {
      return 0;
    }
    v14 = Window;
    Window = v16;
  }
  return 1;
}
