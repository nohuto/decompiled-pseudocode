/*
 * XREFs of ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400A5A10
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400A6A4C (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400A6D28 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall BuildSignatureFeatureReport(
        struct _HIDP_CAPS *a1,
        struct _HIDP_VALUE_CAPS *a2,
        struct _DEVICE_OBJECT *a3,
        struct _FILE_OBJECT *a4,
        char **a5,
        char **a6)
{
  unsigned __int64 FeatureReportByteLength; // rdx
  unsigned int v11; // ebx
  char *OutputBuffer; // r14
  PIRP v13; // rax
  bool v14; // di
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  NTSTATUS Status; // edi
  bool v20; // di
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // si
  bool v26; // bp
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char *v30; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  FeatureReportByteLength = a1->FeatureReportByteLength;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v11 = -1073741811;
  OutputBuffer = (char *)Win32AllocPoolZInitImpl(64LL, FeatureReportByteLength, 0x69667355u);
  *a5 = OutputBuffer;
  if ( OutputBuffer )
  {
    if ( a2 && a3 && a4 )
    {
      *OutputBuffer = a2->ReportID;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v13 = IoBuildDeviceIoControlRequest(
              0xB0192u,
              a3,
              0LL,
              0,
              OutputBuffer,
              a1->FeatureReportByteLength,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v13 )
      {
        v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            10,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
LABEL_14:
        v11 = -1073741668;
        goto LABEL_38;
      }
      v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
      Status = IofCallDriver(a3, v13);
      if ( Status == 259 )
      {
        v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v20;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 19392),
            3,
            1,
            11,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v25;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(v27 + 19392),
            3,
            1,
            12,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
            Status);
        }
        goto LABEL_14;
      }
    }
    else
    {
      Status = 0;
    }
    v30 = (char *)Win32AllocPoolZInitImpl(256LL, 0x100uLL, 0x69667355u);
    *a6 = v30;
    if ( !v30 )
      Status = -1073741668;
    v11 = Status;
  }
LABEL_38:
  if ( !*a6 && *a5 )
  {
    GreDeleteFastMutex(*a5);
    *a5 = 0LL;
  }
  return v11;
}
