/*
 * XREFs of ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804027C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C0C34 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x180401CA8 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180403228 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // r8
  __int64 *AppExecutionDataForAppState; // rax
  int v12; // eax
  const char *v13; // r9
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v19; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v4 = a3 - 1;
  if ( !v4 )
    goto LABEL_12;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_12;
  v6 = v5 - 5;
  if ( !v6 )
  {
    v10 = 2LL;
    goto LABEL_14;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v10 = 3LL;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_13:
    v10 = 0LL;
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_12:
    v10 = 1LL;
    goto LABEL_14;
  }
  if ( v9 != 3 )
    goto LABEL_19;
  v10 = 4LL;
LABEL_14:
  AppExecutionDataForAppState = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                                             a1 - 16,
                                             v17,
                                             v10,
                                             a2);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    &v16,
    AppExecutionDataForAppState);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v17);
  if ( v16 )
  {
    try
    {
      LOWORD(v19) = 0;
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 64LL))(*(_QWORD *)(a1 + 72));
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x9F,
                             (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                             v13);
    }
    v14 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v12);
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      return v14;
    }
    LOBYTE(v19) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v19);
  }
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  return 0LL;
}
