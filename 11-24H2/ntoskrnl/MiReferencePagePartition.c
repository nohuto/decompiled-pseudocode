/*
 * XREFs of MiReferencePagePartition @ 0x140673404
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EBB48 (MmIdentifyPhysicalMemory.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  unsigned __int8 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( !(_DWORD)a2 && MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), a2, (__int64)a3) == 17 )
    return 3221225485LL;
  if ( PsReferencePartitionSafe(*(_QWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                          + 184LL)) )
    *a3 = v6;
  else
    v3 = -1073741558;
  if ( v7 != 17 )
    MiUnlockPage(a1, v7);
  return v3;
}
