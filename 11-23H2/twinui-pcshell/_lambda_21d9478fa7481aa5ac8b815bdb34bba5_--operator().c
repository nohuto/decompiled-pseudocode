/*
 * XREFs of _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1806CBCEC
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::InternalResumeRT @ 0x1806CD9C0 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34_ea_1806CD9C0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114C48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802EA172 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1802EA172.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805073EC (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1806CBB60 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator()(_QWORD *a1, __int64 a2)
{
  HWND v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 *v7; // rax
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64, void **); // rdi
  void **v10; // rax
  int v11; // eax
  const WCHAR *lpFile; // rcx
  IShellItem *psiParent; // [rsp+30h] [rbp-D0h] BYREF
  void *ppv; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v17[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v18; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-10h]
  int v20; // [rsp+F8h] [rbp-8h]
  __int64 v21; // [rsp+100h] [rbp+0h]
  __int64 v22[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v23; // [rsp+140h] [rbp+40h]
  unsigned __int16 v24[264]; // [rsp+250h] [rbp+150h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v22,
    (__int64)(a1 + 1));
  v22[0] = (__int64)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  if ( *v23 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v17,
      (struct wil::details::IFailureCallback *)v22,
      (const struct wil::details::StoredCallContextInfo *)(v23 + 10));
  }
  else
  {
    memset(v17, 0, sizeof(v17));
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
  }
  v4 = (HWND)SHCreateWorkerWindowW(DefWindowProcW, -3LL, 0LL);
  pv = 0LL;
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.hwnd = v4;
  pExecInfo.fMask = 256;
  if ( *a1 && (*(int (__fastcall **)(_QWORD, IShellItem **))(*(_QWORD *)*a1 + 40LL))(*a1, &psiParent) >= 0 )
  {
    pExecInfo.hIcon = psiParent;
    pExecInfo.fMask |= 0x200000u;
  }
  if ( (*(_DWORD *)(a2 + 104) & 0x100) != 0
    && SHRegGetStringEx(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\PowerShell\\3",
         L"ConsoleHostShortcutTarget",
         2u,
         v24,
         0x104u) >= 0 )
  {
    v7 = v24;
LABEL_21:
    pExecInfo.lpFile = v7;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a2 + 104) & 0x800) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 104) & 4) != 0 )
      v7 = *(unsigned __int16 **)(a2 + 56);
    else
      v7 = *(unsigned __int16 **)(a2 + 32);
    goto LABEL_21;
  }
  pExecInfo.lpFile = L"wt.exe";
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  if ( SHGetKnownFolderItem(
         &FOLDERID_LocalAppData,
         KF_FLAG_DEFAULT,
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&psiParent) >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    if ( SHCreateItemFromRelativeName(
           psiParent,
           L"Microsoft\\WindowsApps\\wt.exe",
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           &ppv) >= 0 )
    {
      v8 = ppv;
      v9 = *(__int64 (__fastcall **)(void *, __int64, void **))(*(_QWORD *)ppv + 40LL);
      v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
      v11 = v9(v8, 2147844096LL, v10);
      lpFile = pExecInfo.lpFile;
      if ( v11 >= 0 )
        lpFile = (const WCHAR *)pv;
      pExecInfo.lpFile = lpFile;
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
LABEL_22:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  pExecInfo.lpVerb = *(LPCWSTR *)(a2 + 80);
  pExecInfo.nShow = 10;
  ShellExecuteExW(&pExecInfo);
  if ( v4 )
    DestroyWindow(v4);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v22, 0);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v18);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v17);
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v22);
}
