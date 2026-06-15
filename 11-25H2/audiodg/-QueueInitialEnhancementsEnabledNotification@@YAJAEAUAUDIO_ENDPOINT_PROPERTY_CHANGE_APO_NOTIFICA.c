/*
 * XREFs of ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013774
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008444 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z @ 0x1400497FC (--$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall QueueInitialEnhancementsEnabledNotification(
        struct AUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = 0;
  v14[0] = v4;
  v14[1] = &v17;
  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009DE00;
  *((_QWORD *)v5 + 2) = v4;
  v13[0] = (__int64)v4;
  v13[1] = (__int64)v5;
  v15 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___(v14);
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 402LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v7);
    goto LABEL_14;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 2;
  v9 = wil::com_copy_to_nothrow<IMMDevice,IMMDevice * &>(a1, v4 + 2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 407LL;
    goto LABEL_5;
  }
  *(PROPERTYKEY *)(v4 + 6) = PKEY_AudioEndpoint_Disable_SysFx;
  v18 = 0LL;
  v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
          *(_QWORD *)a1,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v18);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 410LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v10);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
    goto LABEL_14;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v18 + 40LL))(v18, 0LL, v4 + 4);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 411LL;
    goto LABEL_8;
  }
  if ( *((_QWORD *)v4 + 2) )
    CAPOProcessingHostObject::QueueNotification(a2, v13);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
  v6 = 0;
LABEL_14:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
