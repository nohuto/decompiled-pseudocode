/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E510
 * Callers:
 *     HamRpcSrvConnectDebugging @ 0x18003CD40 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x18003CEC0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectSessionState @ 0x18003D600 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x18003D760 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18003D880 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18003DA00 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectFullTrust @ 0x180081A00 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x18003CBE0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapS.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003EBEC (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180071CEC (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9,
        const unsigned __int16 **a10,
        __int64 a11)
{
  const unsigned __int16 **v11; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  const wchar_t *v15; // r14
  int v16; // r12d
  int v17; // ecx
  bool v18; // zf
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // ecx
  _BYTE v25[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-9Ch] BYREF
  int v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  const wchar_t *v30; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v32[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v33[144]; // [rsp+B0h] [rbp-50h] BYREF

  v11 = a10;
  v28 = a3;
  v26 = a2;
  v30 = a1;
  v29 = a4;
  memset_0(v33, 0, 0x88uLL);
  v27 = 0;
  memset(v32, 0, sizeof(v32));
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D5C71);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( a6 )
  {
    if ( a10 )
    {
      if ( a6 == 6 )
      {
        v24 = *(_DWORD *)*a10;
        if ( v24 >= 0x20 || (v24 & 0x11) == 0x11 )
          goto LABEL_22;
      }
    }
    v17 = a7;
    v18 = a7 == 0;
  }
  else
  {
    v15 = *a10;
    if ( *a10 && (int)RtlStringCchLengthW(*a10, v13, &v31) < 0 )
      goto LABEL_22;
    v17 = a7;
    v18 = (a7 & 1) == a7;
  }
  if ( !v18 )
  {
LABEL_22:
    v19 = -1073741583;
    goto LABEL_14;
  }
  if ( a6 == 6 && !a10 )
  {
    v27 = 15;
    *(_QWORD *)&v32[0] = &v27;
    v11 = (const unsigned __int16 **)v32;
  }
  v19 = HampClientCreate(v30, a2, v28, v29, a5, a6, v17, 0LL, 0LL, v11, a11);
  if ( v19 >= 0 )
  {
    if ( !a6 )
      v16 = *((_DWORD *)v11 + 4);
    v19 = 0;
    v14 = *(_QWORD *)(*(_QWORD *)a11 + 152LL);
  }
LABEL_14:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    LODWORD(v28) = v19;
    LODWORD(v29) = v16;
    v30 = v15;
    v31 = v14;
    v25[0] = a6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      byte_1800D490D,
      v21,
      v22,
      (__int64)&v26,
      (__int64)v25,
      (__int64)&v31,
      &v30,
      (__int64)&v29,
      (__int64)&v28);
  }
  return (unsigned int)v19;
}
