/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140050178
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026438 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001AADC (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CF70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14002147C (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002253C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140039CA0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z @ 0x140045C38 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z.c)
 *     ?AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z @ 0x14004B848 (-AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  HRESULT v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int *v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // rax
  _DWORD *v24; // rbx
  __int64 v25; // rdx
  int v26; // eax
  void *v27; // rax
  __int64 v28; // r9
  __int64 (__fastcall **v29)(_QWORD, _QWORD, _QWORD); // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 (__fastcall **v33)(_QWORD, _QWORD, _QWORD); // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _DWORD *v40; // rax
  CEndpointInstance *v41; // rsi
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, _DWORD **); // rdi
  int v44; // eax
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // r8d
  __int64 v49; // [rsp+90h] [rbp-80h] BYREF
  __int64 v50; // [rsp+98h] [rbp-78h] BYREF
  struct IAudioEndpointRT *v51; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD *v52; // [rsp+A8h] [rbp-68h] BYREF
  __int64 (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp-60h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-50h] BYREF
  _DWORD *v56; // [rsp+C8h] [rbp-48h] BYREF
  int v57[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v58[2]; // [rsp+D8h] [rbp-38h] BYREF
  int v59; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-28h] BYREF
  char v61; // [rsp+F1h] [rbp-1Fh]
  __int128 v62; // [rsp+F8h] [rbp-18h] BYREF
  _DWORD *v63; // [rsp+108h] [rbp-8h]
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v65[2]; // [rsp+200h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+148h]

  v4 = AudioDgTelemetryProvider::Provider((__int64)a1);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "EndpointInstance_CreateDeviceEndpointInstance", 0LL);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq_EtwEventWriteTransfer(v6, v5, *((const wchar_t **)a1 + 7), *((_DWORD *)a1 + 25));
  v61 = 1;
  v50 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  if ( *((_DWORD *)a1 + 25) != 1 )
  {
    ppv = 0LL;
    v14 = CoCreateInstance(
            &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
            0LL,
            0x17u,
            &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
            &ppv);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v14);
LABEL_16:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
      goto LABEL_10;
    }
    v53 = 0LL;
    v15 = *(_QWORD *)ppv;
    v53 = 0LL;
    v16 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(v15 + 40))(ppv, *((_QWORD *)a1 + 7), &v53);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v16);
LABEL_19:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v53);
      goto LABEL_16;
    }
    v55 = 0LL;
    v17 = (**v53)(v53, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v55);
    v8 = v17;
    if ( v17 < 0 )
    {
      v18 = (unsigned int)v17;
      v19 = 95LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)v18);
LABEL_23:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v55);
      goto LABEL_19;
    }
    if ( !v55 )
    {
      v8 = -2147024809;
      v18 = 2147942487LL;
      v19 = 96LL;
      goto LABEL_22;
    }
    v20 = (unsigned int *)*((_QWORD *)a1 + 1);
    v62 = 0LL;
    v63 = 0LL;
    LOWORD(v62) = 65;
    v52 = 0LL;
    v56 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55);
    v22 = *((unsigned __int16 *)v20 + 8);
    if ( v21 )
    {
      v27 = CoTaskMemAlloc(v22 + 32);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v52,
        v27);
      v24 = v52;
      if ( !v52 )
      {
        v25 = 126LL;
        goto LABEL_32;
      }
      *v52 = *((unsigned __int16 *)v20 + 8) + 32;
      v24[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      v24[2] = *((_DWORD *)a1 + 25);
      memcpy_0(v24 + 3, v20, *((unsigned __int16 *)v20 + 8) + 18LL);
      v26 = *((unsigned __int16 *)v20 + 8) + 32;
    }
    else
    {
      v23 = CoTaskMemAlloc(v22 + 64);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v56,
        v23);
      v24 = v56;
      if ( !v56 )
      {
        v25 = 111LL;
LABEL_32:
        v8 = -2147024882;
        v28 = 2147942414LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)v28);
LABEL_34:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v56,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v52,
          0LL);
        goto LABEL_23;
      }
      *v56 = *((unsigned __int16 *)v20 + 8) + 64;
      v24[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      v24[2] = *((_DWORD *)a1 + 25);
      *(_OWORD *)(v24 + 3) = *(_OWORD *)((char *)a1 + 104);
      *(_OWORD *)(v24 + 7) = *(_OWORD *)((char *)a1 + 148);
      memcpy_0(v24 + 11, v20, *((unsigned __int16 *)v20 + 8) + 18LL);
      v26 = *((unsigned __int16 *)v20 + 8) + 64;
    }
    v63 = v24;
    DWORD2(v62) = v26;
    if ( !*((_DWORD *)a1 + 18) )
    {
      *(_QWORD *)v57 = 0LL;
      v29 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v53;
      *(_QWORD *)v57 = 0LL;
      v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64, __int128 *, int *))v29[3])(
              v53,
              &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
              1LL,
              &v62,
              v57);
      v8 = v30;
      if ( v30 < 0 )
      {
        v31 = 147LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v30);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v57);
        goto LABEL_34;
      }
      v32 = v49;
      v49 = 0LL;
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v30 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v57)(
              *(_QWORD *)v57,
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &v49);
      v8 = v30;
      if ( v30 < 0 )
      {
        v31 = 149LL;
        goto LABEL_39;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v57);
