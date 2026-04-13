/*
 * XREFs of ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180074648
 * Callers:
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180074B20 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180074EC0 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800750B0 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180075260 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x1800753E0 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180075960 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180075D00 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x180075F70 (-StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180044448 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180044480 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$ActivateInstance@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@1@@Z @ 0x180072054 (--$ActivateInstance@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::GetAppInstallManager(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager **a2)
{
  __int64 *v3; // rsi
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v3 = (__int64 *)&this[9];
  *a2 = 0LL;
  v4 = this + 11;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 11);
  v5 = *v3;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( !v5 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v4);
    if ( !*v3 )
    {
      v12 = 0LL;
      v15 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
        0x48u,
        0x47u);
      v6 = v15;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      v7 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>(
             v6,
             &v12);
      if ( v7 < 0 )
      {
        v8 = 482LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        return (unsigned int)v7;
      }
      v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
      v11 = **v12;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      v7 = v11(v10, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, v3);
      if ( v7 < 0 )
      {
        v8 = 483LL;
        goto LABEL_7;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( *v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 8LL))(*v3);
  *a2 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)*v3;
  return 0LL;
}
