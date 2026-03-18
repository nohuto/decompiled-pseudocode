/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E248
 * Callers:
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0072890 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C018E804 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x1C01A101C (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01A2070 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01A2D78 (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01A2F10 (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01A3090 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1C01AC23C (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 v8; // rbx
  struct RECORDER_LOG__ *v9; // r15
  __int64 v10; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+100h] [rbp+48h] BYREF
  va_list va; // [rsp+100h] [rbp+48h]
  __int64 v19; // [rsp+108h] [rbp+50h] BYREF
  va_list va1; // [rsp+108h] [rbp+50h]
  __int64 v21; // [rsp+110h] [rbp+58h] BYREF
  va_list va2; // [rsp+110h] [rbp+58h]
  __int64 v23; // [rsp+118h] [rbp+60h] BYREF
  va_list va3; // [rsp+118h] [rbp+60h]
  const wchar_t *v25; // [rsp+120h] [rbp+68h]
  va_list va4; // [rsp+128h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  v25 = va_arg(va4, const wchar_t *);
  v8 = (__int64)v25;
  v9 = gRimLog;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v25[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = v25;
    if ( !v25 )
      v15 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      a8,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      v15,
      v14,
      va4,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v10;
      while ( *(_WORD *)(v8 + 2 * v10) );
    }
    LOWORD(v16) = a7;
    WppAutoLogTrace(v9, a5, 1LL, a8, v16, (__int64 *)va, 8LL, (__int64 *)va1);
  }
}
