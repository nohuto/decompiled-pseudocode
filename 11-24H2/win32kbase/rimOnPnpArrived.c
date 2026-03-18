/*
 * XREFs of rimOnPnpArrived @ 0x14017E1FC
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D60A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400050B8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMQueryDev @ 0x140055E98 (RIMQueryDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x14005A56C (RIMDeliverDeviceResetRequest.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x140113CEC (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     RIMIsRawInputActive @ 0x14011573C (RIMIsRawInputActive.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401317B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     RIMCloseDev @ 0x14013AFB8 (RIMCloseDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x14013BC64 (RIMRegisterForDeviceChangeNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsTestSigningOn @ 0x14019CD24 (RIMIsTestSigningOn.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     RIMOpenDev @ 0x1401D2344 (RIMOpenDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1401E93DC (WPP_RECORDER_AND_TRACE_SF_dqqS.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  char v6; // si
  char v7; // bl
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bl
  char v13; // r14
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // r8
  PVOID v19; // rbx
  PVOID *v20; // r15
  int v21; // eax
  bool v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  void *v32; // rcx
  int v33; // r8d
  int v34; // r14d
  __int64 v35; // rax
  char v36; // r15
  char v37; // r12
  const wchar_t *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r8
  void *v41; // rcx
  int v42; // ebx
  void *v43; // rcx
  int v44; // edx
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r9
  char v48; // bl
  char v49; // r15
  __int64 v50; // rax
  unsigned int v51; // eax
  int v52; // ecx
  char v53; // r15
  char v54; // r12
  const wchar_t *v55; // rbx
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  int v61; // [rsp+20h] [rbp-79h]
  int v62; // [rsp+20h] [rbp-79h]
  int v63; // [rsp+20h] [rbp-79h]
  int v64; // [rsp+20h] [rbp-79h]
  int HandleInformation; // [rsp+28h] [rbp-71h]
  int HandleInformationa; // [rsp+28h] [rbp-71h]
  int v67; // [rsp+38h] [rbp-61h]
  __int64 v68; // [rsp+50h] [rbp-49h]
  PVOID v69; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v71[6]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+7h] BYREF
  int v73; // [rsp+A8h] [rbp+Fh]

  v4 = a2;
  v6 = 1;
  if ( (*(_DWORD *)(a2 + 168) & 1) == 0 )
  {
    LODWORD(v69) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 339LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      18,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  *(_DWORD *)(v4 + 168) &= ~1u;
  if ( (*(_DWORD *)(v4 + 168) & 0x40) == 0 )
  {
    v16 = *(unsigned int *)(v4 + 48);
    if ( (_DWORD)v16 == 3 )
    {
      v69 = 0LL;
      Object = 0LL;
      Handle = 0LL;
      v17 = RIMGetDeviceObjectPointer(
              (struct _UNICODE_STRING *)(v4 + 192),
              a2,
              (__int64)a3,
              &Handle,
              &v69,
              (PDEVICE_OBJECT *)&Object);
      if ( v17 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v6 = 0;
        }
        v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = *(_QWORD *)(v4 + 200);
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v30) = v27;
          LOBYTE(v31) = v6;
          WPP_RECORDER_AND_TRACE_SF_dqqS(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(v29 + 19392),
            v62,
            HandleInformationa,
            21,
            v67,
            v17,
            a1,
            v4,
            v28);
        }
        v20 = (PVOID *)(v4 + 232);
      }
      else
      {
        ObfReferenceObject(Object);
        v19 = v69;
        *(_QWORD *)(v4 + 216) = v69;
        if ( !*(_QWORD *)(a1 + 120) )
        {
          LODWORD(v69) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 378LL);
        }
        v20 = (PVOID *)(v4 + 232);
        v21 = RIMRegisterForDeviceChangeNotifications(
                v4,
                *(struct _DRIVER_OBJECT **)(a1 + 120),
                v18,
                (void *)v4,
                (PVOID *)(v4 + 232));
        *(_QWORD *)(v4 + 216) = 0LL;
        v17 = v21;
        ObfDereferenceObject(v19);
        ObfDereferenceObject(Object);
        ZwClose(Handle);
        if ( v17 < 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v6 = 0;
          }
          v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = *(_QWORD *)(v4 + 200);
            v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v25) = v22;
            LOBYTE(v26) = v6;
            WPP_RECORDER_AND_TRACE_SF_dqqS(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v26,
              v25,
              *(_QWORD *)(v24 + 19392),
              v63,
              HandleInformationa,
              20,
              v67,
              v17,
              a1,
              v4,
              v23);
          }
        }
        else
        {
          v17 = RawInputManagerDeviceObjectReference(*(void **)(v4 + 32));
        }
        if ( v17 >= 0 )
          return (unsigned int)v17;
      }
      if ( *v20 )
      {
        v17 = IoUnregisterPlugPlayNotification(*v20);
        if ( v17 < 0 )
        {
          LODWORD(v69) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 423LL);
        }
        v32 = *(void **)(v4 + 32);
        *v20 = 0LL;
        ObfDereferenceObject(v32);
      }
      RIMCloseDev(v4);
      RIMFreeDev((struct RawInputManagerObject *)a1, (struct RIMDEV *)v4);
      return (unsigned int)v17;
    }
    if ( a3 == (void *)-1LL )
    {
      v71[0] = 48LL;
      v71[3] = 512LL;
      v71[2] = v4 + 192;
      v71[5] = &Handle;
      v33 = 1048577;
      v73 = 257;
      v34 = 2;
      v71[1] = 0LL;
      v71[4] = 0LL;
      Handle = (HANDLE)0x20000000CLL;
      if ( (_DWORD)v16 == 2 )
      {
        LODWORD(v69) = 1048579;
        if ( (*(_DWORD *)(v4 + 184) & 0x200) != 0 )
        {
          v34 = (unsigned int)RIMIsTestSigningOn(v16, 2LL, 1048577LL) != 0 ? 3 : 0;
        }
        else
        {
          v35 = *(_QWORD *)(v4 + 456);
          if ( !v35 || *(_DWORD *)(v35 + 24) == 6 )
          {
            v34 = 3;
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v36 = 0;
            }
            v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v38 = *(const wchar_t **)(v4 + 200);
              v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v36,
                v37,
                *(_QWORD *)(v39 + 19392),
                v61,
                HandleInformation,
                0x16u,
                v67,
                a1,
                v4,
                v38);
            }
          }
        }
        v33 = (int)v69;
      }
      v17 = RIMOpenDev(v4, (unsigned int)v71, v33, v34, v61);
      if ( v17 < 0 )
        goto LABEL_62;
    }
    else
    {
      Handle = 0LL;
      v17 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 216) = Handle;
      if ( v17 < 0 )
        goto LABEL_62;
      *(_DWORD *)(v4 + 168) |= 0x40000u;
      *(_QWORD *)(v4 + 208) = a3;
    }
    if ( *(_DWORD *)(v4 + 48) == 2 || (v17 = RIMQueryDev(a1, v4), v17 >= 0) )
    {
      if ( (*(_DWORD *)(v4 + 168) & 0x20) != 0 || *(_QWORD *)(v4 + 232) )
        goto LABEL_89;
      if ( !*(_QWORD *)(a1 + 120) )
      {
        LODWORD(v69) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 528LL);
      }
      v17 = RIMRegisterForDeviceChangeNotifications(
              v4,
              *(struct _DRIVER_OBJECT **)(a1 + 120),
              v40,
              (void *)v4,
              (PVOID *)(v4 + 232));
      if ( v17 >= 0 )
      {
        v17 = RawInputManagerDeviceObjectReference(*(void **)(v4 + 32));
        if ( v17 >= 0 )
        {
LABEL_89:
          RIMDeliverDeviceResetRequest((char *)v4);
          v51 = *(_DWORD *)(v4 + 168) & 0xFFFFFBFF;
          *(_DWORD *)(v4 + 168) = v51;
          if ( *(_DWORD *)(v4 + 48) != 2
            || (v52 = *(_DWORD *)(v4 + 184), (v52 & 0x80u) != 0)
            || (v52 & 0x100) != 0
            || (v52 & 0x200) != 0
            || (v51 & 0x10000) != 0
            || (unsigned int)RIMIsRawInputActive(v4) )
          {
            RIMLockExclusive(a1 + 760);
            v60 = *(_DWORD *)(v4 + 80);
            if ( (v60 & 1) != 0 )
              *(_DWORD *)(v4 + 80) = v60 | 2;
            else
              RIMStartDeviceSpecificRead(a1, v4);
            RIMUnlockExclusive(a1 + 760);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v53 = 0;
            }
            v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v55 = *(const wchar_t **)(v4 + 200);
              v56 = W32GetUserSessionState(WPP_GLOBAL_Control);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v53,
                v54,
                *(_QWORD *)(v56 + 19392),
                v64,
                HandleInformation,
                0x17u,
                v67,
                a1,
                v4,
                v55);
            }
            RIMCloseDev(v4);
            if ( *(_QWORD *)(v4 + 232)
              && (unsigned int)dword_14029AF48 > 5
              && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
            {
              v57 = *(_DWORD *)(v4 + 48);
              Handle = *(HANDLE *)(v4 + 200);
              LODWORD(v69) = RimDeviceTypeToRimInputType(v4, v57);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                (__int64)&dword_14029AF48,
                byte_140278194,
                v58,
                v59,
                (__int64)&v69,
                (const WCHAR **)&Handle);
            }
          }
          goto LABEL_70;
        }
      }
    }
LABEL_62:
    v41 = *(void **)(v4 + 232);
    v42 = v17;
    if ( v41 )
    {
      v17 = IoUnregisterPlugPlayNotification(v41);
      if ( v17 < 0 )
      {
        LODWORD(v69) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 633LL);
      }
      v43 = *(void **)(v4 + 32);
      *(_QWORD *)(v4 + 232) = 0LL;
      ObfDereferenceObject(v43);
    }
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
    {
      v44 = *(_DWORD *)(v4 + 48);
      LODWORD(v69) = v42;
      v45 = RimDeviceTypeToRimInputType(v4, v44);
      Object = *(PVOID *)(v4 + 200);
      Handle = (HANDLE)v45;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v46,
        (__int64)&unk_1402781E0,
        v45,
        v47,
        (const WCHAR **)&Object,
        (__int64)&Handle,
        (__int64)&v69);
    }
    RIMCloseDev(v4);
    RIMFreeDev((struct RawInputManagerObject *)a1, (struct RIMDEV *)v4);
    v4 = 0LL;
LABEL_70:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v48 = 0;
    }
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v68) = v17;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v49,
        *(_QWORD *)(v50 + 19392),
        4u,
        1u,
        0x18u,
        (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
        a1,
        v4,
        v68);
    }
    return (unsigned int)v17;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      *(_QWORD *)(v14 + 19392),
      4u,
      1u,
      0x13u,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
      a1,
      v4,
      0);
  }
  return 0LL;
}
