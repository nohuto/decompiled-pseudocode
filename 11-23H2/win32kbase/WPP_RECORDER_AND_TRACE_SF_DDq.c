/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C0184CEC
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01841C0 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_DDq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // rsi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v14; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v8 = gRimLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               4LL,
               va2,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(v8, 4LL, 1LL, a8, v11, (__int64 *)va, 4LL, (__int64 *)va1);
  }
  return result;
}
