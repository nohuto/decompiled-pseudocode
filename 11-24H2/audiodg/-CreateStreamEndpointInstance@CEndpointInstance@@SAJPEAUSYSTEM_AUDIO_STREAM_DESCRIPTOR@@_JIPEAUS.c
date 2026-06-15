/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400406D8
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140040600 (-CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGr.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400226B8 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x140042374 (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z @ 0x140045938 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z.c)
 *     CreateCrossProcessServerEndpoint @ 0x140054FE0 (CreateCrossProcessServerEndpoint.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        __int64 a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  __int64 v10; // r13
  BOOL v11; // r15d
  int v12; // ebx
  unsigned int v13; // r11d
  __int64 v14; // rdx
  unsigned int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rdx
  HRESULT Instance; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // r9d
  int CrossProcessServerEndpoint; // eax
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 *p_pvData; // rcx
  int v32; // r15d
  __int64 v33; // rdx
  _QWORD *v34; // r9
  __int64 *v35; // rcx
  int v36; // r9d
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  BOOL v40; // ebx
  CEndpointInstance *v41; // rax
  struct CEndpointInstance *v42; // rax
  DWORD pcbData[4]; // [rsp+88h] [rbp-31h] BYREF
  LPVOID v45; // [rsp+98h] [rbp-21h] BYREF
  struct IAudioEndpointRT *v46; // [rsp+A0h] [rbp-19h] BYREF
  LPVOID ppv[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-1h] BYREF
  GUID v49; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  const unsigned __int16 *pvData; // [rsp+108h] [rbp+4Fh] BYREF

  v10 = *((_QWORD *)a1 + 16);
  v11 = *(_DWORD *)a1 != 0;
  LODWORD(pvData) = 0;
  v12 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(
          a2,
          *(_DWORD *)(v10 + 8),
          *(unsigned __int16 *)(v10 + 12),
          (unsigned int *)&pvData);
  if ( v12 < 0 )
  {
    v14 = 290LL;
LABEL_64:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( (unsigned int)pvData + a3 < (unsigned int)pvData )
  {
    v14 = 291LL;
    goto LABEL_63;
  }
  LODWORD(pvData) = 0;
  v12 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*((_QWORD *)a1 + 3), *(_DWORD *)(v10 + 8), v13, (unsigned int *)&pvData);
  if ( v12 < 0 )
  {
    v14 = 295LL;
    goto LABEL_64;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v17 = (unsigned int)pvData;
  }
  else
  {
    v17 = (unsigned int)pvData;
    if ( v15 > (unsigned int)pvData )
      v17 = v15;
  }
  v18 = v17 * v16;
  if ( (unsigned __int64)(v17 * v16) > 0xFFFFFFFF )
  {
    v14 = 304LL;
LABEL_63:
    v12 = -2147024362;
    goto LABEL_64;
  }
  pvData = (const unsigned __int16 *)*((_QWORD *)a1 + 2);
  ppv[0] = 0LL;
  v19 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (*((_DWORD *)a1 + 34) & 0x40000) == 0 )
  {
LABEL_20:
    v20 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    goto LABEL_21;
  }
  if ( *((_QWORD *)a1 + 10) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
  {
    v20 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( *((_QWORD *)a1 + 11) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
LABEL_21:
      if ( *((_QWORD *)a1 + 8) == v19 && *((_QWORD *)a1 + 9) == v20 )
      {
        v45 = 0LL;
        v23 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
                (CCrossProcessMemoryManager **)&v45,
                &pvData);
        v12 = v23;
        if ( v23 < 0 )
        {
          v24 = 328LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
            (const char *)(unsigned int)v23);
LABEL_59:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
          goto LABEL_60;
        }
      }
      else
      {
        v45 = 0LL;
        v23 = CoCreateInstance((const IID *const)a1 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v45);
        v12 = v23;
        if ( v23 < 0 )
        {
          v24 = 322LL;
          goto LABEL_25;
        }
        v23 = (*(__int64 (__fastcall **)(LPVOID, char *))(*(_QWORD *)v45 + 24LL))(v45, (char *)a1 + 96);
        v12 = v23;
        if ( v23 < 0 )
        {
          v24 = 323LL;
          goto LABEL_25;
        }
      }
      v46 = 0LL;
      if ( v11 )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)&v46);
        v48 = *((_OWORD *)a1 + 3);
        *(GUID *)pcbData = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
        CrossProcessServerEndpoint = CreateCrossProcessServerEndpoint(
                                       (unsigned int)pcbData,
                                       (unsigned int)&v48,
                                       *((_DWORD *)a1 + 78),
                                       v25,
                                       (__int64)&v46);
        v12 = CrossProcessServerEndpoint;
        if ( CrossProcessServerEndpoint < 0 )
        {
          v27 = (unsigned int)CrossProcessServerEndpoint;
          v28 = 384LL;
LABEL_57:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v28,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
            (const char *)v27);
          goto LABEL_58;
        }
        pvData = 0LL;
        v29 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, const unsigned __int16 **))v46->lpVtbl->QueryInterface)(
                v46,
                &GUID_497dee26_e484_456d_9349_60b89142d65e,
                &pvData);
        v12 = v29;
        if ( v29 < 0 )
        {
          v30 = 387LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
            (const char *)(unsigned int)v29);
          p_pvData = (__int64 *)&pvData;
