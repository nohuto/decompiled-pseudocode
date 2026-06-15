/*
 * XREFs of ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400137A4
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140017CC8 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140018998 (-AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProc.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient(
        CAPOProcessingHost *this,
        struct IMMDevice **a2,
        struct CAPOProcessingHostObject *a3)
{
  struct IMMDevice *v5; // rdx
  unsigned int v6; // ebx
  int EndpointNotificationHandler; // eax
  __int64 v8; // rcx
  HRESULT Instance; // eax
  HRESULT v10; // esi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v14; // [rsp+58h] [rbp+10h] BYREF
  CAPOEndpointNotificationsHandler *v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = *a2;
  if ( v5 )
  {
    v15 = 0LL;
    EndpointNotificationHandler = CAPOProcessingHost::GetEndpointNotificationHandler(this, v5, &v15);
    v6 = EndpointNotificationHandler;
    if ( EndpointNotificationHandler < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)EndpointNotificationHandler);
LABEL_14:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
      return v6;
    }
    CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient(v15, a3);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v14 = (char *)this + 32;
    if ( !*((_BYTE *)this + 72) )
    {
      v8 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      Instance = CoCreateInstance(
                   &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   (LPVOID *)this + 3);
      v10 = Instance;
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB4,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)Instance);
        CSAutoLock<1>::~CSAutoLock<1>(&v14);
        v6 = v10;
        goto LABEL_14;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 3) + 48LL))(
              *((_QWORD *)this + 3),
              ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB5,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v11);
        CSAutoLock<1>::~CSAutoLock<1>(&v14);
        goto LABEL_14;
      }
      *((_BYTE *)this + 72) = 1;
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v14);
    v6 = 0;
    goto LABEL_14;
  }
  v6 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)0x80004003LL);
  return v6;
}
