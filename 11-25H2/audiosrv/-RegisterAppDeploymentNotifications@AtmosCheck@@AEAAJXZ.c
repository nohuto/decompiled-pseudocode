/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180149170
 * Callers:
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC (_lambda_7ee6381ccef9550c878152fb933ee002_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180062F48 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800828DC (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _lambda_ed93c361bb151993c0858b3e67bfc06f_::_lambda_ed93c361bb151993c0858b3e67bfc06f_ @ 0x1800B6F64 (_lambda_ed93c361bb151993c0858b3e67bfc06f_--_lambda_ed93c361bb151993c0858b3e67bfc06f_.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_ed93c361bb151993c0858b3e67bfc06f___ @ 0x18014658C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--Pack.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_ddf72429dfe7e6f051e146c766b7831c___ @ 0x1801465F8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_1801465F8.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_c0f79c7db2a352ac037a8b0fb781f475___ @ 0x180146664 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_180146664.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  AtmosCheck *v3; // rcx
  __int64 v4; // r9
  int ActivationFactory; // r15d
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, char *); // rdi
  _QWORD *v9; // r12
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  char *v15; // r8
  __int64 v16; // rsi
  AtmosCheck *v18; // [rsp+20h] [rbp-60h] BYREF
  AtmosCheck *v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  AtmosCheck *v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF

  v20 = 0LL;
  v18 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v20);
  if ( ActivationFactory >= 0 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v23[1] = (__int64)this + 56;
    v7 = v20;
    v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 48LL);
    v9 = (_QWORD *)((char *)this + 48);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 6);
    ActivationFactory = v8(v7, (char *)this + 48);
    if ( ActivationFactory >= 0 )
    {
      v10 = lambda_ed93c361bb151993c0858b3e67bfc06f_::_lambda_ed93c361bb151993c0858b3e67bfc06f_(
              (__int64 *)&v21,
              (__int64 *)&v18);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_ed93c361bb151993c0858b3e67bfc06f___(
        v23,
        (__int64)v10);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v21);
      v11 = lambda_ed93c361bb151993c0858b3e67bfc06f_::_lambda_ed93c361bb151993c0858b3e67bfc06f_(
              (__int64 *)&v19,
              (__int64 *)&v18);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_ddf72429dfe7e6f051e146c766b7831c___(
        (__int64 *)&v21,
        (__int64)v11);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v19);
      v12 = lambda_ed93c361bb151993c0858b3e67bfc06f_::_lambda_ed93c361bb151993c0858b3e67bfc06f_(&v22, (__int64 *)&v18);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_c0f79c7db2a352ac037a8b0fb781f475___(
        (__int64 *)&v19,
        (__int64)v12);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v22);
      v13 = v23[0];
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v9 + 64LL))(
                            *v9,
                            v23[0],
                            (char *)this + 144);
      if ( ActivationFactory >= 0 )
      {
        v14 = (__int64)v21;
        ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, AtmosCheck *, char *))(*(_QWORD *)*v9 + 96LL))(
                              *v9,
                              v21,
                              (char *)this + 152);
        if ( ActivationFactory >= 0 )
        {
          v15 = (char *)this + 160;
          v16 = (__int64)v19;
          ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, AtmosCheck *, char *))(*(_QWORD *)*v9 + 80LL))(
                                *v9,
                                v19,
                                v15);
          if ( ActivationFactory >= 0 )
          {
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            if ( v13 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          else
          {
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            if ( v13 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
        else
        {
          v3 = v19;
          if ( v19 )
            (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v19 + 16LL))(v19);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      else
      {
        if ( v19 )
          (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v19 + 16LL))(v19);
        v3 = v21;
        if ( v21 )
          (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
  }
  AtmosCheck::Trace(v3, "RegAppDepNotification result", (unsigned int)ActivationFactory, v4);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  return (unsigned int)ActivationFactory;
}
