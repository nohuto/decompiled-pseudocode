/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1402E46AC
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiProcessWsInSwapFault @ 0x14046DEB4 (MiProcessWsInSwapFault.c)
 * Callees:
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( *(__int64 *)(a1 + 40) >= 0 && (*(_QWORD *)(a1 + 16) & 6) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      v1 = *(_QWORD *)(a1 + 16);
      if ( (v1 & 4) != 0 )
        *(_QWORD *)(a1 + 16) &= ~4uLL;
      else
        v1 &= -(__int64)((v1 & 2) != 0);
      *(_QWORD *)(a1 + 16) &= ~2uLL;
    }
    MiSetPfnModified(a1, 1LL);
  }
  return v1;
}
