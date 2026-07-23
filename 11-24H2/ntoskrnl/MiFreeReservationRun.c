/*
 * XREFs of MiFreeReservationRun @ 0x140A32FB4
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x140A32EFC (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140A32F68 (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileHigh @ 0x1404123B0 (MiGetPageFileHigh.c)
 */

void __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 PageFileHigh; // rdi
  __int64 v5; // r9
  __int64 updated; // rax
  bool v7; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0LL, v5);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v7 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v7 );
  }
}
