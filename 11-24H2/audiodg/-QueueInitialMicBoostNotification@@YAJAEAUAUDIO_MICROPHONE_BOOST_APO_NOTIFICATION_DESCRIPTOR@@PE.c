/*
 * XREFs of ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400629DC
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400321EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z @ 0x1400494FC (--$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeLevel@@PEAPEAUIAudioMute@@@Z @ 0x140060880 (-TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall QueueInitialMicBoostNotification(
        struct AUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR *a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  struct IAudioVolumeLevelVtbl *v4; // rsi
  struct IAudioVolumeLevel *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  struct IAudioVolumeLevel *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  struct IAudioMute *v13; // rcx
  __int64 v15[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IAudioMute *v19; // [rsp+A0h] [rbp+40h] BYREF
  struct IAudioVolumeLevel *v20; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (struct IAudioVolumeLevelVtbl *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  LOBYTE(v19) = 0;
  v16[0] = v4;
  v16[1] = &v19;
  v5 = (struct IAudioVolumeLevel *)operator new(0x18uLL);
  v20 = v5;
  *(_OWORD *)&v5->lpVtbl = 0LL;
  LODWORD(v5[1].lpVtbl) = 1;
  HIDWORD(v5[1].lpVtbl) = 1;
  v5->lpVtbl = (struct IAudioVolumeLevelVtbl *)off_14009EFF8;
  v5[2].lpVtbl = v4;
  v15[0] = (__int64)v4;
  v15[1] = (__int64)v5;
  v17 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v16);
  if ( v4 )
  {
    memset_0(v4, 0, sizeof(struct IAudioVolumeLevelVtbl));
    LODWORD(v4->QueryInterface) = 6;
    v9 = wil::com_copy_to_nothrow<IMMDevice,IMMDevice * &>((__int64 *)a1, &v4->AddRef);
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 431LL;
      goto LABEL_5;
    }
    v19 = 0LL;
    v20 = 0LL;
    if ( (int)TryGetMicBoostPartAndInterfacesFromDevice(*(struct IMMDevice **)a1, 0LL, &v20, &v19) >= 0 )
    {
      LODWORD(v4->GetLevelRange) = 1;
      v10 = v20;
      v11 = ((__int64 (__fastcall *)(struct IAudioVolumeLevel *, _QWORD, char *))v20->lpVtbl->GetLevel)(
              v20,
              0LL,
              (char *)&v4->GetLevelRange + 4);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 437LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v11);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v19);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
        goto LABEL_16;
      }
      v11 = ((__int64 (__fastcall *)(struct IAudioVolumeLevel *, _QWORD, HRESULT (__stdcall **)(IAudioVolumeLevel *, UINT, float *), __int64, HRESULT (__stdcall **)(IAudioVolumeLevel *, UINT, float, LPCGUID)))v10->lpVtbl->GetLevelRange)(
              v10,
              0LL,
              &v4->GetLevel,
              (__int64)&v4->GetLevel + 4,
              &v4->SetLevel);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 438LL;
        goto LABEL_9;
      }
      v13 = v19;
      if ( v19 )
      {
        HIDWORD(v4->SetLevel) = 1;
        v11 = ((__int64 (__fastcall *)(struct IAudioMute *, HRESULT (__stdcall **)(IAudioVolumeLevel *, float, LPCGUID)))v13->lpVtbl->GetMute)(
                v13,
                &v4->SetLevelUniform);
        v6 = v11;
        if ( v11 < 0 )
        {
          v12 = 442LL;
          goto LABEL_9;
        }
      }
    }
    CAPOProcessingHostObject::QueueNotification(a2, v15);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v19);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
    v6 = 0;
    goto LABEL_16;
  }
  v6 = -2147024882;
  v7 = 2147942414LL;
  v8 = 426LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)v7);
LABEL_16:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
