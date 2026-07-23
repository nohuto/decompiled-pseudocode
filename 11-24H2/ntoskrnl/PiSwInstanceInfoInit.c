/*
 * XREFs of PiSwInstanceInfoInit @ 0x1409F1CC0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x1408E1D40 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x1409F2D94 (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(_WORD **)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
