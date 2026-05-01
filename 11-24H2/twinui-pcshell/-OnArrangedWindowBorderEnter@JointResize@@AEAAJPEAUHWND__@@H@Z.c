/*
 * XREFs of ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1800ED3C0
 * Callers:
 *     ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x18017C250 (-OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800EB8DC (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800ED5E0 (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x18017C2A8 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18018D254 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1801C0E74 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1801C1308 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::OnArrangedWindowBorderEnter(JointResize *this, HWND a2, int a3)
{
  char v6; // bp
  __int64 (__fastcall ****v7)(ApplicationViewHelpers *, GUID *, __int64 *); // r14
  int ViewForWindow; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall ***v11)(ApplicationViewHelpers *, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v12)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  struct IApplicationView *v15; // rdx
  int GhostDivider; // eax
  struct tagCURSORINFO pci; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 1;
  if ( !*((_BYTE *)this + 280) )
  {
    pci.cbSize = 24;
    memset(&pci.flags, 0, 20);
    if ( (!GetCursorInfo(&pci) || (pci.flags & 1) != 0) && !*((_QWORD *)this + 24) )
    {
      v7 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))((char *)this + 208);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
      ViewForWindow = JointResize::GetViewForWindow(this, a2, (struct IApplicationView **)this + 26);
      v9 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x465,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)ViewForWindow);
        JointResize::OnArrangedWindowBorderExit(this);
        return v9;
      }
      v11 = *v7;
      v12 = (**v7)[10];
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), char *))v12)(
              v11,
              (char *)this + 200);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x466,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v13);
        JointResize::OnArrangedWindowBorderExit(this);
        return v9;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 88LL))(
              *((_QWORD *)this + 25),
              (char *)this + 296);
      v9 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x467,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v14);
        JointResize::OnArrangedWindowBorderExit(this);
        return v9;
      }
      *((_QWORD *)this + 36) = ApplicationViewHelpers::GetWindowForView(*v7, v15);
      *((_DWORD *)this + 80) = a3;
      v9 = JointResize::CalculateSecondaryViews(this);
      if ( (v9 & 0x80000000) != 0 )
      {
        JointResize::OnArrangedWindowBorderExit(this);
        return v9;
      }
      GhostDivider = JointResize::CreateGhostDivider(this, 2LL);
      v9 = GhostDivider;
      if ( GhostDivider < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46D,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)GhostDivider);
        JointResize::OnArrangedWindowBorderExit(this);
        return v9;
      }
      JointResize::RegisterRawInput(this, 1);
      JointResize::RegisterViewChanges(this, 1);
      v6 = 0;
    }
  }
  if ( v6 )
    JointResize::OnArrangedWindowBorderExit(this);
  return 0LL;
}
