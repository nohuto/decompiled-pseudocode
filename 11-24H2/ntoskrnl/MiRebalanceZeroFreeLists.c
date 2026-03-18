/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1403D2A70
 * Callers:
 *     <none>
 * Callees:
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiFreeZeroPagesNeeded @ 0x1403D2B30 (MiFreeZeroPagesNeeded.c)
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
  v8 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
  *(_QWORD *)(a1 + 16928) = 0LL;
  MiReleaseSpinLockExclusive(&dword_140E2FF40, v8);
  PsDereferencePartition(v7);
}
