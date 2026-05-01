/*
 * XREFs of ??1CRunnableTask@@MEAA@XZ @ 0x1805FF7C0
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805FF6B0 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_CSimpleR.c)
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::_CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1805FF6D8 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34_ea_1805FF6D8.c)
 *     ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x180600190 (--_GCRunnableTask@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRunnableTask::~CRunnableTask(CRunnableTask *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CRunnableTask::`vftable'{for `IRunnableTask'};
  *((_QWORD *)this + 1) = &CRunnableTask::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 2) = &CRunnableTask::`vftable'{for `IQueryContinue'};
  *((_QWORD *)this + 3) = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  *((_QWORD *)this + 4) = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    SetEvent(v2);
    CloseHandle(*((HANDLE *)this + 7));
  }
}
