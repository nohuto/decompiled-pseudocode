/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01A3364
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A21F8 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_Sdq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        const wchar_t *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const wchar_t *v10; // rbx
  __int64 v11; // rdi
  struct RECORDER_LOG__ *v12; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  bool v19; // zf
  int v20; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+50h] BYREF
  va_list va; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v22 = va_arg(va1, _QWORD);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  v12 = gRimLog;
  v15 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
                            a7,
                            v18,
                            v17,
                            (__int64 *)va,
                            4LL,
                            va1,
                            8LL,
                            0LL);
  }
  if ( a3 )
  {
    v19 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v15 = 2 * v11 + 2;
      v19 = a9 == 0LL;
    }
    if ( v19 )
      v10 = L"NULL";
    LOWORD(v20) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v12,
                          4LL,
                          1LL,
                          &WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
                          v20,
                          v10,
                          v15,
                          (__int64 *)va);
  }
  return result;
}
