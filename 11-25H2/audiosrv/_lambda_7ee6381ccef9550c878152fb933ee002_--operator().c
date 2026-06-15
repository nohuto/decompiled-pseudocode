/*
 * XREFs of _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::Run @ 0x180149850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___--Run.c)
 * Callees:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180054A70 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180066B20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180077BBC (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x1800A3070 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A5154 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180149170 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1801494B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x1801495F4 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7ee6381ccef9550c878152fb933ee002_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  AtmosCheck *v5; // rax
  int ready; // eax
  int v7; // eax
  HANDLE v8; // rax
  bool v9; // cl
  AtmosCheck *v10; // rax
  signed int LastError; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  AtmosCheck *v14; // r8
  AtmosCheck *v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  signed int v17; // [rsp+40h] [rbp+8h] BYREF
  void *v18; // [rsp+48h] [rbp+10h] BYREF

  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1, a2, a3, a4);
  AtmosCheck::RefreshSpatialAudioLicenseModelState(*(AtmosCheck **)a1, 0LL);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    AtmosCheck::RegisterAppDeploymentNotifications(*(AtmosCheck **)a1);
    v5 = *(AtmosCheck **)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 217LL) )
    {
      ready = AtmosCheck::RegisterForShellReadyNotifications(*(AtmosCheck **)a1);
      if ( ready < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          511LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ready);
      v7 = AtmosCheck::RegisterForUserWatcherNotifications(*(AtmosCheck **)a1);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          515LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v7);
    }
    else
    {
      *((_BYTE *)v5 + 216) = 1;
      if ( *((_QWORD *)v5 + 13) )
      {
        v8 = OpenEventW(0x100002u, 0, L"Global\\Client_Atmos_Check_Event");
        v18 = v8;
        v9 = 0;
        if ( v8 )
          v9 = WaitForSingleObject(v8, 0) == 0;
        v10 = *(AtmosCheck **)a1;
        if ( v9 )
        {
          *((_BYTE *)v10 + 99) = 1;
          AtmosCheck::PerformLicenseCheck(v10, 1);
        }
        else if ( !RegisterWaitForSingleObject(
                     (PHANDLE)v10 + 14,
                     *((HANDLE *)v10 + 13),
                     AtmosCheck::StaticClientAtmosCheckEventFired,
                     v10,
                     0xFFFFFFFF,
                     0x18u) )
        {
          if ( (unsigned int)CallbackContext > 2 )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            v17 = LastError;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
              (__int64)&CallbackContext,
              byte_1801A8361,
              v12,
              v13,
              (__int64)&v17);
          }
          *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
        }
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
      }
    }
  }
  v14 = *(AtmosCheck **)a1;
  *((_WORD *)v14 + 48) = 257;
  if ( *((_BYTE *)v14 + 217) )
  {
    if ( !AtmosCheck::IsRunningOnXbox(v14) )
      AtmosCheck::PerformLicenseCheck(v15, 1);
  }
}
