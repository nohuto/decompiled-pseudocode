/*
 * XREFs of ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400A6D28
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400A6A4C (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400A5A10 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

int __fastcall RetrieveSegmentedBlob(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        char **a3,
        char **a4,
        struct _HIDP_CAPS *a5,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        struct _HIDP_VALUE_CAPS *a7)
{
  char **v8; // rdi
  int result; // eax
  struct _HIDP_VALUE_CAPS *v11; // rsi
  ULONG UsageValue; // r14d
  CHAR *v13; // r12
  PCHAR v14; // rbx
  PIRP v15; // rax
  struct _FILE_OBJECT *v16; // rdi
  bool v17; // bl
  bool v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  PIRP v22; // rax
  NTSTATUS Status; // esi
  bool v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  __int16 Report; // [rsp+30h] [rbp-50h]
  CHAR *v40; // [rsp+50h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF

  v8 = a4;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  result = BuildSignatureFeatureReport(a5, 0LL, 0LL, 0LL, a4, a3);
  if ( result >= 0 )
  {
    v11 = a7;
    UsageValue = 0;
    v13 = *a3;
    v14 = *v8;
    v40 = v14;
    *v14 = a7->ReportID;
    while ( 1 )
    {
      if ( UsageValue >= 8 )
        return result;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      HidP_SetUsageValue(
        HidP_Feature,
        v11->UsagePage,
        0,
        0xC6u,
        UsageValue,
        PreparsedData,
        *v8,
        a5->FeatureReportByteLength);
      v15 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              DeviceObject,
              *v8,
              a5->FeatureReportByteLength,
              0LL,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v15 )
        break;
      v16 = a2;
      v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
      result = IofCallDriver(DeviceObject, v15);
      if ( result == 259 )
      {
        v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            14,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        result = IoStatusBlock.Status;
        v14 = v40;
        v16 = a2;
      }
      if ( result >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v22 = IoBuildDeviceIoControlRequest(
                0xB0192u,
                DeviceObject,
                0LL,
                0,
                v14,
                a5->FeatureReportByteLength,
                0,
                &Event,
                &IoStatusBlock);
        if ( !v22 )
        {
          v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return -1073741668;
          v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
          Report = 15;
          goto LABEL_55;
        }
        v22->Tail.Overlay.CurrentStackLocation[-1].FileObject = v16;
        Status = IofCallDriver(DeviceObject, v22);
        if ( Status == 259 )
        {
          v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v27) = v25;
            LOBYTE(v28) = v24;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v28,
              v27,
              *(_QWORD *)(v26 + 19392),
              3,
              1,
              16,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
          }
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v14 = v40;
        }
        if ( Status )
        {
          v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v32) = v30;
            LOBYTE(v33) = v29;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v33,
              v32,
              *(_QWORD *)(v31 + 19392),
              3,
              1,
              17,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
              Status);
          }
          return -1073741668;
        }
        v11 = a7;
        result = HidP_GetUsageValueArray(
                   HidP_Feature,
                   a7->UsagePage,
                   0,
                   0xC7u,
                   v13,
                   0x20u,
                   PreparsedData,
                   v14,
                   a5->FeatureReportByteLength);
        if ( result < 0 )
          return result;
        v13 += 32;
      }
      v8 = a4;
      ++UsageValue;
    }
    v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return -1073741668;
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
    Report = 13;
LABEL_55:
    LOBYTE(v38) = v35;
    LOBYTE(v37) = v34;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v38,
      *(_QWORD *)(v36 + 19392),
      3,
      1,
      Report,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    return -1073741668;
  }
  return result;
}
