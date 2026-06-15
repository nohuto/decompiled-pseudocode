/*
 * XREFs of ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015EF40
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800CFB30 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1801418A8 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18014FC94 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18009F50C (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010A510 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CancelGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180150888 (-CancelGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18015093C (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015F104 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UnregisterFromShellReadyNotifications@AtmosCheck@@AEAAXXZ @ 0x18015F2DC (-UnregisterFromShellReadyNotifications@AtmosCheck@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AtmosCheck::Uninitialize(AtmosCheck *this)
{
  bool v1; // zf
  DWORD *v3; // rsi
  DWORD *i; // rdi
  HRESULT v5; // eax
  __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  const char *v10; // r9
  HKEY v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 217) == 0;
  *((_BYTE *)this + 864) = 1;
  *((_BYTE *)this + 100) = 0;
  if ( !v1 )
  {
    v3 = (DWORD *)*((_QWORD *)this + 106);
    for ( i = (DWORD *)*((_QWORD *)this + 105); i != v3; ++i )
    {
      v5 = CoCancelCall(*i, 0);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          153LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  if ( *((_BYTE *)this + 97) )
  {
    AtmosCheck::UnregisterFromShellReadyNotifications(this);
    if ( AtmosCheck::IsRunningOnXbox(this) )
    {
      v6 = *((_QWORD *)this + 31);
      if ( v6 && *((_QWORD *)this + 32) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 31) + 80LL))(
          *((_QWORD *)this + 31),
          *((_QWORD *)this + 32));
        *((_QWORD *)this + 32) = 0LL;
      }
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 31);
    }
    AtmosCheck::UninitializeAppServiceMode(this);
    v7 = (void *)*((_QWORD *)this + 14);
    if ( v7 )
    {
      UnregisterWaitEx(v7, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 14) = 0LL;
    }
    v8 = (void *)*((_QWORD *)this + 13);
    if ( v8 )
    {
      CloseHandle(v8);
      *((_QWORD *)this + 13) = 0LL;
    }
    AtmosCheck::CancelLicenseRefreshTimer(this);
    AtmosCheck::CancelGracePeriodTimer(this);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v9 = (void *)*((_QWORD *)this + 16);
    if ( v9 )
    {
      if ( !UnregisterWaitEx(v9, (HANDLE)0xFFFFFFFFFFFFFFFFLL) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xBC,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          v10);
      *((_QWORD *)this + 16) = 0LL;
    }
    CloseHandle(*((HANDLE *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  v11 = (HKEY)*((_QWORD *)this + 15);
  if ( v11 )
  {
    RegCloseKey(v11);
    *((_QWORD *)this + 15) = 0LL;
  }
  AtmosCheck::UnregisterAppDeploymentNotifications(this);
}
