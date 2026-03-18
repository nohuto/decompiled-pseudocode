/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x140112334
 * Callers:
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1401120C4 (RIMDeviceNotifyAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLLD @ 0x1401E92D4 (WPP_RECORDER_AND_TRACE_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v10; // rax
  char v11; // bl
  char v12; // di
  __int64 UserSessionState; // rax
  _DWORD *result; // rax
  __int64 v15; // rax
  char v16; // bl
  char v17; // di
  __int64 v18; // rax
  char v19; // bl
  char v20; // di
  __int64 v21; // rax
  char v22; // r14
  bool v23; // r15
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  v7 = *a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( *a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = a3[1] - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v7 )
  {
    v10 = *a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( *a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
      v10 = a3[1] - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( !v10 )
    {
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          *(_QWORD *)(UserSessionState + 19392),
          4u,
          1u,
          0xBu,
          (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
          a1,
          a2);
      }
      result = a5;
LABEL_14:
      *result = 1;
      return result;
    }
    v15 = *a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( *a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
      v15 = a3[1] - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    if ( !v15 )
    {
      v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          *(_QWORD *)(v18 + 19392),
          4u,
          1u,
          0xCu,
          (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
          a1,
          a2);
      }
      result = a6;
      goto LABEL_14;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v22 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v22 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      return (_DWORD *)WPP_RECORDER_AND_TRACE_SF_LLLD(
                         *((_QWORD *)WPP_GLOBAL_Control + 3),
                         v26,
                         v25,
                         *(_QWORD *)(v24 + 19392));
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
      result = (_DWORD *)WPP_RECORDER_AND_TRACE_SF_qq(
                           *((_QWORD *)WPP_GLOBAL_Control + 3),
                           v19,
                           v20,
                           *(_QWORD *)(v21 + 19392),
                           4u,
                           1u,
                           0xAu,
                           (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                           a1,
                           a2);
    }
    *a4 = 1;
  }
  return result;
}
