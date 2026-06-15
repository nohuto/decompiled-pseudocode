/*
 * XREFs of ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013774 (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013914 (-AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERT.c)
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140015CE0 (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$03@@@Z @ 0x140016188 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140016438 (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJW4APO_NOTIFICATION_TYPE@@PEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017200 (-AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJW4APO_NOTIFICATION_TYPE@@PEAUAUDIO.c)
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017398 (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003F2BC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x14004A48C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ?GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@Z @ 0x14004D270 (-GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironme.c)
 *     ?AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140056D8C (-AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@.c)
 *     ?IsCaptureDevice@@YA_NPEAUIMMDevice@@@Z @ 0x140057F60 (-IsCaptureDevice@@YA_NPEAUIMMDevice@@@Z.c)
 *     ?AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14005814C (-AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICAT.c)
 *     ?AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHostObject@@@Z @ 0x14005820C (-AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHos.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400594B4 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400626E0 (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062814 (-QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObj.c)
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062ACC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAPOProcessingHost::RegisterAPONotifications(
        CAPOProcessingHost *this,
        __int64 (***a2)(void),
        const unsigned __int16 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9
  _QWORD *v12; // rcx
  struct CAPOProcessingHostObject *v13; // rbx
  __int64 (**v14)(void); // rax
  int v15; // edi
  void *v16; // rcx
  unsigned __int64 v17; // rsi
  void *v18; // rdi
  unsigned int j; // r15d
  __int64 v20; // r14
  const char *v21; // r9
  void *v22; // rcx
  __int64 result; // rax
  int v24; // eax
  __int64 v25; // rdx
  int started; // eax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  unsigned int k; // r15d
  const struct _tlgProvider_t *v30; // rax
  int v31; // r8d
  int v32; // r9d
  void *v33; // rcx
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rax
  void *v38; // rcx
  void *v39; // rcx
  int v40; // eax
  int v41; // r14d
  void *v42; // rcx
  int EnvironmentStateChangedNotificationHandler; // eax
  unsigned int v44; // r14d
  void *v45; // rcx
  int v46; // eax
  void *v47; // rcx
  void *v48; // rcx
  struct IPropertyStore *v49; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v50; // [rsp+48h] [rbp-60h] BYREF
  struct CAPOProcessingHostObject *v51; // [rsp+50h] [rbp-58h] BYREF
  struct CAPOEnvironmentStateChangedNotificationsHandler *v52; // [rsp+58h] [rbp-50h] BYREF
  struct IPropertyStore *v53; // [rsp+60h] [rbp-48h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-40h] BYREF
  void *v55; // [rsp+70h] [rbp-38h] BYREF
  char v56; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v58; // [rsp+B8h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+20h] BYREF

  v49 = 0LL;
  try
  {
    v6 = (**a2)();
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v51 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    p_pv = (LPVOID *)((char *)this + 144);
    v53 = v49;
    v8 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v53 + i) ^ (unsigned __int64)v8);
    v10 = v8 & *((_QWORD *)this + 29);
    v11 = *((_QWORD *)this + 26);
    v12 = *(_QWORD **)(v11 + 16 * v10 + 8);
    if ( v12 == *((_QWORD **)this + 24) )
    {
LABEL_8:
      v12 = 0LL;
    }
    else
    {
      while ( v49 != (struct IPropertyStore *)v12[2] )
      {
        if ( v12 == *(_QWORD **)(v11 + 16 * v10) )
          goto LABEL_8;
        v12 = (_QWORD *)v12[1];
      }
    }
    if ( !v12 || v12 == *((_QWORD **)this + 24) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x212,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x80070490LL);
      CSAutoLock<1>::~CSAutoLock<1>(&p_pv);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v51);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
      return 2147943568LL;
    }
    v13 = (struct CAPOProcessingHostObject *)v12[3];
    v51 = v13;
    if ( v13 )
      (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v13 + 8LL))(v13);
    if ( this != (CAPOProcessingHost *)-144LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    pv = 0LL;
    v58 = 0;
    v50 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IPropertyStore *, GUID *, __int64 **))v49->lpVtbl->QueryInterface)(
           v49,
           &GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0,
           &v50) >= 0 )
    {
      v37 = *v50;
      p_pv = &pv;
      v55 = 0LL;
      v56 = 1;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, void **, unsigned int *))(v37 + 40))(v50, 7LL, &v55, &v58);
      if ( v56 )
      {
        v38 = *p_pv;
        *p_pv = v55;
        if ( v38 )
          CoTaskMemFree(v38);
      }
      if ( v15 >= 0 )
      {
LABEL_20:
        if ( pv && v58 )
        {
          v17 = saturated_mul(v58, 4uLL);
          v18 = operator new[](v17);
          memset_0(v18, 0, v17);
          p_pv = (LPVOID *)v18;
          if ( v18 )
          {
            for ( j = 0; j < v58; ++j )
            {
              v20 = 32LL * j;
              *((_DWORD *)v18 + j) = *(_DWORD *)((char *)pv + v20);
              switch ( *(_DWORD *)((char *)pv + v20) )
              {
                case 1:
                  goto LABEL_62;
                case 2:
                  v24 = CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient(
                          this,
                          (struct IMMDevice **)((char *)pv + v20 + 8),
                          v13);
                  if ( v24 < 0 )
                  {
                    v25 = 565LL;
                    goto LABEL_64;
                  }
                  break;
                case 3:
                  v24 = CAPOProcessingHost::AddAudioSystemEffectsPropertyStoreNotificationClient(
                          this,
                          (struct AUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v20 + 8),
                          v13);
                  if ( v24 < 0 )
                  {
                    v25 = 569LL;
                    goto LABEL_64;
                  }
                  break;
                case 4:
LABEL_62:
                  v24 = CAPOProcessingHost::AddEndpointVolumeNotificationClient(
                          this,
                          *(unsigned int *)((char *)pv + v20),
                          (char *)pv + v20 + 8,
                          v13);
                  if ( v24 >= 0 )
                    continue;
                  v25 = 561LL;
                  goto LABEL_64;
                case 5:
                  v24 = CAPOProcessingHost::AddDeviceOrientationNotificationClient(this, v13);
                  if ( v24 < 0 )
                  {
                    v25 = 573LL;
                    goto LABEL_64;
                  }
                  break;
                case 6:
                  if ( IsCaptureDevice(*(struct IMMDevice **)((char *)pv + v20 + 8)) )
                  {
                    v24 = CAPOProcessingHost::AddMicBoostNotificationClient(
                            this,
                            (struct AUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v20 + 8),
                            v13);
                    if ( v24 < 0 )
                    {
                      v25 = 579LL;
                      goto LABEL_64;
                    }
                  }
                  break;
                case 7:
                  v24 = CAPOProcessingHost::AddEnvironmentStateChangedNotificationClient(this, a3, v13);
                  if ( v24 < 0 )
                  {
                    v25 = 584LL;
LABEL_64:
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)v25,
                      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                      (const char *)(unsigned int)v24);
                    continue;
                  }
                  break;
                default:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x24C,
                    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                    (const char *)0x80070057LL);
                  operator delete(v18);
                  if ( v50 )
                    (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
                  v22 = pv;
                  pv = 0LL;
                  if ( v22 )
                    CoTaskMemFree(v22);
                  if ( v13 )
                    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v13 + 16LL))(v13);
                  if ( v49 )
                    ((void (__fastcall *)(struct IPropertyStore *, struct IPropertyStoreVtbl *))v49->lpVtbl->Release)(
                      v49,
                      v49->lpVtbl);
                  return 2147942487LL;
              }
            }
            started = CAPOProcessingHostObject::StartSendingNotifications(v13);
            v28 = started;
            if ( started >= 0 )
            {
              for ( k = 0; ; ++k )
              {
                if ( k >= v58 )
                {
                  v30 = AudioDgTelemetryProvider::Provider(v27);
                  if ( *(_DWORD *)v30 > 4u )
                  {
                    p_pv = (LPVOID *)v18;
                    LOWORD(v55) = v58;
                    v53 = (struct IPropertyStore *)v13;
                    v52 = (struct CAPOEnvironmentStateChangedNotificationsHandler *)v49;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<4>>(
                      (_DWORD)v30,
                      (unsigned int)&unk_1400AFA1F,
                      v31,
                      v32,
                      (__int64)&v52,
                      (__int64)&v53,
                      (__int64)&p_pv);
                  }
                  operator delete(v18);
                  if ( v50 )
                    (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
                  v33 = pv;
                  pv = 0LL;
                  if ( v33 )
                    CoTaskMemFree(v33);
                  if ( v13 )
                    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v13 + 16LL))(v13);
                  if ( v49 )
                    ((void (__fastcall *)(struct IPropertyStore *))v49->lpVtbl->Release)(v49);
                  return 0LL;
                }
                v34 = 32LL * k;
                switch ( *(_DWORD *)((char *)pv + v34) )
                {
                  case 1:
LABEL_60:
                    v35 = QueueInitialVolumeNotification(*(unsigned int *)((char *)pv + v34), (char *)pv + v34 + 8, v13);
                    if ( v35 >= 0 )
                      continue;
                    v36 = 600LL;
                    goto LABEL_75;
                  case 2:
                    v35 = QueueInitialEnhancementsEnabledNotification(
                            (struct AUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v34 + 8),
                            (struct _RTL_CRITICAL_SECTION *)v13);
                    if ( v35 < 0 )
                    {
                      v36 = 603LL;
LABEL_75:
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)v36,
                        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                        (const char *)(unsigned int)v35);
                      continue;
                    }
                    break;
                  case 4:
                    goto LABEL_60;
                  case 5:
                    v35 = QueueInitialDeviceOrientationNotification(v13);
                    if ( v35 < 0 )
                    {
                      v36 = 606LL;
                      goto LABEL_75;
                    }
                    break;
                  default:
                    v27 = (unsigned int)(*(_DWORD *)((char *)pv + v34) - 6);
                    if ( *(_DWORD *)((char *)pv + v34) == 6 )
                    {
                      if ( IsCaptureDevice(*(struct IMMDevice **)((char *)pv + v34 + 8)) )
                      {
                        v35 = QueueInitialMicBoostNotification(
                                (struct AUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v34 + 8),
                                v13);
                        if ( v35 < 0 )
                        {
                          v36 = 611LL;
                          goto LABEL_75;
                        }
                      }
                    }
                    else
                    {
                      if ( *(_DWORD *)((char *)pv + v34) != 7 )
                        continue;
                      v52 = 0LL;
                      EnvironmentStateChangedNotificationHandler = CAPOProcessingHost::GetEnvironmentStateChangedNotificationHandler(
                                                                     this,
                                                                     a3,
                                                                     &v52);
                      v44 = EnvironmentStateChangedNotificationHandler;
                      if ( EnvironmentStateChangedNotificationHandler < 0 )
                      {
                        if ( v52 )
                          (*(void (__fastcall **)(struct CAPOEnvironmentStateChangedNotificationsHandler *))(*(_QWORD *)v52 + 16LL))(v52);
                        operator delete(v18);
                        if ( v50 )
                          (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
                        v45 = pv;
                        pv = 0LL;
                        if ( v45 )
                          CoTaskMemFree(v45);
                        if ( v13 )
                          (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v13 + 16LL))(v13);
                        if ( v49 )
                          ((void (__fastcall *)(struct IPropertyStore *, struct IPropertyStoreVtbl *))v49->lpVtbl->Release)(
                            v49,
                            v49->lpVtbl);
                        return v44;
                      }
                      v53 = 0LL;
                      v40 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(
                              (char *)v52 + 40,
                              &v53);
                      v41 = v40;
                      if ( v40 >= 0 )
                        v41 = 0;
                      else
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x3E,
                          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
                          (const char *)(unsigned int)v40);
                      if ( v41 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x26B,
                          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                          (const char *)(unsigned int)v41);
                      v46 = QueueInitialEnvironmentStatusNotification(a3, v53, v13);
                      if ( v46 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x26C,
                          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                          (const char *)(unsigned int)v46);
                      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v53);
                      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v52);
                    }
                    break;
                }
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x250,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
              (const char *)(unsigned int)started);
            operator delete(v18);
            if ( v50 )
              (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
            v42 = pv;
            pv = 0LL;
            if ( v42 )
              CoTaskMemFree(v42);
            if ( v13 )
              (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v13 + 16LL))(v13);
            if ( v49 )
              ((void (__fastcall *)(struct IPropertyStore *, struct IPropertyStoreVtbl *))v49->lpVtbl->Release)(
                v49,
                v49->lpVtbl);
            return v28;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x227,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
              (const char *)0x8007000ELL);
            std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(&p_pv);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v50);
            v47 = pv;
            pv = 0LL;
            if ( v47 )
              CoTaskMemFree(v47);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v51);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
            return 2147942414LL;
          }
        }
        else
        {
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v50);
          v48 = pv;
          pv = 0LL;
          if ( v48 )
            CoTaskMemFree(v48);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v51);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
          return 0LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21B,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v15);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v50);
      v39 = pv;
      pv = 0LL;
      if ( v39 )
        goto LABEL_88;
    }
    else
    {
      v14 = *a2;
      p_pv = &pv;
      v55 = 0LL;
      v56 = 1;
      v15 = ((__int64 (__fastcall *)(__int64 (***)(void), void **, unsigned int *))v14[3])(a2, &v55, &v58);
      if ( v56 )
      {
        v16 = *p_pv;
        *p_pv = v55;
        if ( v16 )
          CoTaskMemFree(v16);
      }
      if ( v15 >= 0 )
        goto LABEL_20;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21F,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v15);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v50);
      v39 = pv;
      pv = 0LL;
      if ( v39 )
LABEL_88:
        CoTaskMemFree(v39);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v51);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
    result = (unsigned int)v15;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27A,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           v21);
  }
  return result;
}
