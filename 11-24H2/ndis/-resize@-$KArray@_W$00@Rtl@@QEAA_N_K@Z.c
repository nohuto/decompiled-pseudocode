/*
 * XREFs of ?resize@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001B1C
 * Callers:
 *     ndisEtwCaptureMiniportMatchingHardwareId @ 0x140096C84 (ndisEtwCaptureMiniportMatchingHardwareId.c)
 * Callees:
 *     ?reserve@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001980 (-reserve@-$KArray@_W$00@Rtl@@QEAA_N_K@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

char __fastcall Rtl::KArray<wchar_t,1>::resize(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rcx

  result = Rtl::KArray<wchar_t,1>::reserve((unsigned int *)a1, a2);
  if ( result )
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( a2 > v5 )
      memset((void *)(*(_QWORD *)(a1 + 8) + 2 * v5), 0, 2 * (a2 - v5));
    *(_DWORD *)(a1 + 4) = a2;
    return 1;
  }
  return result;
}
