/*
 * XREFs of RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01A2C4C
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BB8 (RIMDoOnPnpNotification.c)
 *     RIMShouldVirtualDeviceBeClosed @ 0x1C0199FC4 (RIMShouldVirtualDeviceBeClosed.c)
 */

void __fastcall RIMVirtDeviceRootPnpEndSyncAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // dl
  __int64 i; // rbx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x31u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      *(const wchar_t **)(a1 + 48));
  if ( !*(_BYTE *)(v1 + 81) && !*(_BYTE *)(v1 + 80) )
  {
    for ( i = *(_QWORD *)(v1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(i + 208), 0)
        && (unsigned int)RIMShouldVirtualDeviceBeClosed(i) )
      {
        v6 = *(_DWORD *)(i + 184);
        if ( (v6 & 0x2000) == 0 )
        {
          *(_DWORD *)(i + 184) = v6 | 0x100002;
          RIMDoOnPnpNotification(v1, i, v5);
          *(_DWORD *)(i + 184) |= 0x100008u;
          RIMDoOnPnpNotification(v1, i, v7);
        }
      }
    }
  }
}
