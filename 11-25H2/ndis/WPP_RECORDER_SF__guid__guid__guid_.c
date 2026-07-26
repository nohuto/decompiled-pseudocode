/*
 * XREFs of WPP_RECORDER_SF__guid__guid__guid_ @ 0x1400D09B8
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid__guid__guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // [rsp+20h] [rbp-58h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_3bc756b3e3313898ba315478217523d2_Traceguids, 0x13u, a6, 16LL, a7, 16LL, a8, 16LL, 0LL);
  LOWORD(v10) = 19;
  return WppAutoLogTrace(a1, 3LL, 22LL, &WPP_3bc756b3e3313898ba315478217523d2_Traceguids, v10, a6, 16LL, a7);
}
