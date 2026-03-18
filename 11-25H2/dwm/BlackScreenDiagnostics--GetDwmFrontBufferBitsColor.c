/*
 * XREFs of BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000F4E0
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000F898 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140003A70 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400070DC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14000C138 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14000F094 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1400104FC (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  wil::details *EventW; // rax
  HANDLE v6; // rdi
  bool v7; // bl
  void *v8; // rdx
  DWORD LastError; // ebx
  __int64 v10; // rcx
  void *v11; // rdx
  bool v12; // bp
  int v13; // r14d
  int v14; // r15d
  HANDLE FileMappingW; // rax
  void *v16; // rbx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  ULONG v19; // edi
  int IsSectionAllBlackPixels; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-38h] BYREF
  void *v23; // [rsp+48h] [rbp-30h] BYREF
  void *v24; // [rsp+50h] [rbp-28h] BYREF

  hHandle = 0LL;
  EventW = (wil::details *)CreateEventW(0LL, 0, 0, 0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)&hHandle,
    EventW);
  v23 = 0LL;
  v6 = hHandle;
  v7 = hHandle == 0LL;
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)&v23,
    v8);
  if ( !v7 )
  {
    v12 = 1;
    v13 = GetSystemMetrics(0) / 2;
    v14 = GetSystemMetrics(1) / 2;
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, 0x75300u, 0LL);
    v24 = 0LL;
    v16 = FileMappingW;
    v23 = FileMappingW;
    if ( FileMappingW )
      v12 = FileMappingW == (HANDLE)-1LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
    if ( v12 )
    {
      LastError = GetLastError();
      MicrosoftTelemetryAssertTriggeredArgs(v17, LastError, 0LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v23);
      goto LABEL_13;
    }
    v18 = NtDesktopCaptureBits(0LL, (unsigned int)(v13 - 200), (unsigned int)(v14 - 150), 400LL, 300, 87, v6, v16);
    if ( v18 < 0 )
    {
      v19 = RtlNtStatusToDosError(v18);
    }
    else
    {
      v19 = WaitForSingleObject(v6, 0x1388u);
      if ( !v19 )
      {
        IsSectionAllBlackPixels = BlackScreenDiagnostics::IsSectionAllBlackPixels(v16);
LABEL_12:
        *a4 = IsSectionAllBlackPixels;
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v23);
        LastError = v19;
        goto LABEL_13;
      }
    }
    IsSectionAllBlackPixels = 3;
    goto LABEL_12;
  }
  LastError = GetLastError();
  MicrosoftTelemetryAssertTriggeredArgs(v10, LastError, 0LL);
LABEL_13:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)&hHandle,
    v11);
  return LastError;
}
