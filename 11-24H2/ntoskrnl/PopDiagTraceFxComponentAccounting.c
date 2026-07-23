/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x140A55D28
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1402B79AC (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagQueryDevicePropertyString @ 0x140A86280 (PopDiagQueryDevicePropertyString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceFxComponentAccounting(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned __int16 *a4,
        char a5,
        char a6)
{
  struct _DEVICE_OBJECT *v8; // rbx
  unsigned int v9; // edi
  unsigned int DevicePropertyString; // eax
  wchar_t *Buffer; // r14
  wchar_t *v12; // rsi
  unsigned int v13; // ebx
  int v14; // edx
  __int64 v15; // rcx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  char *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  _DWORD *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  _DWORD v39[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  _QWORD *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  _QWORD *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  __int64 *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  _DWORD *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  wchar_t *v52; // [rsp+180h] [rbp+80h]
  _DWORD v53[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  wchar_t *v56; // [rsp+1A0h] [rbp+A0h]
  _DWORD v57[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  _DWORD v61[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  int v64; // [rsp+238h] [rbp+138h] BYREF

  v64 = a2;
  v18 = a1;
  DestinationString = 0LL;
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_140AEDAC0);
  RtlInitUnicodeString(&v20, &word_140AEDAC0);
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_COMPONENT_ACCOUNTING) )
    {
      v16 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v16;
      v26 = 8LL;
      v25 = &v18;
      v27 = &v64;
      v29 = &a5;
      v31 = &PopWnfCsEnterScenarioId;
      v28 = 4LL;
      v30 = 8LL;
      v32 = 8LL;
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_COMPONENT_ACCOUNTING, 0LL, 5u, &UserData);
      if ( a6 )
      {
        if ( !PopDiagFxAccountingTelemetryDisabled )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v18 + 32);
          v9 = (unsigned int)PopDiagQueryDevicePropertyString(v8, DevicePropertyClassName) >> 31;
          DevicePropertyString = PopDiagQueryDevicePropertyString(v8, DevicePropertyClassGuid);
          Buffer = DestinationString.Buffer;
          v12 = v20.Buffer;
          v13 = DevicePropertyString >> 31;
          if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
          {
            v21 = PopWnfCsEnterScenarioId;
            v35 = 8LL;
            v34 = &v21;
            v14 = *(unsigned __int16 *)(v18 + 40);
            v15 = *(_QWORD *)(v18 + 48);
            v36 = v39;
            v17 = v64;
            v40 = &v17;
            v22 = *a3;
            v42 = &v22;
            v44 = a3 + 2;
            v46 = a3 + 7;
            v23 = a3[1];
            v48 = &v23;
            v50 = v53;
            v53[0] = DestinationString.Length;
            v54 = v57;
            v57[0] = v20.Length;
            v58 = v61;
            v60 = *((_QWORD *)a4 + 1);
            v61[0] = *a4;
            p_DestinationString = &DestinationString;
            v38 = v15;
            v39[0] = v14;
            v37 = 2LL;
            v39[1] = 0;
            v41 = 4LL;
            v43 = 8LL;
            v45 = 40LL;
            v47 = 40LL;
            v49 = 8LL;
            v51 = 2LL;
            v52 = Buffer;
            v53[1] = 0;
            v55 = 2LL;
            v56 = v12;
            v57[1] = 0;
            v59 = 2LL;
            v61[1] = 0;
            *(_QWORD *)&DestinationString.Length = 0x1000000LL;
            v63 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E076F0,
              (unsigned __int8 *)&byte_14004A7DF,
              0LL,
              0LL,
              0x11u,
              &v33);
          }
          if ( !(_BYTE)v9 )
            ExFreePoolWithTag(Buffer, 0x67696450u);
          if ( !(_BYTE)v13 )
            ExFreePoolWithTag(v12, 0x67696450u);
        }
      }
    }
  }
}
