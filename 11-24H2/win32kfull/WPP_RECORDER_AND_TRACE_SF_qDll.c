/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDll @ 0x1402C8DBC
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qDll(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-68h]
  _DWORD v12[4]; // [rsp+70h] [rbp-18h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v15; // [rsp+D8h] [rbp+50h]
  __int64 v16; // [rsp+E0h] [rbp+58h] BYREF
  va_list va1; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v12[0] = 129;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _DWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_b4ffe35068c33a91d7eceb7daa644209_Traceguids,
               10LL,
               (__int64 *)va,
               8LL,
               v12,
               4LL,
               (__int64 *)va1,
               4LL,
               va2,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 10;
    return WppAutoLogTrace(
             a4,
             4LL,
             9LL,
             &WPP_b4ffe35068c33a91d7eceb7daa644209_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             v12,
             4LL,
             (__int64 *)va1,
             4LL,
             va2);
  }
  return result;
}
