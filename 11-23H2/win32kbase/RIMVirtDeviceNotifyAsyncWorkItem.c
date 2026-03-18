/*
 * XREFs of RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01A28A4
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FA8 (RIMIDERemoveInjectionDevice.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BB8 (RIMDoOnPnpNotification.c)
 */

void __fastcall RIMVirtDeviceNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // r14d
  bool v4; // dl
  char v5; // dl
  __int64 v6; // rbx
  char v7; // dl
  NTSTATUS v8; // eax
  char v9; // dl
  NTSTATUS v10; // eax
  __int64 v11; // r8
  char v12; // dl
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+48h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 112);
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      44,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids);
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x2Du,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      *(const wchar_t **)(a1 + 48));
  if ( !*(_BYTE *)(v1 + 81) && !*(_BYTE *)(v1 + 80) )
  {
    v6 = *(_QWORD *)(v1 + 424);
    if ( v6 )
    {
      while ( !RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(v6 + 208), 0) )
      {
        v6 = *(_QWORD *)(v6 + 40);
        if ( !v6 )
          goto LABEL_22;
      }
      v8 = ObReferenceObjectByPointer((PVOID)v1, 3u, ExRawInputManagerObjectType, 1);
      if ( v8 < 0 )
      {
        v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gRimLog,
            4u,
            1u,
            0x2Eu,
            (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
            v1,
            v8);
      }
      v10 = ObReferenceObjectByPointer(*(PVOID *)(v6 + 32), 3u, ExRawInputManagerObjectType, 1);
      if ( v10 < 0 )
      {
        v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = v10;
          WPP_RECORDER_AND_TRACE_SF_qd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v11,
            (__int64)gRimLog,
            4u,
            1u,
            0x2Fu,
            (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
            v1,
            v15);
        }
      }
      v13 = *(_DWORD *)(v6 + 184);
      if ( (v13 & 0x2000) != 0 )
      {
        if ( v3 == 3 )
          RIMIDERemoveInjectionDevice(*(_QWORD *)(v6 + 32));
        goto LABEL_55;
      }
      switch ( v3 )
      {
        case 2:
          v14 = v13 | 0x80001;
          break;
        case 3:
          v14 = v13 | 0x100002;
          break;
        case 4:
          v14 = v13 | 0x100008;
          break;
        default:
LABEL_52:
          RIMDoOnPnpNotification(v1, v6, v11);
LABEL_55:
          ObfDereferenceObject(*(PVOID *)(v6 + 32));
          ObfDereferenceObject((PVOID)v1);
          return;
      }
      *(_DWORD *)(v6 + 184) = v14;
      goto LABEL_52;
    }
  }
LABEL_22:
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x30u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      *(const wchar_t **)(a1 + 48));
}
