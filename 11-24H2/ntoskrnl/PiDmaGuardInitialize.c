/*
 * XREFs of PiDmaGuardInitialize @ 0x1405A8D90
 * Callers:
 *     PnpBootPhaseComplete @ 0x14071A5C4 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x140731D4C (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseZero @ 0x140C256A0 (PipDmgInitPhaseZero.c)
 */

__int64 __fastcall PiDmaGuardInitialize(int a1)
{
  __int64 result; // rax

  result = 0LL;
  switch ( a1 )
  {
    case 0:
      return PipDmgInitPhaseZero();
    case 1:
      if ( PipDmaGuardPolicy )
        PipCslUnlockCallback = (__int64)PipDmgConsoleUnlockCallback;
      break;
    case 2:
      return PipDmgInitPhaseTwo();
    default:
      __fastfail(5u);
  }
  return result;
}
