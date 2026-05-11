/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_D @ 0x14000C2FC
 * Callers:
 *     PowerSettingCallback @ 0x14000C050 (PowerSettingCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_AND_TRACE_SF_D(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = -1073741811;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, _DWORD *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_36ecd4db00a936131fa2a547c127b75e_Traceguids,
               11LL,
               v8,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v7) = 11;
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, void *, int, _DWORD *, __int64, _QWORD))WppAutoLogTrace)(
             a4,
             0LL,
             1LL,
             &WPP_36ecd4db00a936131fa2a547c127b75e_Traceguids,
             v7,
             v8,
             4LL,
             0LL);
  }
  return result;
}
