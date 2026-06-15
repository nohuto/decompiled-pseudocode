/*
 * XREFs of ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x1400278E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140018FCC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x14001D164 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?IsOffload@CAudioPump@@QEAA_NXZ @ 0x140021510 (-IsOffload@CAudioPump@@QEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002223C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?IsTimerRequired@CAudioPump@@AEAA_NI@Z @ 0x140043EA4 (-IsTimerRequired@CAudioPump@@AEAA_NI@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140066954 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Initialize(
        CAudioPump *this,
        unsigned int a2,
        unsigned int a3,
        struct IAudioProcessRT *a4,
        struct IAudioEndpointRT *a5,
        struct ICrossProcessEventManager *a6)
{
  __int64 v6; // r13
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  struct IAudioEndpointRT *v10; // r12
  int v11; // eax
  unsigned int LastError; // edi
  int v13; // eax
  __int64 v14; // rax
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  __int64 (__fastcall *v19)(CAudioPump *); // rax
  LSTATUS ValueW; // eax
  _QWORD *v21; // rcx
  int v22; // eax
  HANDLE WaitableTimer; // rax
  const char *v24; // r9
  void *v25; // rcx
  void *v27; // rcx
  int v28; // eax
  signed __int32 v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  const char *v33; // r9
  void *v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // eax
  struct ICrossProcessEventManager *v39; // r12
  __int64 (__fastcall *v40)(struct ICrossProcessEventManager *, char *); // rsi
  __int64 (__fastcall *v41)(struct ICrossProcessEventManager *, char *); // rsi
  LPVOID pv; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v43; // [rsp+48h] [rbp-31h] BYREF
  __int64 v44; // [rsp+50h] [rbp-29h] BYREF
  int v45; // [rsp+58h] [rbp-21h] BYREF
  DWORD pcbData; // [rsp+5Ch] [rbp-1Dh] BYREF
  DWORD pdwType; // [rsp+60h] [rbp-19h] BYREF
  int v48; // [rsp+64h] [rbp-15h] BYREF
  ULONG ActualResolution; // [rsp+68h] [rbp-11h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+70h] [rbp-9h] BYREF
  void **p_pv; // [rsp+78h] [rbp-1h]
  void *v52; // [rsp+80h] [rbp+7h] BYREF
  char v53; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  unsigned int pvData; // [rsp+D0h] [rbp+57h] BYREF
  struct IAudioProcessRT *v56; // [rsp+E8h] [rbp+6Fh]

  v56 = a4;
  v6 = a3;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v50 = v9;
  if ( *((_BYTE *)this + 72) )
  {
    LastError = -2005139440;
    v35 = 91LL;
LABEL_92:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)LastError);
LABEL_124:
    CSAutoLock<1>::~CSAutoLock<1>(&v50);
    return LastError;
  }
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v35 = 94LL;
LABEL_91:
    LastError = -2147024809;
    goto LABEL_92;
  }
  if ( !(_DWORD)v6 )
  {
    v35 = 95LL;
    goto LABEL_91;
  }
  if ( (a2 & 3) == 0 )
  {
    v35 = 99LL;
    goto LABEL_91;
  }
  if ( (a2 & 3) == 3 )
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)0x80070057LL);
LABEL_40:
    if ( v9 )
      LeaveCriticalSection(v9);
    return LastError;
  }
  *((_WORD *)this + 37) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_WORD *)this + 2340) = 0;
  v43 = 0LL;
  v10 = a5;
  v11 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 **))a5->lpVtbl->QueryInterface)(
          a5,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v43);
  LastError = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v11);
LABEL_123:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
    goto LABEL_124;
  }
  v44 = 0LL;
  v13 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
          v10,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v44);
  LastError = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v13);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v43 )
      (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
    goto LABEL_40;
  }
  pv = 0LL;
  v14 = *v43;
  p_pv = &pv;
  v52 = 0LL;
  v53 = 1;
  LastError = (*(__int64 (__fastcall **)(__int64 *, void **))(v14 + 24))(v43, &v52);
  if ( v53 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      p_pv,
      v52);
  if ( (LastError & 0x80000000) != 0 )
  {
    v36 = LastError;
    v37 = 125LL;
LABEL_122:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)v36);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v44);
    goto LABEL_123;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = (*(__int64 (__fastcall **)(__int64 *, char *))(*v43 + 40))(v43, (char *)this + 224);
  LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v37 = 128LL;
LABEL_121:
    v36 = (unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
    goto LABEL_122;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 264, 0);
  LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v37 = 131LL;
    goto LABEL_121;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 280, 1);
  LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v37 = 134LL;
    goto LABEL_121;
  }
  v45 = 0;
  if ( (a2 & 6) == 6 )
  {
    v45 = 1;
  }
  else
  {
    v28 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 40LL))(v44, &v45);
    LastError = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v28);
      v32 = pv;
      pv = 0LL;
      if ( v32 )
        CoTaskMemFree(v32);
      if ( v44 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      if ( v43 )
        (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
      goto LABEL_40;
    }
    if ( !v45 )
    {
      EnterCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
      v29 = _InterlockedIncrement(&CAudioPump::s_AudioPumpTimerResolutionCount);
      *((_BYTE *)this + 73) = 1;
      if ( v29 == 1 )
      {
        ActualResolution = 0;
        if ( NtSetTimerResolution(0x2710u, 1u, &ActualResolution) < 0 )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xAC,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
            v33);
      }
      LeaveCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
      v9 = v50;
      goto LABEL_18;
    }
  }
  v16 = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
          (__int64)this + 312,
          0);
  LastError = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v16);
    v34 = pv;
    pv = 0LL;
    if ( v34 )
      CoTaskMemFree(v34);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v43 )
      (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
    goto LABEL_40;
  }
  v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v43 + 56))(v43, *((_QWORD *)this + 39));
  LastError = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v17);
    v27 = pv;
    pv = 0LL;
    if ( v27 )
      CoTaskMemFree(v27);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v43 )
      (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
    goto LABEL_40;
  }
LABEL_18:
  v18 = a2 & 1;
  v19 = CAudioPump::InputPumpWorkRoutine;
  if ( (a2 & 1) == 0 )
    v19 = CAudioPump::OutputPumpWorkRoutine;
  *((_QWORD *)this + 27) = v19;
  *((_QWORD *)this + 13) = v6;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 10, (__int64)v56);
  *((float *)this + 28) = (float)*((int *)pv + 2) / (float)*((unsigned __int16 *)pv + 6);
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 26, (__int64)v10);
  pvData = 0;
  pcbData = 4;
  pdwType = 0;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
             L"AudioDGCPUPercentMax",
             0x10u,
             &pdwType,
             &pvData,
             &pcbData);
  v21 = (_QWORD *)((char *)this + 104);
  if ( !ValueW )
  {
    v38 = pvData;
    if ( pvData >= 0xA )
    {
      if ( pvData <= 0x5A )
      {
LABEL_105:
        *((_QWORD *)this + 44) = (unsigned int)(int)(float)((float)(*((_DWORD *)this + 26) * v38) / 100.0);
        v18 = a2 & 1;
        goto LABEL_21;
      }
      v38 = 90;
      v21 = (_QWORD *)((char *)this + 104);
    }
    else
    {
      v38 = 10;
    }
    pvData = v38;
    goto LABEL_105;
  }
LABEL_21:
  if ( !*((_QWORD *)this + 44) )
    *((_QWORD *)this + 44) = (unsigned int)(int)(float)((float)(int)*v21 * 0.40000001);
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
          L"DeadlineDurationThreshold",
          0x10u,
          &pdwType,
          &pvData,
          &pcbData) )
    *((_QWORD *)this + 55) = 10000 * pvData;
  v48 = 0;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 32LL))(v44, &v48);
  LastError = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v22);
    v30 = pv;
    pv = 0LL;
    if ( v30 )
      CoTaskMemFree(v30);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v43 )
      (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
    goto LABEL_40;
  }
  if ( (a2 & 4) != 0 )
  {
    if ( (v39 = a6, v18) && *((_QWORD *)this + 39) && v48 == 1 || (a2 & 2) != 0 )
    {
      v40 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)a6 + 32LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 51);
      event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = v40(v39, (char *)this + 408);
      LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
      if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
      {
        v37 = 251LL;
        goto LABEL_121;
      }
      *((_BYTE *)this + 4680) = 1;
      *((_DWORD *)this + 1189) = 1;
      if ( (a2 & 2) != 0 )
      {
        event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 416, 0);
        LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
        if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
        {
          v37 = 264LL;
          goto LABEL_121;
        }
        event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 432, 0);
        LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
        if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
        {
          v37 = 268LL;
          goto LABEL_121;
        }
        v41 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)v39 + 32LL);
        wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 53);
        event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = v41(v39, (char *)this + 424);
        LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
        if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
        {
          v37 = 272LL;
          goto LABEL_121;
        }
        event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 288, 0);
        LastError = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
        if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
        {
          v37 = 276LL;
          goto LABEL_121;
        }
      }
    }
  }
  if ( CAudioPump::IsTimerRequired(this, a2) )
  {
    WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x1F0003u);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 37,
      WaitableTimer);
    if ( ((*((_QWORD *)this + 37) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x11D,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                    v24);
      v25 = pv;
      pv = 0LL;
      if ( v25 )
        CoTaskMemFree(v25);
      if ( v44 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      if ( v43 )
        (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
      goto LABEL_40;
    }
  }
  if ( CAudioPump::IsOffload((__int64 (__fastcall **)(CAudioPump *))this) )
  {
    _InterlockedExchange((volatile __int32 *)this + 84, 0);
    v9 = v50;
  }
  *((_BYTE *)this + 72) = 1;
  v31 = pv;
  pv = 0LL;
  if ( v31 )
    CoTaskMemFree(v31);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v43 )
    (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
