/*
 * XREFs of ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x1801D23E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180191370 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x1801D26AC (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x1802FEB20 (-_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealmActivationHistory::SetActiveApp(_QWORD **a1, unsigned int a2)
{
  unsigned int v4; // edi
  IUnknown **v5; // rax
  HRESULT v6; // ebx
  IUnknown **v7; // rax
  HRESULT Service; // ebx
  unsigned int v9; // eax
  IUnknown **v10; // rax
  HRESULT v11; // eax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  void *ppvOut[2]; // [rsp+28h] [rbp-18h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_DWORD *)CRealmActivationHistory::_GetRealmForActivation(a1 - 9, ppvOut, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( a2 != 16 )
  {
    if ( (a2 & 4) != 0 && (v4 == 1 || v4 == 2) )
    {
      ppvOut[0] = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
      v7 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)(a1 - 5), &v13);
      Service = IUnknown_QueryService(
                  *v7,
                  (const GUID *const)&SID_ImmersiveLauncher,
                  &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                  ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      if ( Service >= 0 )
      {
        LODWORD(v13) = 0;
        if ( (*(int (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0], &v13) >= 0 )
        {
          if ( (_DWORD)v13 )
            v4 = 4;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    }
LABEL_14:
    switch ( v4 )
    {
      case 1u:
      case 2u:
        v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1[41] + 128LL))(a1[41], v4, 0LL);
        break;
      case 4u:
        ppvOut[0] = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
        v10 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)(a1 - 5), &v13);
        v6 = IUnknown_QueryService(
               *v10,
               (const GUID *const)&SID_ImmersiveLauncher,
               &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
               ppvOut);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        if ( v6 >= 0 )
        {
          LODWORD(v13) = 0;
          v6 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0], &v13);
          if ( v6 >= 0 )
          {
            if ( (_DWORD)v13 )
              v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 72LL))(ppvOut[0]);
            else
              v11 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, a2 & 0xFFFFFFFB);
            v6 = v11;
          }
        }
        goto LABEL_5;
      case 8u:
        v6 = CRealmActivationHistory::_TrySwitchToMarkedWindow((CRealmActivationHistory *)(a1 - 9));
        if ( v6 >= 0 )
          return (unsigned int)v6;
        v9 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, a2 & 0xFFFFFFF7);
        break;
      case 0x10u:
        goto LABEL_3;
      default:
        return (unsigned int)-2147319765;
    }
    return v9;
  }
  if ( v4 )
    goto LABEL_14;
LABEL_3:
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  v5 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)(a1 - 5), &v13);
  v6 = IUnknown_QueryService(
         *v5,
         &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
         &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
         ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0]);
LABEL_5:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  return (unsigned int)v6;
}
