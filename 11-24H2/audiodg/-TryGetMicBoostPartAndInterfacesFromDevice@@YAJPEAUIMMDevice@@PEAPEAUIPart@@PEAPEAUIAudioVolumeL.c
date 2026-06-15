/*
 * XREFs of ?TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeLevel@@PEAPEAUIAudioMute@@@Z @ 0x140060880
 * Callers:
 *     ?RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z @ 0x1400607C8 (-RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z.c)
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400629DC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1400268A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TryGetMicBoostPartAndInterfacesFromDevice(
        struct IMMDevice *a1,
        struct IPart **a2,
        struct IAudioVolumeLevel **a3,
        struct IAudioMute **a4)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, void **); // rdi
  int v18; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64, GUID *, struct IAudioVolumeLevel **); // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64, GUID *, struct IAudioMute **); // rdi
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  struct IPart *v29; // rdi
  struct IAudioVolumeLevel *v30; // rax
  struct IAudioMute *v31; // rax
  __int64 v32; // [rsp+38h] [rbp-49h] BYREF
  int v33[2]; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMute *v34; // [rsp+48h] [rbp-39h] BYREF
  struct IAudioVolumeLevel *v35; // [rsp+50h] [rbp-31h] BYREF
  __int64 v36; // [rsp+58h] [rbp-29h] BYREF
  void *v37; // [rsp+60h] [rbp-21h] BYREF
  int v38[2]; // [rsp+68h] [rbp-19h] BYREF
  int v39; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v40[28]; // [rsp+7Ch] [rbp-5h]
  _OWORD v41[2]; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned int v43; // [rsp+E8h] [rbp+67h] BYREF

  lpVtbl = a1->lpVtbl;
  *(_QWORD *)v38 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, int *))lpVtbl->Activate)(
         a1,
         &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
         1LL,
         0LL,
         v38);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v8);
LABEL_35:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v38);
    return v9;
  }
  *(_OWORD *)v40 = 0LL;
  v39 = 64;
  *(GUID *)&v40[12] = GUID_73647561_0000_0010_8000_00aa00389b71;
  v41[0] = GUID_00000001_0000_0010_8000_00aa00389b71;
  v41[1] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  *(_QWORD *)v33 = 0LL;
  v10 = **(_QWORD **)v38;
  *(_QWORD *)v33 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD, int *))(v10 + 24))(
          *(_QWORD *)v38,
          &v39,
          64LL,
          0LL,
          v33);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 22LL;
    goto LABEL_5;
  }
  v43 = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v33 + 24LL))(*(_QWORD *)v33, &v43);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 25LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v11);
LABEL_34:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v33);
    goto LABEL_35;
  }
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v13 = 0;
  if ( !v43 )
  {
LABEL_14:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v33);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v38);
    return 2147500033LL;
  }
  while ( 1 )
  {
    v32 = 0LL;
    v14 = **(_QWORD **)v33;
    v32 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(v14 + 32))(*(_QWORD *)v33, v13, &v32);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_33;
    }
    v37 = 0LL;
    v16 = v32;
    v17 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v32 + 24LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v37,
      0LL);
    v18 = v17(v16, &v37);
    v9 = v18;
    if ( v18 < 0 )
    {
      v23 = 36LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v18);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v37);
LABEL_33:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
      goto LABEL_34;
    }
    if ( v37 && !(unsigned int)_o__wcsicmp(L"Microphone Boost", v37) )
      break;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v37);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
    if ( ++v13 >= v43 )
      goto LABEL_14;
  }
  v20 = v32;
  v21 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct IAudioVolumeLevel **))(*(_QWORD *)v32 + 104LL);
  v22 = (__int64)v35;
  v35 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v18 = v21(v20, 23LL, &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc, &v35);
  v9 = v18;
  if ( v18 < 0 )
  {
    v23 = 40LL;
    goto LABEL_19;
  }
  v24 = v32;
  v25 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct IAudioMute **))(*(_QWORD *)v32 + 104LL);
  v26 = (__int64)v34;
  v34 = 0LL;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v27 = v25(v24, 23LL, &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e, &v34);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v27);
  v28 = v32;
  if ( v32 )
  {
    v36 = v32;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    v29 = (struct IPart *)v28;
  }
  else
  {
    v36 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v37);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
  if ( !v28 )
    goto LABEL_14;
  if ( a2 )
  {
    v36 = 0LL;
    *a2 = v29;
  }
  v30 = v35;
  v35 = 0LL;
  *a3 = v30;
  v31 = v34;
  v34 = 0LL;
  *a4 = v31;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v33);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v38);
  return 0LL;
}
