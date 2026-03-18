/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x1C0199D28
 * Callers:
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01A1CEC (RIMDeviceNotifyAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLLD @ 0x1C019A160 (WPP_RECORDER_AND_TRACE_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r9
  char v9; // dl
  _DWORD *result; // rax
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rax
  char v14; // dl
  char v15; // bl
  int v16; // r9d

  v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v8 = a2;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v7 )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_DWORD *)WPP_RECORDER_AND_TRACE_SF_qq(
                           (__int64)WPP_GLOBAL_Control->AttachedDevice,
                           v9,
                           WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                           (__int64)gRimLog,
                           4u,
                           1u,
                           0xAu,
                           (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
                           a1,
                           v8);
    *a4 = 1;
    return result;
  }
  v11 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
    v11 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v11 )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0xBu,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
        a1,
        v8);
    result = a5;
LABEL_37:
    *result = 1;
    return result;
  }
  v13 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
    v13 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v13 )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0xCu,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
        a1,
        v8);
    result = a6;
    goto LABEL_37;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (v15 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v15 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int16 *)(a3 + 6);
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LOBYTE(a2) = v15;
    return (_DWORD *)WPP_RECORDER_AND_TRACE_SF_LLLD(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v16);
  }
  return result;
}
