/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1806CB6FC
 * Callers:
 *     shell::TaskScheduler::AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1806C95C4 (shell--TaskScheduler--AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLaunc.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802EA172 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1802EA172.c)
 */

__int64 __fastcall shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &off_1807F1C88;
  *(_QWORD *)(a1 + 8) = &CRunnableTask::`vftable'{for `IServiceProvider'};
  *(_QWORD *)(a1 + 16) = &CRunnableTask::`vftable'{for `IQueryContinue'};
  *(_QWORD *)(a1 + 24) = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  *(_QWORD *)(a1 + 32) = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 80,
    a2 + 8);
  *(_QWORD *)(a1 + 80) = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  *(_BYTE *)(a1 + 400) = *(_BYTE *)(a2 + 328);
  *(_QWORD *)(a1 + 408) = *a3;
  return a1;
}
