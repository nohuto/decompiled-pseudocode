/*
 * XREFs of ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E4AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180016EEC (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x180029FC4 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180091264 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180091F30 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180092BC0 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801FCFB8 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::CreateEnsuredApplication(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        struct IImmersiveApplicationInternal **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int ImmersiveApp; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  CApplicationManager *v17; // rdi
  struct IImmersiveMonitor *v18; // rbx
  CActivationBasedAppAndGlomCollection *v19; // rsi
  int NextGlomId; // eax
  CImmersiveAppFinderByApplication *v21; // rax
  __int64 v22; // r8
  struct IImmersiveApplicationInternal *v23; // rax
  const struct _GUID *v25; // [rsp+28h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v27; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IImmersiveApplicationInternal *v30; // [rsp+90h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v31; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v8 = *((_QWORD *)this + 42);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v10 = v9(v8, 0LL, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v26);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v31 = 0LL;
    v12 = *((_QWORD *)this + 40);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    ImmersiveApp = v13(
                     v12,
                     0LL,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &v31);
    v11 = ImmersiveApp;
    if ( ImmersiveApp >= 0 )
    {
      v17 = (CApplicationManager *)((char *)this - 240);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
      v18 = v31;
      v19 = (CApplicationManager *)((char *)this + 384);
      NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(v19, a2);
      ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                       v17,
                       (CallerIdentity *)a2,
                       a3,
                       NextGlomId,
                       v18,
                       v25,
                       (void **)&v30);
      v11 = ImmersiveApp;
      if ( ImmersiveApp >= 0 )
      {
        ImmersiveApp = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v26 + 48LL))(
                         v26,
                         v30,
                         0LL,
                         0LL,
                         8,
                         0LL);
        v11 = ImmersiveApp;
        if ( ImmersiveApp >= 0 )
        {
          ImmersiveApp = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(v19, (__int64 *)&v30, 0LL);
          v11 = ImmersiveApp;
          if ( ImmersiveApp >= 0 )
          {
            v28 = 0LL;
            v21 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                    (CImmersiveAppFinderByApplication *)&v27,
                    (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))v30);
            CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
              (__int64)v19,
              v21,
              v22,
              &v28);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
            v27 = v30;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
            v11 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
                    v19,
                    (__int64 *)&v27,
                    v28);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
            if ( v11 >= 0 )
            {
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v30 + 176LL))(v30);
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v30 + 544LL))(v30);
              v23 = v30;
              v30 = 0LL;
              *a4 = v23;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
              v11 = 0;
              goto LABEL_16;
            }
            v16 = (unsigned int)v11;
            v15 = 3734LL;
            goto LABEL_6;
          }
          v15 = 3730LL;
        }
        else
        {
          v15 = 3727LL;
        }
      }
      else
      {
        v15 = 3725LL;
      }
    }
    else
    {
      v15 = 3719LL;
    }
    v16 = (unsigned int)ImmersiveApp;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE83,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  return (unsigned int)v11;
}
