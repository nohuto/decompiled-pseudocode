/*
 * XREFs of MiReferencePagePartition @ 0x1406745D4
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  unsigned __int8 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( !a2 && MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) == 17 )
    return 3221225485LL;
  if ( PsReferencePartitionSafe(*(_QWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                          + 184LL)) )
    *a3 = v6;
  else
    v3 = -1073741558;
  if ( v7 != 17 )
    MiUnlockPage(a1, v7);
  return v3;
}
