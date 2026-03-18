/*
 * XREFs of RIMApplyPTPConfigRemedyWorker @ 0x1400F1328
 * Callers:
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x140006890 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400A8E7C (RIMConfigurePointerDevice.c)
 *     IsPTPInputEnabled @ 0x1400D7598 (IsPTPInputEnabled.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1401DCEC4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall RIMApplyPTPConfigRemedyWorker(__int64 a1, __int64 a2)
{
  _UNKNOWN **v4; // rax
  char v5; // si
  char v6; // r14
  int v7; // ebx
  __int64 UserSessionState; // rax
  unsigned int v9; // ecx
  unsigned __int8 v10; // si
  char v11; // bl
  char v12; // r14
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rcx
  unsigned __int16 *v21; // r8
  __int64 v22; // r9
  char v23; // r14
  char v24; // r15
  int v25; // ebx
  __int64 v26; // rax
  __int64 v28; // [rsp+50h] [rbp-39h]
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int16 *v30[3]; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v31[2]; // [rsp+80h] [rbp-9h] BYREF
  int v32; // [rsp+A0h] [rbp+17h]

  LODWORD(v4) = IsPTPInputEnabled(a1);
  if ( (_DWORD)v4 && (*(_DWORD *)(a2 + 168) & 0x10000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v5 = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(unsigned __int8 *)(a2 + 190);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v5,
        v6,
        *(_QWORD *)(UserSessionState + 19392),
        4u,
        1u,
        0xCu,
        (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
        a1,
        a2,
        v7);
    }
    v9 = *(_DWORD *)(a2 + 2308);
    LODWORD(v4) = 25 * (v9 / 0x19);
    if ( v9 % 0x19 == 1
      && (LOBYTE(v4) = *(_BYTE *)(a2 + 190),
          v10 = (_BYTE)v4 + 1,
          *(_BYTE *)(a2 + 190) = (_BYTE)v4 + 1,
          (unsigned __int8)v4 < 0x14u) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v28) = v10;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          *(_QWORD *)(v13 + 19392),
          4u,
          1u,
          0xDu,
          (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
          a1,
          a2,
          v28);
      }
      Object = 0LL;
      LOBYTE(v4) = RIMFindSiblingPointerDeviceForMouse(a2, &Object);
      v14 = (__int64 *)Object;
      if ( Object )
      {
        v15 = *((_QWORD *)Object + 49);
        RIMLockExclusive(v15 + 104);
        if ( *(_BYTE *)(a2 + 190) == 1
          && (unsigned int)dword_14029AF48 > 5
          && tlgKeywordOn((__int64)&dword_14029AF48, 0x800000000000LL) )
        {
          Object = v14 + 33;
          v30[0] = (unsigned __int16 *)(a2 + 192);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v16,
            (__int64)&unk_14027A5E8,
            v17,
            v18,
            v30,
            (unsigned __int16 **)&Object);
        }
        RIMConfigurePointerDevice(v15, (__int64)(v14 + 9), v14[64]);
        if ( !v14[66] )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 162LL);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)(v14 + 9), v14[64], v15);
        RIMUnlockExclusive(v15 + 104);
LABEL_41:
        LOBYTE(v4) = ObfDereferenceObject(v14);
      }
    }
    else if ( *(_BYTE *)(a2 + 190) >= 0x14u )
    {
      v19 = dword_14029AF48;
      v14 = 0LL;
      Object = 0LL;
      if ( dword_14029AF48 )
      {
        RIMFindSiblingPointerDeviceForMouse(a2, &Object);
        v19 = dword_14029AF48;
        v14 = (__int64 *)Object;
      }
      v32 = *(_DWORD *)L">";
      v30[2] = (unsigned __int16 *)v31;
      v30[1] = (unsigned __int16 *)2359330;
      v31[0] = *(_OWORD *)L"<Unknown sibling>";
      v31[1] = *(_OWORD *)L" sibling>";
      if ( v19 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x800000000000LL) )
      {
        v30[0] = v21;
        Object = (PVOID)(a2 + 192);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v20,
          (__int64)&unk_14027A62B,
          (__int64)v21,
          v22,
          (unsigned __int16 **)&Object,
          v30);
      }
      *(_DWORD *)(a2 + 168) &= ~0x10000000u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v23 = 0;
      }
      v4 = &WPP_RECORDER_INITIALIZED;
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = *(unsigned __int8 *)(a2 + 190);
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v28) = v25;
        LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_qqd(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v23,
                       v24,
                       *(_QWORD *)(v26 + 19392),
                       4u,
                       1u,
                       0xEu,
                       (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids,
                       a1,
                       a2,
                       v28);
      }
      if ( v14 )
        goto LABEL_41;
    }
  }
  return (char)v4;
}
