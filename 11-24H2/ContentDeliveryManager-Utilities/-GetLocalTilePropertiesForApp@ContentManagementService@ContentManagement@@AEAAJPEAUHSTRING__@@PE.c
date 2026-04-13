/*
 * XREFs of ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180052060
 * Callers:
 *     ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800530F0 (-GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PE.c)
 *     ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x180057C50 (-SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180044448 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180044480 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$ComPtr@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004CAA0 (--4-$ComPtr@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@WRL@Micro.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **a3)
{
  RTL_SRWLOCK *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ebx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64 *); // rdi
  __int64 *v12; // rsi
  __int64 v13; // rbx
  int ActivationFactory; // eax
  __int64 v15; // rdx
  PSRWLOCK v16; // rbx
  __int64 (__fastcall *v17)(PSRWLOCK, _QWORD, __int64, __int64 *); // rdi
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, HSTRING *); // rdi
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, HSTRING, _QWORD); // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v27; // [rsp+30h] [rbp-39h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-31h] BYREF
  HSTRING string; // [rsp+40h] [rbp-29h] BYREF
  __int64 v30; // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // [rsp+50h] [rbp-19h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h] BYREF
  PSRWLOCK v33; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-1h] BYREF
  __int64 v35; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a3 = 0LL;
  v32 = 0LL;
  v6 = (RTL_SRWLOCK *)((char *)this + 120);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, (RTL_SRWLOCK *)this + 15);
  Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>::operator=(
    &v32,
    (__int64 *)this + 19);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v7 = v32;
  if ( v32 )
  {
LABEL_11:
    v30 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v7 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    v10 = v11(v7, a2, &v30);
    if ( v10 < 0 )
    {
LABEL_12:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      goto LABEL_37;
    }
    v27 = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, v6);
    v12 = (__int64 *)((char *)this + 160);
    Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>::operator=(
      &v27,
      v12);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    if ( !v27 )
    {
      SRWLock = 0LL;
      v35 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"WindowsInternal.Shell.CDSProperties.CDSTilePropertiesBatched",
        0x3Du,
        0x3Cu);
      v13 = v35;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&SRWLock);
      ActivationFactory = RoGetActivationFactory(v13, &GUID_3055f2cd_a89f_43f3_be60_867e2644b283, &SRWLock);
      v10 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v15 = 955LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)ActivationFactory);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&SRWLock);
LABEL_19:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        goto LABEL_12;
      }
      v16 = SRWLock;
      v17 = (__int64 (__fastcall *)(PSRWLOCK, _QWORD, __int64, __int64 *))*((_QWORD *)SRWLock->Ptr + 6);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      ActivationFactory = v17(v16, 0LL, 1LL, &v27);
      v10 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v15 = 956LL;
        goto LABEL_18;
      }
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v33, v6);
      if ( *v12 )
      {
        v18 = &v27;
      }
      else
      {
        v18 = v12;
        v12 = &v27;
      }
      Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>::operator=(
        v18,
        v12);
      if ( v33 )
        ReleaseSRWLockExclusive(v33);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&SRWLock);
    }
    string = 0LL;
    v19 = v30;
    v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v21 = v20(v19, &string);
    v10 = v21;
    if ( v21 >= 0 )
    {
      v31 = 0LL;
      v22 = v27;
      v23 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v27 + 88LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
      v24 = v23(v22, string, &v31);
      v10 = v24;
      if ( v24 >= 0 )
      {
        v24 = (**v31)(v31, &GUID_f2456d27_5e13_42b8_bc25_00b4cc364e44, a3);
        v10 = v24;
        if ( v24 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          v10 = 0;
          goto LABEL_37;
        }
        v25 = 974LL;
      }
      else
      {
        v25 = 973LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v21);
    }
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_19;
  }
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v6);
  if ( *((_QWORD *)this + 19)
    || (v35 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
          0x40u,
          0x3Fu),
        v8 = v35,
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19),
        v9 = RoGetActivationFactory(v8, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, (char *)this + 152),
        v10 = v9,
        v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>::operator=(
      &v32,
      (__int64 *)this + 19);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v7 = v32;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A2,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v9);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_37:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  return (unsigned int)v10;
}
