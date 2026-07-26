/*
 * XREFs of WPP_RECORDER_SF_qq_guid_ @ 0x14009EE50
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x140029DF0 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qq_guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8)
{
  int v10; // [rsp+20h] [rbp-48h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids, 0x96u, &a6, 8LL, &a7, 8LL, a8, 16LL, 0LL);
  LOWORD(v10) = 150;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids, v10, &a6, 8LL, &a7);
}
