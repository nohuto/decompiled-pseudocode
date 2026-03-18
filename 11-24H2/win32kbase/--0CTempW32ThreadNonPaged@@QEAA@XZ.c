/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0
 * Callers:
 *     rimDeviceResetApc @ 0x14005A7B0 (rimDeviceResetApc.c)
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 *     Win32kBaseVideoPortCallout @ 0x1401237B0 (Win32kBaseVideoPortCallout.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x14013C794 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x1401443C4 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ProcessFreezeChangeNotify @ 0x1401A3EF0 (ProcessFreezeChangeNotify.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401A9AC8 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401AA430 (-Terminated@Win32JobObject@@YAXK@Z.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     W32pLkmdDataCollectionCallback @ 0x1401C08C0 (W32pLkmdDataCollectionCallback.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401ECBE0 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401ECE9C (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1400A3C50 (IsThreadCrossSessionAttached.c)
 *     ReferenceW32Thread @ 0x1400C5AD0 (ReferenceW32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rdi

  memset(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v3 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        if ( *(_DWORD *)(*v3 + 376LL) )
        {
          *(_QWORD *)this = *v3;
          if ( (int)ReferenceW32Thread(*v3) <= 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
        }
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 32);
    ExInitializeFastOwnerEntry((char *)this + 104);
    ExInitializeFastOwnerEntry((char *)this + 176);
    *((_DWORD *)this + 6) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    *((_BYTE *)this + 248) = 1;
  }
  return this;
}
