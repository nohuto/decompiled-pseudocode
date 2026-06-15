/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004D7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400295C0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14004DC24 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050BB0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x140065A40 (WPP_SF_.c)
 *     ??$QueryInterface@UIAudioLfxControl@@@?$CComPtrBase@UIAudioEndpoint@@@ATL@@QEBAJPEAPEAUIAudioLfxControl@@@Z @ 0x14006ED20 (--$QueryInterface@UIAudioLfxControl@@@-$CComPtrBase@UIAudioEndpoint@@@ATL@@QEBAJPEAPEAUIAudioLfx.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x14009801C (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int128 v8; // xmm0
  int v9; // eax
  unsigned int v10; // edi
  void *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int8 v13; // r8
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // r14d
  void *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int8 v19; // r8
  int v21; // eax
  void *v22; // rdx
  unsigned int v23; // ecx
  unsigned __int8 v24; // r8
  int v25; // eax
  void *v26; // rdx
  unsigned int v27; // ecx
  unsigned __int8 v28; // r8
  int v29; // eax
  void *v30; // rdx
  unsigned int v31; // ecx
  unsigned __int8 v32; // r8
  __int64 v33; // rax
  int v34; // eax
  void *v35; // rdx
  unsigned int v36; // ecx
  unsigned __int8 v37; // r8
  void *v38; // rdx
  unsigned int v39; // ecx
  unsigned __int8 v40; // r8
  void *v41; // rdx
  unsigned int v42; // ecx
  unsigned __int8 v43; // r8
  unsigned __int64 v44; // [rsp+20h] [rbp-50h]
  unsigned __int64 v45; // [rsp+28h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+30h] [rbp-40h] BYREF
  __int64 v47[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v48; // [rsp+48h] [rbp-28h]
  __int128 v49; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v8 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 104) = v8;
  v48 = v8;
  v49 = v8;
  EtwEventActivityIdControl(4LL, &v49);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v46 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  *((_DWORD *)this + 20) = a4;
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_73715f9ee22d38db1d35d5de395f8c05_Traceguids);
  }
  v9 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  v10 = v9;
  if ( v9 == -2005139360
    || v9 == -2005139389
    || v9 == -2005139364
    || v9 == -2005139363
    || v9 == -2005139362
    || v9 == -2005139361 )
  {
    v10 = -2005139370;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)0x887C0056LL);
    if ( this != (CSystemAudioDeviceOffloadGraph *)-40LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 1);
    EtwEventActivityIdControl(4LL, &v49);
    CSystemAudioDeviceSharedBase::Cleanup(this);
    AEWMILOG_PERFORMANCE(v42, v41, v43, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return v10;
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v9);
    CSAutoLock<1>::~CSAutoLock<1>(&v46);
    EtwEventActivityIdControl(4LL, &v49);
    CSystemAudioDeviceSharedBase::Cleanup(this);
    AEWMILOG_PERFORMANCE(v12, v11, v13, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return v10;
  }
  v14 = (_QWORD *)((char *)this + 88);
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
          (char *)this + 304);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v15);
    CSAutoLock<1>::~CSAutoLock<1>(&v46);
    EtwEventActivityIdControl(4LL, &v49);
    CSystemAudioDeviceSharedBase::Cleanup(this);
    AEWMILOG_PERFORMANCE(v18, v17, v19, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return v16;
  }
  v21 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v14)(
          *v14,
          &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
          (char *)this + 312);
  v16 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v21);
    CSAutoLock<1>::~CSAutoLock<1>(&v46);
    EtwEventActivityIdControl(4LL, &v49);
    CSystemAudioDeviceSharedBase::Cleanup(this);
    AEWMILOG_PERFORMANCE(v23, v22, v24, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return v16;
  }
  v25 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v14)(
          *v14,
          &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
          (char *)this + 320);
  v16 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v25);
    CSAutoLock<1>::~CSAutoLock<1>(&v46);
    EtwEventActivityIdControl(4LL, &v49);
    CSystemAudioDeviceSharedBase::Cleanup(this);
    AEWMILOG_PERFORMANCE(v27, v26, v28, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return v16;
  }
  v29 = ATL::CComPtrBase<IAudioEndpoint>::QueryInterface<IAudioLfxControl>((char *)this + 88, (char *)this + 328);
  v16 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v29);
    CSAutoLock<1>::~CSAutoLock<1>(&v46);
    EtwEventActivityIdControl(4LL, &v49);
    CSystemAudioDeviceSharedBase::Cleanup(this);
    AEWMILOG_PERFORMANCE(v31, v30, v32, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return v16;
  }
  v33 = *v14;
  *v14 = 0LL;
  *((_QWORD *)a2 + 8) = v33;
  v34 = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
  v10 = v34;
  if ( v34 >= 0 )
  {
    v47[0] = *((_QWORD *)a2 + 8);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v47);
    CSAutoLock<1>::~CSAutoLock<1>(&v46);
    EtwEventActivityIdControl(4LL, &v49);
    AEWMILOG_PERFORMANCE(v39, v38, v40, 0xAu, v44, v45);
    PublishDeviceGraphWnfState();
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
    (const char *)(unsigned int)v34);
  v47[0] = *((_QWORD *)a2 + 8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v47);
  CSAutoLock<1>::~CSAutoLock<1>(&v46);
  EtwEventActivityIdControl(4LL, &v49);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  AEWMILOG_PERFORMANCE(v36, v35, v37, 0xAu, v44, v45);
  PublishDeviceGraphWnfState();
  return v10;
}
