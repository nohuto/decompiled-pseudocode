/*
 * XREFs of PopDiagTraceFxDeviceAccounting @ 0x1402B7DE8
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1402B79AC (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagQueryDevicePropertyString @ 0x140A86280 (PopDiagQueryDevicePropertyString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 *a2, unsigned __int16 *a3, ...)
{
  size_t v5; // rax
  size_t v6; // rax
  char v7; // di
  struct _DEVICE_OBJECT *v8; // rbx
  unsigned int v9; // esi
  unsigned int DevicePropertyString; // eax
  PVOID v11; // r15
  PVOID v12; // r14
  unsigned int v13; // ebx
  int v14; // edx
  __int64 v15; // rcx
  char v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v20; // [rsp+60h] [rbp-A0h]
  PVOID v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  va_list v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  _DWORD *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  _DWORD v38[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  _QWORD *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  _QWORD *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  __int64 *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  _DWORD *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  PVOID v49; // [rsp+170h] [rbp+70h]
  _DWORD v50[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  PVOID v53; // [rsp+190h] [rbp+90h]
  _DWORD v54[2]; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  __int64 v57; // [rsp+1B0h] [rbp+B0h]
  _DWORD v58[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  __int64 v61; // [rsp+238h] [rbp+138h] BYREF
  va_list va; // [rsp+238h] [rbp+138h]
  __int64 v63; // [rsp+240h] [rbp+140h]
  va_list va1; // [rsp+248h] [rbp+148h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v61 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, _QWORD);
  v17 = a1;
  P = (PVOID)&SourceString;
  v5 = 2 * wcslen(&SourceString);
  v21 = (PVOID)&SourceString;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  LOWORD(v18) = v5;
  v6 = 2 * wcslen(&SourceString);
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v20 = v6;
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_ACCOUNTING) )
    {
      v7 = 1;
      v16 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v16;
      v27 = 8LL;
      v26 = &v17;
      va_copy(v28, va);
      v30 = &PopWnfCsEnterScenarioId;
      v29 = 8LL;
      v31 = 8LL;
      EtwWriteEx(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_ACCOUNTING, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      if ( (_BYTE)v63 )
      {
        if ( !PopDiagFxAccountingTelemetryDisabled )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v17 + 32);
          v9 = (unsigned int)PopDiagQueryDevicePropertyString(v8, DevicePropertyClassName) >> 31;
          DevicePropertyString = PopDiagQueryDevicePropertyString(v8, DevicePropertyClassGuid);
          v11 = P;
          v12 = v21;
          v13 = DevicePropertyString >> 31;
          if ( (unsigned int)dword_140E076F0 > 5 )
          {
            if ( (qword_140E07700 & 0x400000000000LL) == 0 || (qword_140E07708 & 0x400000000000LL) != qword_140E07708 )
              v7 = 0;
            if ( v7 )
            {
              v22 = PopWnfCsEnterScenarioId;
              v33 = &v22;
              v34 = 8LL;
              v14 = *(unsigned __int16 *)(v17 + 40);
              v15 = *(_QWORD *)(v17 + 48);
              v35 = v38;
              v23 = *a2;
              v39 = &v23;
              v41 = a2 + 2;
              v43 = a2 + 7;
              v24 = a2[1];
              v45 = &v24;
              v47 = v50;
              v50[0] = (unsigned __int16)v18;
              v51 = v54;
              v54[0] = v20;
              v55 = v58;
              v57 = *((_QWORD *)a3 + 1);
              v58[0] = *a3;
              v59 = &v18;
              v37 = v15;
              v38[0] = v14;
              v38[1] = 0;
              v50[1] = 0;
              v54[1] = 0;
              v58[1] = 0;
              v36 = 2LL;
              v40 = 8LL;
              v42 = 40LL;
              v44 = 40LL;
              v46 = 8LL;
              v48 = 2LL;
              v49 = P;
              v52 = 2LL;
              v53 = v21;
              v56 = 2LL;
              v18 = 0x1000000LL;
              v60 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(&dword_140E076F0, byte_14004A8C9, 0LL, 0LL, 16, v32);
            }
          }
          if ( !(_BYTE)v9 )
            ExFreePoolWithTag(v11, 0x67696450u);
          if ( !(_BYTE)v13 )
            ExFreePoolWithTag(v12, 0x67696450u);
        }
      }
    }
  }
}