LABEL_36:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(p_pvData);
LABEL_58:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
          goto LABEL_59;
        }
        v32 = 0;
        v33 = *((_QWORD *)a1 + 31);
        v34 = (_QWORD *)((char *)a1 + 264);
        if ( v33 || *v34 )
          v32 = (int)((double)(int)*((_QWORD *)a1 + 32) * (double)*(int *)(v10 + 4) / 10000000.0 + 0.5);
        v29 = (*(__int64 (__fastcall **)(const unsigned __int16 *, __int64, _QWORD, _QWORD, int, _DWORD, _DWORD, __int64, _QWORD, _DWORD, LPVOID, LPVOID, struct ICrossProcessMemory **, struct ICrossProcessEvent **))(*(_QWORD *)pvData + 24LL))(
                pvData,
                v10,
                v18,
                a3,
                v32,
                *((_DWORD *)a1 + 3),
                *((_DWORD *)a1 + 34),
                v33,
                *v34,
                0,
                v45,
                ppv[0],
                a5,
                a6);
        v12 = v29;
        if ( v29 < 0 )
        {
          v30 = 409LL;
          goto LABEL_35;
        }
        *(GUID *)a4 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
        *((_DWORD *)a4 + 234) = 0;
        *((_DWORD *)a4 + 4) = v18;
        v35 = (__int64 *)&pvData;
LABEL_53:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v35);
        v41 = (CEndpointInstance *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        *(_QWORD *)pcbData = v41;
        if ( v41 )
        {
          v42 = CEndpointInstance::CEndpointInstance(v41, v46, 0LL);
          if ( v42 )
          {
            *a7 = v42;
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
            v12 = 0;
            goto LABEL_60;
          }
        }
        v12 = -2147024882;
        v28 = 428LL;
        v27 = 2147942414LL;
        goto LABEL_57;
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)&v46);
      *(_OWORD *)pcbData = *((_OWORD *)a1 + 3);
      v49 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
      v37 = CreateCrossProcessServerEndpoint(
              (unsigned int)&v49,
              (unsigned int)pcbData,
              *((_DWORD *)a1 + 78),
              v36,
              (__int64)&v46);
      v12 = v37;
      if ( v37 < 0 )
      {
        v27 = (unsigned int)v37;
        v28 = 337LL;
        goto LABEL_57;
      }
      *(_QWORD *)&v48 = 0LL;
      v38 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int128 *))v46->lpVtbl->QueryInterface)(
              v46,
              &GUID_497dee26_e484_456d_9349_60b89142d65e,
              &v48);
      v12 = v38;
      if ( v38 >= 0 )
      {
        v40 = 0;
        if ( *((_DWORD *)a1 + 74) == 2 )
        {
          LODWORD(pvData) = 0;
          pcbData[0] = 4;
          RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"SuppressBridgeTargetGlitchLogging",
            0x18u,
            0LL,
            &pvData,
            pcbData);
          v40 = (_DWORD)pvData != 0;
        }
        v38 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, BOOL, LPVOID, LPVOID, struct ICrossProcessMemory **, struct ICrossProcessEvent **))(*(_QWORD *)v48 + 24LL))(
                v48,
                v10,
                v18,
                a3,
                0,
                *((_DWORD *)a1 + 3),
                *((_DWORD *)a1 + 34),
                0LL,
                0LL,
                v40,
                v45,
                ppv[0],
                a5,
                a6);
        v12 = v38;
        if ( v38 >= 0 )
        {
          *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
          *((_DWORD *)a4 + 234) = 0;
          *((_DWORD *)a4 + 4) = v18;
          v35 = (__int64 *)&v48;
          goto LABEL_53;
        }
        v39 = 372LL;
      }
      else
      {
        v39 = 340LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v39,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v38);
      p_pvData = (__int64 *)&v48;
      goto LABEL_36;
    }
  }
  ppv[0] = 0LL;
  Instance = CoCreateInstance((const IID *const)a1 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, ppv);
  v12 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, char *))(*(_QWORD *)ppv[0] + 24LL))(ppv[0], (char *)a1 + 96);
    v12 = Instance;
    if ( Instance < 0 )
    {
      v22 = 314LL;
      goto LABEL_18;
    }
    v19 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    goto LABEL_20;
  }
  v22 = 313LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)(unsigned int)Instance);
LABEL_60:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)ppv);
  return (unsigned int)v12;
}
