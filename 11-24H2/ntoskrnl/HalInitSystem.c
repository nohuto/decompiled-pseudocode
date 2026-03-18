/*
 * XREFs of HalInitSystem @ 0x140B4B6C0
 * Callers:
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInitSystemPhase1 @ 0x140B4B7C4 (HalpInitSystemPhase1.c)
 *     __security_init_cookie @ 0x140BDEC0C (__security_init_cookie.c)
 *     HalpInitSystemPhase0 @ 0x140C0D74C (HalpInitSystemPhase0.c)
 */

__int64 __fastcall HalInitSystem(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
      KeBugCheckEx(0x5Cu, 0x8200uLL, 0xFFFFFFFFC000000DuLL, (unsigned int)BugCheckParameter3, 0LL);
    return HalpInitSystemPhase1(a2);
  }
  else
  {
    _security_init_cookie();
    return HalpInitSystemPhase0(a2);
  }
}
