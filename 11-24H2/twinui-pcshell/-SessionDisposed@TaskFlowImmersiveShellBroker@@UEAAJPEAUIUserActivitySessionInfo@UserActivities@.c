/*
 * XREFs of ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x1804004E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1803FDA90 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180400954 (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SessionDisposed(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ApplicationViewViewIdForCoreWindow; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 48) == 1 )
  {
    v5 = *((_QWORD *)this + 32);
    v13 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v11 = 0LL;
      ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *, unsigned __int64 *))(*(_QWORD *)a2 + 80LL))(
                                             a2,
                                             &v11);
      v4 = ApplicationViewViewIdForCoreWindow;
      if ( ApplicationViewViewIdForCoreWindow < 0 )
      {
        v7 = 512LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)ApplicationViewViewIdForCoreWindow);
LABEL_12:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        return v4;
      }
      v12 = 0LL;
      ApplicationViewViewIdForCoreWindow = TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
                                             this,
                                             v11,
                                             &v12);
      v4 = ApplicationViewViewIdForCoreWindow;
      if ( ApplicationViewViewIdForCoreWindow < 0 )
      {
        v7 = 515LL;
        goto LABEL_8;
      }
      if ( v12 )
      {
        ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *))(*(_QWORD *)a2 + 88LL))(a2);
        v4 = ApplicationViewViewIdForCoreWindow;
        if ( ApplicationViewViewIdForCoreWindow < 0 )
        {
          v7 = 524LL;
          goto LABEL_8;
        }
        ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(_QWORD, struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *))(**((_QWORD **)this + 32) + 56LL))(
                                               *((_QWORD *)this + 32),
                                               a2);
        v4 = ApplicationViewViewIdForCoreWindow;
        if ( ApplicationViewViewIdForCoreWindow < 0 )
        {
          v7 = 526LL;
          goto LABEL_8;
        }
      }
      else
      {
        TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(v8);
        _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
      }
    }
    v4 = 0;
    goto LABEL_12;
  }
  v4 = -2147467260;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FA,
    (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)0x80004004LL);
  return v4;
}
