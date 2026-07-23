/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1403F7590
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFreeZeroPagesNeeded @ 0x1403F7650 (MiFreeZeroPagesNeeded.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
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
      {
        LOBYTE(a3) = j;
        MiPruneStandbyPages(a1, i, a3, v6);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 184);
  v8 = ExAcquireSpinLockExclusive(&dword_140E30080);
  *(_QWORD *)(a1 + 16928) = 0LL;
  MiReleaseSpinLockExclusive(&dword_140E30080, v8);
  PsDereferencePartition(v7);
}
