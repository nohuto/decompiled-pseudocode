/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180015D94
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180014150 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180202F58 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180016290 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180016D88 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180016EEC (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180038568 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180091F30 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18009EEE0 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1800B0B64 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1800B236C (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802A798C (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 *     ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1802E8A78 (-HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct IUnknown *a3)
{
  int (__fastcall *v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rbx
  int v6; // r13d
  unsigned int NextGlomId; // r14d
  RTL_SRWLOCK *v8; // rcx
  char v9; // r15
  int First; // eax
  int ImmersiveApp; // edi
  void (__fastcall *v12)(unsigned __int64, GUID *, GUID *, unsigned __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v16; // rbx
  unsigned __int64 v17; // rdi
  const unsigned __int16 *v18; // rax
  int v19; // ebx
  struct IImmersiveMonitor *v20; // rcx
  const unsigned __int16 *v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int8 v23; // cl
  __int64 v24; // rcx
  CAppManagerTelemetry *v25; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveApplicationInternal *v27; // rcx
  void (__fastcall *v28)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rbx
  char v29; // bl
  struct IUnknown *v30; // [rsp+28h] [rbp-58h]
  struct IImmersiveApplicationInternal *v31; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v34; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-20h]
  unsigned __int64 v36; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+70h] [rbp-10h]
  unsigned __int64 v38; // [rsp+C8h] [rbp+48h] BYREF
  struct IUnknown *v39; // [rsp+D0h] [rbp+50h]
  __int64 v40; // [rsp+D8h] [rbp+58h] BYREF

  v39 = a3;
  string = 0LL;
  v5 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5(a2, &string) < 0 )
    goto LABEL_35;
  v32 = -1LL;
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 584LL))(
    a2,
    &v32);
  v6 = 0;
  NextGlomId = 0;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v40 = 0LL;
    v28 = **(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    v28(a2, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v40);
    LODWORD(v38) = 0;
    if ( (*(int (__fastcall **)(__int64, const WCHAR *, unsigned __int64 *))(*(_QWORD *)v40 + 88LL))(
           v40,
           L"LastSetGlomIdForReconstitution",
           &v38) >= 0 )
      NextGlomId = v38;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
  }
  v31 = 0LL;
  v9 = 0;
  AcquireSRWLockExclusive(v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  if ( NextGlomId )
  {
    v36 = v32;
    v37 = NextGlomId;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v36, &v31);
  }
  else
  {
    v38 = v32;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(this, &v38, &v31);
  }
  ImmersiveApp = First;
  LODWORD(v40) = 1;
  if ( First >= 0 )
  {
    v29 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v31 + 408LL))(v31);
    v30 = v39;
    ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v31, 1LL, 0LL);
    v9 = v29 == 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( ImmersiveApp >= 0 )
    goto LABEL_30;
  v36 = 0LL;
  v37 = -2147467259;
  v12 = *(void (__fastcall **)(unsigned __int64, GUID *, GUID *, unsigned __int64 *))(*(_QWORD *)(((unsigned __int64)this
                                                                                                 + 192) & -(__int64)(this != 0LL))
                                                                                    + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  v12(
    ((unsigned __int64)this + 192) & -(__int64)(this != 0LL),
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v36);
  v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 40LL))(v36);
  v37 = v6;
  if ( v6 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    v6 = v37;
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  if ( NextGlomId )
  {
    v34 = (struct IImmersiveMonitor *)v32;
    v35 = NextGlomId;
    v13 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v34, &v31);
  }
  else
  {
    v38 = v32;
    v13 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>(this, &v38, &v31);
  }
  ImmersiveApp = v13;
  if ( v13 >= 0 )
  {
    v9 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v31 + 408LL))(v31) == 0;
LABEL_42:
    ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v31, (unsigned int)v40, 0LL);
    goto LABEL_25;
  }
  if ( v13 == -2147319765 )
  {
    v34 = 0LL;
    v14 = *((_QWORD *)this + 70);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v14 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    ImmersiveApp = v15(
                     v14,
                     0LL,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &v34);
    if ( ImmersiveApp < 0 )
      goto LABEL_21;
    if ( !NextGlomId )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                     (CApplicationManager *)((char *)this + 624),
                     StringRawBuffer);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v16 = v34;
    v17 = v32;
    v18 = WindowsGetStringRawBuffer(string, 0LL);
    ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                     this,
                     v18,
                     v17,
                     NextGlomId,
                     v16,
                     (const struct _GUID *)v30,
                     (void **)&v31);
    if ( ImmersiveApp < 0 )
    {
LABEL_21:
      v19 = -1;
    }
    else
    {
      v19 = 0;
      if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
        CApplicationManager::UpdateMonitorForAppAsync(this, v31);
      v9 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr);
    }
    LODWORD(v40) = v19;
    v20 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( ImmersiveApp >= 0 )
      goto LABEL_42;
  }
LABEL_25:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 48LL))(v36);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  if ( ImmersiveApp < 0 )
    goto LABEL_26;
LABEL_30:
  if ( v9
    && (ImmersiveApp = CApplicationManager::HandleInitialPosition(
                         (CApplicationManager *)((char *)this + 240),
                         v31,
                         v39,
                         0LL,
                         0LL),
        ImmersiveApp < 0)
    || v6 < 0 )
  {
LABEL_26:
    v21 = WindowsGetStringRawBuffer(string, 0LL);
    if ( CAppManagerTelemetry::IsEnabled(v23, v22) )
    {
      wil::details::static_lazy<CAppManagerTelemetry>::get(
        v24,
        _lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
      CAppManagerTelemetry::HandleViewCreationFailure_(v25, v21, v32, ImmersiveApp, v6);
    }
  }
  v27 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v27 + 16LL))(v27);
  }
LABEL_35:
  if ( string )
    WindowsDeleteString(string);
}
