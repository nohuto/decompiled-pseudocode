/*
 * XREFs of MiFreeReservationRun @ 0x140A39448
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x140A39390 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140A393FC (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileHigh @ 0x1404295F0 (MiGetPageFileHigh.c)
 */

void __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 PageFileHigh; // rdi
  __int64 updated; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v6 );
  }
}
