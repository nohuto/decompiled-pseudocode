/*
 * XREFs of WPP_SF__guid_ @ 0x1800C3324
 * Callers:
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800C2D20 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp-8h]

  return EtwTraceMessage(a1, 43LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, 14LL, a4, 16LL, 0LL, v5, v6);
}
