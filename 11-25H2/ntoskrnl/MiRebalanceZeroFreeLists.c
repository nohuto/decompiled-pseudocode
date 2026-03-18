/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1403BC4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiFreeZeroPagesNeeded @ 0x1403BC590 (MiFreeZeroPagesNeeded.c)
 */

void __fastcall MiRebalanceZeroFreeLists(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int i; // ebx
  unsigned __int8 j; // di
  __int64 v6; // rax
  __int64 v7; // rbx
  KIRQL v8; // al

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < (unsigned __int8)MmNumberOfChannels; ++j )
    {
      LOBYTE(a3) = j;
      v6 = MiFreeZeroPagesNeeded(a1, i, a3);
      if ( v6 )
        MiPruneStandbyPages(a1, i, j, v6);
    }
  }
  v7 = *(_QWORD *)(a1 + 184);
  v8 = ExAcquireSpinLockExclusive(&dword_140E2FD00);
  *(_QWORD *)(a1 + 16928) = 0LL;
  MiReleaseSpinLockExclusive(&dword_140E2FD00, v8);
  PsDereferencePartition(v7);
}
