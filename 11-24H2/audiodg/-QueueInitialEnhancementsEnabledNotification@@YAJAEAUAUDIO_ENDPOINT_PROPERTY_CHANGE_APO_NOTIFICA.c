/*
 * XREFs of ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14004EAC4
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
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
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
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v14);
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 403LL;
LABEL_5:
    v8 = v6;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v8);
    goto LABEL_17;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 2;
  if ( !*(_QWORD *)a1 )
  {
    v6 = -2147467261;
    v7 = 408LL;
    goto LABEL_5;
  }
  v9 = wil::com_copy_to_nothrow<IMMDevice,IMMDevice * &>((__int64 *)a1, (_QWORD *)v4 + 1);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = (unsigned int)v9;
    v7 = 409LL;
    goto LABEL_6;
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
    v11 = 412LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v10);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
    goto LABEL_17;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v18 + 40LL))(v18, 0LL, v4 + 4);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 413LL;
    goto LABEL_11;
  }
  if ( *((_QWORD *)v4 + 2) )
    CAPOProcessingHostObject::QueueNotification(a2, v13);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
  v6 = 0;
LABEL_17:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
