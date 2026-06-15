/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F470
 * Callers:
 *     <none>
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A6C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FED8 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140013AA4 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014480 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@U1@U?$_tlgWrapSz@G@@U4@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55533AEBU?$_tlgWrapSz@G@@635@Z @ 0x140015FD8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002563C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140026BA8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140027B08 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E5E8 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     _tlgKeywordOn @ 0x140035A14 (_tlgKeywordOn.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140039ED0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003D13C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?NewNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCChildSubmixInstance@@PEAV312@1@Z @ 0x14003D844 (-NewNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140041C4C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x140043B54 (--$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v5; // r13
  CAudioDeviceGraph *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  unsigned __int16 *v13; // r12
  int DeviceGraphObjectCacheManager; // eax
  __int64 v15; // rdx
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct IUnknown **v23; // r14
  int v24; // eax
  struct IUnknown *v25; // rcx
  struct _RTL_CRITICAL_SECTION *v26; // rbx
  struct _LIST_ENTRY *v27; // rdi
  __int64 v28; // rcx
  const struct _tlgProvider_t *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  int Instance; // eax
  struct IUnknown *v34; // rcx
  CPipeInstance *v35; // rcx
  __int64 v36; // rcx
  struct IUnknown *v37; // rcx
  int v38; // eax
  CPipeInstance *v39; // rcx
  __int64 v40; // rcx
  struct IUnknown *v41; // rcx
  int v42; // eax
  CPipeInstance *v43; // rcx
  __int64 v44; // rcx
  struct IUnknown *v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  CPipeInstance *v50; // rcx
  __int64 v51; // rcx
  struct IUnknown *v52; // rcx
  __int64 v53; // rcx
  int v54; // eax
  CPipeInstance *v55; // rcx
  __int64 v56; // rcx
  struct IUnknown *v57; // rcx
  __int64 v58; // rcx
  HRESULT v59; // eax
  CPipeInstance *v60; // rcx
  __int64 v61; // rcx
  struct IUnknown *v62; // rcx
  int v63; // eax
  CPipeInstance *v64; // rcx
  __int64 v65; // rcx
  struct IUnknown *v66; // rcx
  int v67; // eax
  CPipeInstance *v68; // rcx
  __int64 v69; // rcx
  struct IUnknown *v70; // rcx
  __int64 v71; // r8
  __int64 *v72; // rax
  CPipeInstance *v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  CPipeInstance *v77; // rax
  int v78; // ebx
  unsigned int v79; // eax
  const struct _tlgProvider_t *v80; // rcx
  int v81; // ecx
  __int64 v82; // r9
  CPipeInstance *v83; // rcx
  ATL::CAtlException *v85; // rbx
  CPipeInstance *v86; // [rsp+80h] [rbp-128h] BYREF
  struct IDeviceGraphObjectCacheManager *v87; // [rsp+88h] [rbp-120h] BYREF
  bool v88; // [rsp+90h] [rbp-118h]
  struct _RTL_CRITICAL_SECTION *v89; // [rsp+98h] [rbp-110h] BYREF
  char *v90; // [rsp+A0h] [rbp-108h] BYREF
  struct IAudioGraphCallback *v91; // [rsp+A8h] [rbp-100h] BYREF
  CAudioDeviceGraph **v92; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 *v93; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned __int16 *v94; // [rsp+C0h] [rbp-E8h] BYREF
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v95; // [rsp+C8h] [rbp-E0h] BYREF
  CAudioDeviceGraph *v96; // [rsp+D0h] [rbp-D8h] BYREF
  GUID *v97; // [rsp+D8h] [rbp-D0h] BYREF
  void **v98; // [rsp+E0h] [rbp-C8h] BYREF
  double v99; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-B8h] BYREF
  _DWORD *v101; // [rsp+F8h] [rbp-B0h]
  __int64 *v102; // [rsp+100h] [rbp-A8h]
  char *v103; // [rsp+108h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v104; // [rsp+110h] [rbp-98h] BYREF
  ATL::CAtlException *v105[2]; // [rsp+118h] [rbp-90h] BYREF
  char v106; // [rsp+128h] [rbp-80h]
  CAudioDeviceGraph *v107; // [rsp+130h] [rbp-78h]
  char v108; // [rsp+138h] [rbp-70h]
  __int64 v109; // [rsp+140h] [rbp-68h] BYREF
  float v110; // [rsp+148h] [rbp-60h]
  int v111; // [rsp+14Ch] [rbp-5Ch]
  BOOL v112; // [rsp+150h] [rbp-58h]
  int v113; // [rsp+154h] [rbp-54h]
  GUID v114; // [rsp+158h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  LODWORD(v90) = a4;
  v91 = a3;
  v5 = a2;
  v6 = this;
  v96 = this;
  v95 = a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v104 = v7;
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 122LL;
LABEL_5:
    v10 = (unsigned int)v8;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v10);
    goto LABEL_130;
  }
  v97 = (GUID *)((char *)v6 + 256);
  if ( *((_DWORD *)v6 + 64) )
  {
    v8 = -2005139440;
    v9 = 125LL;
    goto LABEL_5;
  }
  v11 = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)v5);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = (unsigned int)v11;
    v9 = 128LL;
    goto LABEL_6;
  }
  v12 = *((_QWORD *)v5 + 4);
  if ( (double)(int)v12 > 25000000.0 )
  {
    v8 = -2147024809;
    v9 = 131LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v99 = (char *)v6 + 128;
  *((_QWORD *)v6 + 16) = v12;
  v101 = (_DWORD *)((char *)v6 + 140);
  *((_DWORD *)v6 + 35) = *((_DWORD *)v5 + 18);
  *((_DWORD *)v6 + 76) = *((_DWORD *)v5 + 34);
  v100 = (__int64)v6 + 344;
  v103 = (char *)v6 + 344;
  *(_OWORD *)((char *)v6 + 344) = *(_OWORD *)((char *)v5 + 148);
  v94 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
  v13 = v94;
  *((_DWORD *)v6 + 77) = *((_DWORD *)v5 + 25);
  *((float *)v6 + 34) = (float)*((int *)v13 + 1);
  v87 = 0LL;
  DeviceGraphObjectCacheManager = GetDeviceGraphObjectCacheManager(&v87);
  v8 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v15 = 152LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager);
