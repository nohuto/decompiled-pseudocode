/*
 * XREFs of ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180090D50
 * Callers:
 *     ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180090660 (-GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x18021F73C (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 *     ?GetSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18059EFC0 (-GetSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x1805A8B9C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x180091D10 (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnappedWindowModel_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  int v17; // [rsp+68h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &>(
         (unsigned int)&a6,
         (unsigned int)&v14,
         (unsigned int)&v15,
         (unsigned int)&v16,
         (__int64)&v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a6)(
            a6,
            &GUID_c3fa9c5f_1c18_451b_8c77_5eba502c4f06,
            v6);
    v8 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
        (const char *)(unsigned int)v10);
    v11 = (__int64)a6;
    if ( a6 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
      (const char *)(unsigned int)v7);
    v9 = (__int64)a6;
    if ( a6 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v8;
}
