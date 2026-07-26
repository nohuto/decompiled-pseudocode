/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1400AA36C
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1401970B8 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids, 0xEu, va, 8LL, 0LL);
  LOWORD(v7) = 14;
  return WppAutoLogTrace(a1, 3LL, 1LL, &WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids, v7, va, 8LL, 0LL);
}