LABEL_53:
      AEWMILOG_ENDPOINT_ACTIVATION(
        *((_DWORD *)a1 + 20) != 0,
        0LL,
        *((unsigned __int16 *)v20 + 7),
        *(unsigned __int16 *)v20,
        *((_DWORD *)a1 + 34),
        *((_DWORD *)a1 + 25),
        *((_DWORD *)a1 + 18),
        *((_DWORD *)a1 + 35),
        *(unsigned __int16 *)v20,
        v20[1],
        *((unsigned __int16 *)v20 + 7),
        *((unsigned __int16 *)v20 + 1),
        *((_DWORD *)a1 + 8),
        *((_DWORD *)a1 + 19),
        *((_DWORD *)a1 + 20) != 0,
        *((_DWORD *)a1 + 24),
        0);
      wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)&v51);
      v37 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v49)(
              v49,
              &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
              &v51);
      v8 = v37;
      if ( v37 >= 0 )
      {
        v38 = v50;
        v50 = 0LL;
        if ( v38 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        v39 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 *))v51->lpVtbl->QueryInterface)(
                v51,
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                &v50);
        v8 = v39;
        if ( v39 >= 0 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v56,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v52,
            0LL);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v55);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v53);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
          goto LABEL_60;
        }
        v28 = (unsigned int)v39;
        v25 = 185LL;
      }
      else
      {
        v28 = (unsigned int)v37;
        v25 = 182LL;
      }
      goto LABEL_33;
    }
    *(_QWORD *)v58 = 0LL;
    v33 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v53;
    *(_QWORD *)v58 = 0LL;
    v34 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64, __int128 *, int *))v33[3])(
            v53,
            &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
            1LL,
            &v62,
            v58);
    v8 = v34;
    if ( v34 >= 0 )
    {
      v36 = v49;
      v49 = 0LL;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v34 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v58)(
              *(_QWORD *)v58,
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &v49);
      v8 = v34;
      if ( v34 >= 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v58);
        goto LABEL_53;
      }
      v35 = 162LL;
    }
    else
    {
      v35 = 160LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v34);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v58);
    goto LABEL_34;
  }
  v7 = *((_QWORD *)a1 + 8);
  if ( !v7 )
  {
    v8 = -2147024809;
    v9 = 2147942487LL;
    v10 = 73LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v9);
    goto LABEL_10;
  }
  v50 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v49 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v50)(
          v50,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v49);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 79LL;
LABEL_8:
    v9 = (unsigned int)v11;
    goto LABEL_9;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)&v51);
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v50)(
          v50,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v51);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 82LL;
    goto LABEL_8;
  }
LABEL_60:
  v59 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 40LL))(v49, &v59);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 190LL;
    goto LABEL_8;
  }
  if ( v59 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 48LL))(v50, 0x40000LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      v10 = 196LL;
      goto LABEL_8;
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v49 + 24LL))(
          v49,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 203LL;
    goto LABEL_8;
  }
  v40 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v52 = v40;
  if ( v40 )
    v41 = CEndpointInstance::CEndpointInstance((CEndpointInstance *)v40, (struct IUnknown *)v51, *((_QWORD *)a1 + 4));
  else
    v41 = 0LL;
  v65[0] = v41;
  if ( !v41 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_10;
  }
  v60 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v50)(v50, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63, &v60) >= 0 )
  {
    v52 = 0LL;
    v42 = v60;
    v43 = *(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v60 + 64LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)&v52,
      0LL);
    v44 = v43(v42, &v52);
    v8 = v44;
    if ( v44 < 0 )
    {
      v45 = 221LL;
LABEL_75:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v44);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v52);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v60);
      CEndpointInstance::`scalar deleting destructor'(v41);
LABEL_10:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v49);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v51);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v50);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v12,
          (unsigned int)&CreateDeviceEndpointInstance_Task_Stop,
          v13,
          1,
          (__int64)v65);
      goto LABEL_82;
    }
    v56 = v52;
    v44 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
            (_QWORD *)v41 + 2,
            (void **)&v56);
    v8 = v44;
    if ( v44 < 0 )
    {
      v45 = 224LL;
      goto LABEL_75;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v52);
  }
  *a2 = v41;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v60);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v49);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v51);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v50);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v46,
      (unsigned int)&CreateDeviceEndpointInstance_Task_Stop,
      v47,
      1,
      (__int64)v65);
  v8 = 0;
LABEL_82:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v8;
}
