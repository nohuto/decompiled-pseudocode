/*
 * XREFs of ?InternalRelease@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CA810
 * Callers:
 *     ??$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020A250 (--$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 *     ??1?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0E2C (--1-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805FF6B0 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_CSimpleR.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180602BD8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1806038C0 (-s_WndProcBase@-$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180099FC0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
