/*
 * XREFs of ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140041008
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140040900 (-CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGr.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400229B8 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x140042674 (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     ??$copy_to@UICrossProcessEvent@@@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessEvent@@@Z @ 0x140042F08 (--$copy_to@UICrossProcessEvent@@@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z @ 0x140045C38 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     CreateSpatialCrossProcessEndpointRT @ 0x14008CAD0 (CreateSpatialCrossProcessEndpointRT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        __int64 a2,
        int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  __int64 v9; // r12
  int v10; // edi
  int v11; // ebx
  int v12; // r10d
  unsigned int v13; // r11d
  __int64 v14; // rdx
  unsigned int v15; // r10d
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // r15
  HRESULT v20; // eax
  __int64 v21; // rdx
  LPVOID v22; // rbx
  __int64 (__fastcall *v23)(LPVOID, __int64 *); // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  struct IAudioEndpointRT *v29; // rbx
  int v30; // edi
  __int64 v31; // rdx
  CEndpointInstance *v32; // rax
  CEndpointInstance *v33; // rax
  LPVOID v35; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioEndpointRT *v36; // [rsp+38h] [rbp-C8h] BYREF
  const unsigned __int16 *v37; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  struct ICrossProcessMemory **v41; // [rsp+60h] [rbp-A0h]
  struct CEndpointInstance **v42; // [rsp+68h] [rbp-98h]
  struct ICrossProcessEvent **v43; // [rsp+70h] [rbp-90h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  GUID v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B8h] [rbp-48h]
  __int128 v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F4h] [rbp-Ch]
  int v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  LPVOID v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int128 v61; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v40 = a3;
  v41 = a5;
  v43 = a6;
  v42 = a7;
  v9 = *((_QWORD *)a1 + 16);
  v10 = *(_DWORD *)a1;
  LODWORD(v36) = *(_DWORD *)a1;
  LODWORD(v35) = 0;
  v11 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(
          a2,
          *(_DWORD *)(v9 + 8),
          *(unsigned __int16 *)(v9 + 12),
          (unsigned int *)&v35);
  if ( v11 < 0 )
  {
    v14 = 492LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  if ( (int)v35 + v12 < (unsigned int)v35 )
  {
    v11 = -2147024362;
    v14 = 493LL;
    goto LABEL_51;
  }
  LODWORD(v35) = 0;
  v11 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*((_QWORD *)a1 + 3), *(_DWORD *)(v9 + 8), v13, (unsigned int *)&v35);
  if ( v11 < 0 )
  {
    v14 = 497LL;
    goto LABEL_51;
  }
  v16 = (unsigned int)v35;
  if ( *((_DWORD *)a1 + 2) != 1 && v15 > (unsigned int)v35 )
    v16 = v15;
  v37 = (const unsigned __int16 *)*((_QWORD *)a1 + 2);
  v39 = 0LL;
  v17 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *((_QWORD *)a1 + 10) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
  {
    v18 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( *((_QWORD *)a1 + 11) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
      v19 = (char *)a1 + 96;
      goto LABEL_20;
    }
  }
  ppv = 0LL;
  v20 = CoCreateInstance((const IID *const)a1 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &ppv);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 510LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v20);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
    goto LABEL_49;
  }
  v19 = (char *)a1 + 96;
  v20 = (*(__int64 (__fastcall **)(LPVOID, char *))(*(_QWORD *)ppv + 24LL))(ppv, (char *)a1 + 96);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 511LL;
    goto LABEL_18;
  }
  v22 = ppv;
  v23 = *(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 32LL);
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(&v39);
  v20 = v23(v22, &v39);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 512LL;
    goto LABEL_18;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
  v18 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v17 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v10 = (int)v36;
LABEL_20:
  if ( *((_QWORD *)a1 + 8) == v17 && *((_QWORD *)a1 + 9) == v18 )
  {
    v35 = 0LL;
    v24 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
            (CCrossProcessMemoryManager **)&v35,
            &v37);
    v11 = v24;
    if ( v24 < 0 )
    {
      v25 = 525LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v24);
LABEL_48:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
      goto LABEL_49;
    }
  }
  else
  {
    v35 = 0LL;
    v24 = CoCreateInstance((const IID *const)a1 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v35);
    v11 = v24;
    if ( v24 < 0 )
    {
      v25 = 519LL;
      goto LABEL_24;
    }
    v24 = (*(__int64 (__fastcall **)(LPVOID, char *))(*(_QWORD *)v35 + 24LL))(v35, v19);
    v11 = v24;
    if ( v24 < 0 )
    {
      v25 = 520LL;
      goto LABEL_24;
    }
  }
  v36 = 0LL;
  if ( v10 )
  {
    v11 = -2147418113;
    v26 = 2147549183LL;
    v27 = 566LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v26);
LABEL_47:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v36);
    goto LABEL_48;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)&v36);
  v44 = *((_OWORD *)a1 + 3);
  v45 = GUID_6b78656b_c0e1_4190_83ee_ef91c2908926;
  v28 = CreateSpatialCrossProcessEndpointRT(&v45, &v44, &v36);
  v11 = v28;
  if ( v28 < 0 )
  {
    v26 = (unsigned int)v28;
    v27 = 534LL;
    goto LABEL_31;
  }
  v37 = 0LL;
  v29 = v36;
  v30 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, const unsigned __int16 **))v36->lpVtbl->QueryInterface)(
          v36,
          &GUID_51a95308_7091_4c68_9bff_af559a414bea,
          &v37);
  if ( v30 < 0 )
  {
    v31 = 537LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v36);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
    v11 = v30;
    goto LABEL_49;
  }
  memset_0(&v46, 0, 0x98uLL);
  v46 = 152;
  v47 = *((_OWORD *)a1 + 12);
  v48 = *((_OWORD *)a1 + 13);
  v49 = *((_OWORD *)a1 + 14);
  v50 = *((_QWORD *)a1 + 30);
  v51 = 0;
  v52 = *((_QWORD *)a1 + 4);
  if ( v16 * (unsigned __int64)*(unsigned __int16 *)(v9 + 12) > 0xFFFFFFFF )
  {
    v53 = -1;
    v11 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x80070216LL);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
    goto LABEL_47;
  }
  v53 = v16 * *(unsigned __int16 *)(v9 + 12);
  v54 = v40;
  v55 = *((_DWORD *)a1 + 3);
  v56 = v39;
  v58 = 0LL;
  v59 = *((_QWORD *)a1 + 16);
  v60 = *((_QWORD *)a1 + 14);
  v61 = *(_OWORD *)((char *)a1 + 172);
  v57 = v35;
  v30 = (*(__int64 (__fastcall **)(const unsigned __int16 *, int *, struct ICrossProcessMemory **))(*(_QWORD *)v37 + 24LL))(
          v37,
          &v46,
          v41);
  if ( v30 < 0 )
  {
    v31 = 554LL;
    goto LABEL_36;
  }
  *(GUID *)a4 = GUID_9371e7ff_df2d_4962_9585_40424d054550;
  *((_DWORD *)a4 + 234) = 0;
  *((_DWORD *)a4 + 4) = v16 * *(unsigned __int16 *)(v9 + 12);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
  v32 = (CEndpointInstance *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v41 = (struct ICrossProcessMemory **)v32;
  if ( v32 )
    v33 = CEndpointInstance::CEndpointInstance(v32, v29, 0LL);
  else
    v33 = 0LL;
  if ( !v33 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_47;
  }
  v41 = 0LL;
  *v42 = v33;
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::copy_to<ICrossProcessEvent>(&v39, v43);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v36);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
  v11 = 0;
LABEL_49:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v39);
  return (unsigned int)v11;
}
