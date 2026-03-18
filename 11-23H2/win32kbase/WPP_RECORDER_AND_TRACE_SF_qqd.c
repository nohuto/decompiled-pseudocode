/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqD @ 0x1C00C3174
 * Callers:
 *     InitCreateSharedSection @ 0x1C02DCE04 (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

PVOID WPP_RECORDER_AND_TRACE_SF_qqD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        ...)
{
  PVOID result; // rax
  struct _LIST_ENTRY *Flink; // rdi
  int v12; // [rsp+20h] [rbp-58h]
  _QWORD v13[2]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+50h] BYREF
  va_list va; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v14 = va_arg(va1, _QWORD);
  result = gpvSharedBase;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v13[0] = gpvSharedBase;
  if ( a2 )
    result = (PVOID)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, _QWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                      a1,
                      43LL,
                      &WPP_169ed334ae81372bb981068a10849f93_Traceguids,
                      13LL,
                      v13,
                      8LL,
                      (__int64 *)va,
                      8LL,
                      va1,
                      4LL,
                      0LL);
  if ( a3 )
  {
    LOWORD(v12) = 13;
    return (PVOID)WppAutoLogTrace(
                    Flink,
                    4LL,
                    14LL,
                    &WPP_169ed334ae81372bb981068a10849f93_Traceguids,
                    v12,
                    v13,
                    8LL,
                    (__int64 *)va);
  }
  return result;
}
