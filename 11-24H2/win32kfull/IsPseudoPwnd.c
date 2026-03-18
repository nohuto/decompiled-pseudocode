/*
 * XREFs of IsPseudoPwnd @ 0x1400F5860
 * Callers:
 *     NtUserfnOUTCBOXSTRING @ 0x1400F4420 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1400F46F0 (NtUserfnOUTLBOXSTRING.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4D44 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1400F56B4 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPseudoPwnd(__int64 a1)
{
  return (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL;
}
