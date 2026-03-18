/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930
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
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14005907C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     UserDeleteW32Thread @ 0x1400590C0 (UserDeleteW32Thread.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140059274 (GreIsCurrentProcessSystemCritical.c)
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *v1; // rdi
  void *v2; // rsi
  void *ThreadWin32Thread; // rbx

  if ( *((_BYTE *)this + 248) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else
  {
    v1 = *(_QWORD **)this;
    if ( *(_QWORD *)this )
    {
      v2 = (void *)*v1;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 94, 0xFFFFFFFF) == 1 )
      {
        if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0
          && (unsigned int)GreIsCurrentProcessSystemCritical() )
        {
          ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v2);
          PsSetThreadWin32Thread(*v1, 0LL, ThreadWin32Thread);
          GreDeleteFastMutex((char *)v1);
          ExFreePoolWithTag(ThreadWin32Thread, 0);
        }
        else
        {
          UserDeleteW32Thread(v1);
        }
      }
      ObfDereferenceObject(v2);
    }
  }
}
