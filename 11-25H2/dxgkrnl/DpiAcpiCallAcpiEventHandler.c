/*
 * XREFs of DpiAcpiCallAcpiEventHandler @ 0x1400515C8
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x140051540 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x140051570 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiTryLidStateRecovery @ 0x14007C334 (DpiTryLidStateRecovery.c)
 *     DpiAcpiDockEventCallback @ 0x14024A740 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(PVOID Object, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  int v7; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v10; // rax

  v4 = a3;
  v7 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 40LL, 1953656900LL, a4);
  if ( Pool2 )
  {
    ObfReferenceObject(Object);
    Pool2[2] = Object;
    *((_DWORD *)Pool2 + 6) = a2;
    *((_DWORD *)Pool2 + 7) = v4;
    Pool2[4] = a4;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_14015DEE0);
    qword_14015DF18 = (__int64)KeGetCurrentThread();
    if ( a2 == 2 && (_DWORD)v4 == 4 )
    {
      ++dword_14015DF30;
      KeClearEvent(&Event);
    }
    v10 = (_QWORD *)qword_14015DF28;
    if ( *(__int64 **)qword_14015DF28 != &qword_14015DF20 )
      __fastfail(3u);
    *Pool2 = &qword_14015DF20;
    Pool2[1] = v10;
    *v10 = Pool2;
    qword_14015DF28 = (__int64)Pool2;
    if ( !IoWorkItem )
    {
      IoWorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( IoWorkItem )
      {
        WdLogSingleEntry1(4LL, v4);
        WdLogGlobalForLineNumber = 139;
        IoQueueWorkItemEx(IoWorkItem, DpiAcpiHandleAcpiEventWork, DelayedWorkQueue, 0LL);
      }
      else
      {
        KeSetEvent(&Event, 0, 0);
        v7 = -1073741670;
        WdLogSingleEntry1(6LL, -1073741670LL);
        WdLogGlobalForLineNumber = 133;
      }
    }
    qword_14015DF18 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_14015DEE0);
    if ( v7 < 0 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    v7 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 94;
  }
  return (unsigned int)v7;
}
