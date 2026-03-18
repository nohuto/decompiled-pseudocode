/*
 * XREFs of RIMApplyPTPConfigRemedyWorker @ 0x1C01B3CF8
 * Callers:
 *     rimInputApc @ 0x1C00E2180 (rimInputApc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsPTPInputEnabled @ 0x1C00DEE8A (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C0180550 (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0180FF4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C0192B28 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C01B3C48 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 */

char __fastcall RIMApplyPTPConfigRemedyWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // dl
  unsigned int v9; // ecx
  char v10; // dl
  unsigned __int16 *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int16 *v17; // rcx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // rdi
  __int64 v20; // rcx
  unsigned __int16 *v21; // r8
  __int64 v22; // r9
  char v23; // dl
  int v25; // [rsp+20h] [rbp-69h]
  unsigned __int16 *v26; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int16 *v27[3]; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v28[2]; // [rsp+80h] [rbp-9h] BYREF
  int v29; // [rsp+A0h] [rbp+17h]

  LODWORD(v5) = IsPTPInputEnabled(a1, a2, a3, a4);
  if ( (_DWORD)v5 && (*(_DWORD *)(a2 + 184) & 0x10000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v8 = 0;
    }
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v6,
        (__int64)gRimLog,
        v25,
        1u,
        0xCu,
        (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids);
    v9 = *(_DWORD *)(a2 + 2308);
    LODWORD(v5) = 25 * (v9 / 0x19);
    if ( v9 % 0x19 == 1
      && (LOBYTE(v5) = *(_BYTE *)(a2 + 206),
          v7 = (unsigned int)((_DWORD)v5 + 1),
          *(_BYTE *)(a2 + 206) = (_BYTE)v5 + 1,
          (unsigned __int8)v5 < 0x14u) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v10 = 0;
      }
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v6,
          (__int64)gRimLog,
          v25,
          1u,
          0xDu,
          (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids);
      v26 = 0LL;
      LOBYTE(v5) = RIMFindSiblingPointerDeviceForMouse(a2, &v26, v6, v7);
      v11 = v26;
      if ( v26 )
      {
        v12 = *((_QWORD *)v26 + 51);
        RIMLockExclusive(v12 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && (unsigned int)dword_1C02883D8 > 5
          && tlgKeywordOn((__int64)&dword_1C02883D8, 0x800000000000LL) )
        {
          v26 = v11 + 140;
          v27[0] = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v13,
            byte_1C025AD4B,
            v14,
            v15,
            v27,
            &v26);
        }
        RIMConfigurePointerDevice(v12, (__int64)(v11 + 36), *((_QWORD *)v11 + 66));
        if ( !*((_QWORD *)v11 + 68) )
        {
          LODWORD(v26) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 162);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)(v11 + 36), *((_QWORD *)v11 + 66), v12, v16);
        *(_QWORD *)(v12 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 104, 0LL);
        KeLeaveCriticalRegion();
        v17 = v11;
        goto LABEL_42;
      }
    }
    else if ( *(_BYTE *)(a2 + 206) >= 0x14u )
    {
      v18 = dword_1C02883D8;
      v19 = 0LL;
      v26 = 0LL;
      if ( dword_1C02883D8 )
      {
        RIMFindSiblingPointerDeviceForMouse(a2, &v26, v6, v7);
        v18 = dword_1C02883D8;
        v19 = v26;
      }
      v29 = *(_DWORD *)L">";
      v27[2] = (unsigned __int16 *)v28;
      v27[1] = (unsigned __int16 *)2359330;
      v28[0] = *(_OWORD *)L"<Unknown sibling>";
      v28[1] = *(_OWORD *)L" sibling>";
      if ( v18 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x800000000000LL) )
      {
        v27[0] = v21;
        v26 = (unsigned __int16 *)(a2 + 208);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v20,
          byte_1C025AD8E,
          (__int64)v21,
          v22,
          &v26,
          v27);
      }
      *(_DWORD *)(a2 + 184) &= ~0x10000000u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v23 = 0;
      }
      v5 = &WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LOBYTE(v5) = WPP_RECORDER_AND_TRACE_SF_qqd(
                       (__int64)WPP_GLOBAL_Control->AttachedDevice,
                       v23,
                       WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                       (__int64)gRimLog,
                       v25,
                       1u,
                       0xEu,
                       (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids);
      if ( v19 )
      {
        v17 = v19;
LABEL_42:
        LOBYTE(v5) = ObfDereferenceObject(v17);
      }
    }
  }
  return (char)v5;
}
