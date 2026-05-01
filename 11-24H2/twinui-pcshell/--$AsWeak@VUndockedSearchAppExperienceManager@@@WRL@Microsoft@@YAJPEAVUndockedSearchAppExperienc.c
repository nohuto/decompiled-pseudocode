/*
 * XREFs of ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x180187508
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802439A0 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180246068 (-RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180246134 (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x1803AF57C (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IImmersiveWindowMessageNotificat.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x1803AF64C (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@S.c)
 *     ?RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BF324 (-RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017E080 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::QueryInterface(
         a1,
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &v11);
  if ( v3 < 0 )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    return (unsigned int)v3;
  }
  else
  {
    v10 = 0LL;
    v4 = v11;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    if ( v5 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)v5;
    }
    else
    {
      v6 = v10;
      v7 = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v6 = v10;
      }
      v8 = *a2;
      *a2 = v7;
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v6 = v10;
      }
      if ( v6 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return 0LL;
    }
  }
}