LABEL_14:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v87);
    goto LABEL_130;
  }
  v89 = 0LL;
  (**(void (__fastcall ***)(struct IDeviceGraphObjectCacheManager *, GUID *, struct _RTL_CRITICAL_SECTION **))v87)(
    v87,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &v89);
  v16 = v89;
  Blink = v89->DebugInfo->ProcessLocksList.Blink;
  v19 = AudioDgTelemetryProvider::Provider(v18);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, const struct _tlgProvider_t *))Blink)(v16, v19);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v89);
  v113 = 0;
  v109 = *((_QWORD *)v5 + 4);
  v110 = (float)*((int *)v13 + 1);
  v111 = v13[1];
  v112 = *((_DWORD *)v5 + 25) == 1;
  v20 = *(_QWORD *)v87;
  v92 = (CAudioDeviceGraph **)((char *)v5 + 56);
  DeviceGraphObjectCacheManager = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCacheManager *, _QWORD, __int64 *, __int64))(v20 + 24))(
                                    v87,
                                    *((_QWORD *)v5 + 7),
                                    &v109,
                                    (__int64)v6 + 336);
  v8 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v15 = 166LL;
    goto LABEL_13;
  }
  v23 = (struct IUnknown **)((char *)v6 + 144);
  v102 = (__int64 *)((char *)v6 + 144);
  DeviceGraphObjectCacheManager = ATL::CComCreator<ATL::CComObject<CAudioProcessor>>::CreateInstance(
                                    v22,
                                    v21,
                                    (_QWORD *)v6 + 18);
  v8 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v15 = 169LL;
    goto LABEL_13;
  }
  v105[1] = v6;
  v106 = 1;
  v24 = ((__int64 (__fastcall *)(struct IUnknown *, bool, _QWORD))(*v23)->lpVtbl[1].QueryInterface)(
          *v23,
          *v101 != 0,
          *((_QWORD *)v6 + 42));
  v8 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v24);
    v25 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
    }
    goto LABEL_14;
  }
  v89 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, struct _RTL_CRITICAL_SECTION **))(*v23)->lpVtbl->QueryInterface)(
    *v23,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &v89);
  v26 = v89;
  v27 = v89->DebugInfo->ProcessLocksList.Blink;
  v29 = AudioDgTelemetryProvider::Provider(v28);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, const struct _tlgProvider_t *))v27)(v26, v29);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v89);
  v30 = (__int64 *)((char *)v6 + 152);
  v93 = (__int64 *)((char *)v6 + 152);
  Instance = ATL::CComCreator<ATL::CComObject<CAudioPump>>::CreateInstance(v32, v31, (_QWORD *)v6 + 19);
  v8 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)Instance);
    v34 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v34->lpVtbl->Release)(v34);
    }
    goto LABEL_14;
  }
  v107 = v6;
  v108 = 1;
  v86 = 0LL;
  v8 = CPipeInstance::CreateDevicePipeInstance(*v23, *((_QWORD *)v6 + 42), (__int64)v5, &v86);
  if ( v8 < 0 )
  {
    v35 = v86;
    v86 = 0LL;
    if ( v35 )
      CPipeInstance::`scalar deleting destructor'(v35);
    v36 = *v30;
    if ( *v30 )
    {
      *v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
    }
    goto LABEL_14;
  }
  v38 = CPipeInstance::Initialize(v86);
  v8 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v38);
    v39 = v86;
    v86 = 0LL;
    if ( v39 )
      CPipeInstance::`scalar deleting destructor'(v39);
    v40 = *v30;
    if ( *v30 )
    {
      *v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v41 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v41->lpVtbl->Release)(v41);
    }
    goto LABEL_14;
  }
  v42 = CPipeInstance::ConnectAPOs(v86, v91);
  v8 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v42);
    v43 = v86;
    v86 = 0LL;
    if ( v43 )
      CPipeInstance::`scalar deleting destructor'(v43);
    v44 = *v30;
    if ( *v30 )
    {
      *v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v45->lpVtbl->Release)(v45);
    }
    goto LABEL_14;
  }
  v46 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail((__int64)v86 + 16)
                  + 32LL);
  v47 = *((_QWORD *)v6 + 47);
  *((_QWORD *)v6 + 47) = 0LL;
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  *((_QWORD *)v6 + 47) = *(_QWORD *)(v46 + 16);
  v48 = *(_QWORD *)(v46 + 16);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
  v49 = CPipeInstance::AddConnectionsAndActivateAPOs(
          v86,
          *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)v6 + 47));
  v8 = v49;
  if ( v49 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v49);
    v50 = v86;
    v86 = 0LL;
    if ( v50 )
      CPipeInstance::`scalar deleting destructor'(v50);
    v51 = *v30;
    if ( *v30 )
    {
      *v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v52 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v52->lpVtbl->Release)(v52);
    }
    goto LABEL_14;
  }
  v88 = ((unsigned int)v90 & 0x400001) != 0;
  v98 = (void **)((char *)v6 + 384);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)v6 + 48,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*v92, (char *)v6 + 384);
  if ( *(_QWORD *)((char *)v5 + 164) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    && *(_QWORD *)((char *)v5 + 172) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    v53 = *((_QWORD *)v6 + 49);
    *((_QWORD *)v6 + 49) = 0LL;
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    v54 = Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>((_QWORD *)v6 + 49);
    v8 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v54);
      v55 = v86;
      v86 = 0LL;
      if ( v55 )
        CPipeInstance::`scalar deleting destructor'(v55);
      v56 = *v30;
      if ( *v30 )
      {
        *v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = *v23;
      if ( *v23 )
      {
        *v23 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v57->lpVtbl->Release)(v57);
      }
      goto LABEL_14;
    }
  }
  else
  {
    v58 = *((_QWORD *)v6 + 49);
    *((_QWORD *)v6 + 49) = 0LL;
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    v59 = CoCreateInstance(
            (const IID *const)((char *)v5 + 164),
            0LL,
            0x17u,
            &GUID_c4e70434_407d_416b_94be_9717b79065fb,
            (LPVOID *)v6 + 49);
    v8 = v59;
    if ( v59 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDA,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v59);
      v60 = v86;
      v86 = 0LL;
      if ( v60 )
        CPipeInstance::`scalar deleting destructor'(v60);
      v61 = *v30;
      if ( *v30 )
      {
        *v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
      }
      v62 = *v23;
      if ( *v23 )
      {
        *v23 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v62->lpVtbl->Release)(v62);
      }
      goto LABEL_14;
    }
    v63 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v6 + 49) + 24LL))(
            *((_QWORD *)v6 + 49),
            (__int64)v5 + 180);
    v8 = v63;
    if ( v63 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v63);
      v64 = v86;
      v86 = 0LL;
      if ( v64 )
        CPipeInstance::`scalar deleting destructor'(v64);
      v65 = *v30;
      if ( *v30 )
      {
        *v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      }
      v66 = *v23;
      if ( *v23 )
      {
        *v23 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v66->lpVtbl->Release)(v66);
      }
      goto LABEL_14;
    }
  }
  v67 = CAudioDeviceGraph::InitializePump(v6, v86, v5, v88);
  v8 = v67;
  if ( v67 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v67);
    v68 = v86;
    v86 = 0LL;
    if ( v68 )
      CPipeInstance::`scalar deleting destructor'(v68);
    v69 = *v30;
    if ( *v30 )
    {
      *v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
    }
    v70 = *v23;
    if ( *v23 )
    {
      *v23 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v70->lpVtbl->Release)(v70);
    }
    goto LABEL_14;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 216));
  try
  {
    v89 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 216);
    v91 = v86;
    v72 = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::NewNode(
            (__int64)v6 + 168,
            (__int64 *)&v91,
            v71,
            *((_QWORD *)v6 + 21));
    if ( *((_QWORD *)v6 + 21) )
      *(_QWORD *)(*((_QWORD *)v6 + 21) + 8LL) = v72;
    else
      *((_QWORD *)v6 + 22) = v72;
    *((_QWORD *)v6 + 21) = v72;
  }
  catch ( ATL::CAtlException *v105 )
  {
    v85 = v105[0];
    if ( *(_DWORD *)v105[0] == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v90) = *(_DWORD *)v85;
    v8 = (int)v90;
    if ( (int)v90 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v90);
      CSAutoLock<1>::~CSAutoLock<1>(&v89);
      v73 = v86;
      v86 = 0LL;
      if ( v73 )
        CPipeInstance::`scalar deleting destructor'(v73);
      v74 = *v93;
      if ( *v93 )
      {
        *v93 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
      }
      v75 = *v102;
      if ( *v102 )
      {
        *v102 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      }
      goto LABEL_14;
    }
    v13 = v94;
    v5 = v95;
    v6 = v96;
  }
  CSAutoLock<1>::~CSAutoLock<1>(&v89);
  v77 = v86;
  v86 = 0LL;
  *((_QWORD *)v6 + 20) = v77;
  v97->Data1 = 1;
  *((_DWORD *)v6 + 28) = 0;
  v114 = 0LL;
  if ( *v13 == 0xFFFE )
  {
    v114 = *(GUID *)(v13 + 12);
  }
  else
  {
    v114 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v114.Data1 = *v13;
  }
  v78 = 0;
  v79 = 0;
  if ( *((_DWORD *)v5 + 24) )
  {
    while ( 1 )
    {
      v76 = 2LL * v79;
      if ( *((_QWORD *)v5 + 2 * v79 + 27) == *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1
        && *((_QWORD *)v5 + 2 * v79 + 28) == *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4 )
      {
        break;
      }
      if ( ++v79 >= *((_DWORD *)v5 + 24) )
        goto LABEL_124;
    }
    v78 = 1;
  }
LABEL_124:
  v80 = AudioDgTelemetryProvider::Provider(v76);
  if ( *(_DWORD *)v80 > 4u && tlgKeywordOn((__int64)v80, 0x400000000001LL) )
  {
    LODWORD(v90) = v78;
    v97 = &v114;
    v98 = (void **)*v98;
    v96 = *v92;
    v95 = (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)((char *)v5 + 120);
    v94 = (unsigned __int16 *)((char *)v5 + 104);
    LODWORD(v93) = v112;
    LODWORD(v91) = v111;
    *(float *)&v92 = v110;
    LODWORD(v89) = *v101;
    v99 = (double)(int)**(_QWORD **)&v99 / 10000000.0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v81,
      (int)&unk_1400AFE80,
      (int)v103,
      v82,
      &v100,
      (__int64)&v99,
      (__int64)&v89,
      (__int64)&v92,
      (__int64)&v91,
      (__int64)&v93,
      (__int64 *)&v94,
      (__int64 *)&v95,
      (void **)&v96,
      (void **)&v98,
      (__int64 *)&v97,
      (__int64)&v90);
  }
  v83 = v86;
  v86 = 0LL;
  if ( v83 )
    CPipeInstance::`scalar deleting destructor'(v83);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v87);
  v8 = 0;
LABEL_130:
  CSAutoLock<1>::~CSAutoLock<1>(&v104);
  return (unsigned int)v8;
}
