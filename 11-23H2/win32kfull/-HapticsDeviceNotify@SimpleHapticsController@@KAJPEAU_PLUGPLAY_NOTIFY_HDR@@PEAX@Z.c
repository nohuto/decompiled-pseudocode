/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0247BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     LeaveEditionCrit @ 0x1C00A0030 (LeaveEditionCrit.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?IsValidSimpleHapticsController@InteractiveControlManager@@QEBA_NPEBVSimpleHapticsController@@@Z @ 0x1C013D60C (-IsValidSimpleHapticsController@InteractiveControlManager@@QEBA_NPEBVSimpleHapticsController@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01A8B58 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B13F0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B1550 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C023F7C4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C024795C (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C024897C (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::HapticsDeviceNotify(
        char *NotificationStructure,
        SimpleHapticsController *Context)
{
  int v4; // edi
  __int64 v5; // rcx
  InteractiveControlManager *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v20[208]; // [rsp+68h] [rbp-A0h] BYREF

  v4 = 0;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
  EnterCrit(1LL, 0LL);
  v6 = InteractiveControlManager::Instance(v5);
  if ( v6 && Context && InteractiveControlManager::IsValidSimpleHapticsController(v6, Context) )
  {
    if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1
      && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 )
    {
      if ( (unsigned int)dword_1C0354118 > 4 && tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
      {
        v19[0] = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0354118,
          byte_1C031E23E,
          0LL,
          0LL,
          (void **)v19);
      }
      v4 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
      if ( v4 < 0 )
      {
        if ( (unsigned int)dword_1C0354118 > 2 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
          {
            LODWORD(v19[0]) = v4;
            v18 = (__int64)"Function failed.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C0354118,
              byte_1C031E26D,
              v10,
              v11,
              (void **)&v18,
              (__int64)v19);
          }
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          819,
          v4,
          "Function failed.");
      }
    }
    else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1
           && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 )
    {
      if ( (unsigned int)dword_1C0354118 > 4 && tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
      {
        v18 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0354118,
          byte_1C031E23E,
          0LL,
          0LL,
          (void **)&v18);
      }
      v4 = SimpleHapticsController::OpenHapticsDevice(Context);
      if ( v4 < 0 )
      {
        if ( (unsigned int)dword_1C0354118 > 2 && tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
        {
          LODWORD(v19[0]) = v4;
          v18 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0354118,
            byte_1C031E26D,
            v12,
            v13,
            (void **)&v18,
            (__int64)v19);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          824,
          v4,
          "Function failed.");
      }
    }
    else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1
           && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 )
    {
      if ( (unsigned int)dword_1C0354118 > 4 && tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
      {
        v18 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0354118,
          byte_1C031E23E,
          0LL,
          0LL,
          (void **)&v18);
      }
      v4 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
      if ( v4 < 0 )
      {
        if ( (unsigned int)dword_1C0354118 > 2 && tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
        {
          LODWORD(v19[0]) = v4;
          v18 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0354118,
            byte_1C031E26D,
            v14,
            v15,
            (void **)&v18,
            (__int64)v19);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          830,
          v4,
          "Function failed.");
      }
    }
    LeaveEditionCrit((__int64)&v17, v7, v8, v9);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
    return (unsigned int)v4;
  }
  else
  {
    if ( (unsigned int)dword_1C0354118 > 4 && tlgKeywordOn((__int64)&dword_1C0354118, 0LL) )
    {
      v18 = (__int64)"SimpleHapticsController::HapticsDeviceNotify device no longer valid";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C0354118,
        byte_1C031E23E,
        0LL,
        0LL,
        (void **)&v18);
    }
    LeaveEditionCrit((__int64)&v17, v7, v8, v9);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
    return 0LL;
  }
}
