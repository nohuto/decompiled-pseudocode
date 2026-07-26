/*
 * XREFs of ?resize@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x140001AC8
 * Callers:
 *     ndisEtwCaptureMiniportEventLog @ 0x1400969B0 (ndisEtwCaptureMiniportEventLog.c)
 * Callees:
 *     ?reserve@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x1400018C4 (-reserve@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

char __fastcall Rtl::KArray<EtwMiniportEvent,1>::resize(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rcx

  result = Rtl::KArray<EtwMiniportEvent,1>::reserve((unsigned int *)a1, a2);
  if ( result )
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( a2 > v5 )
      memset((void *)(*(_QWORD *)(a1 + 8) + 4 * v5), 0, 4 * (a2 - v5));
    *(_DWORD *)(a1 + 4) = a2;
    return 1;
  }
  return result;
}
