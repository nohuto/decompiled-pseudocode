/*
 * XREFs of MiUpdateActiveSubsection @ 0x140678F84
 * Callers:
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 * Callees:
 *     MiReferenceSubsection @ 0x14020F750 (MiReferenceSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiUpdateActiveSubsection(_QWORD *BugCheckParameter2)
{
  __int64 v1; // rsi
  int v2; // edi
  ULONG_PTR v3; // rbx
  int FileExtents; // r15d
  unsigned __int64 v5; // rbp
  volatile LONG *v6; // r13
  KIRQL v7; // r12
  BOOL v8; // r14d
  int v10; // [rsp+60h] [rbp+8h]

  v1 = *BugCheckParameter2;
  v2 = 0;
  v3 = (ULONG_PTR)BugCheckParameter2;
  FileExtents = 0;
  v5 = 0LL;
  v6 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v7 = ExAcquireSpinLockExclusive(v6);
  do
  {
    if ( !*(_QWORD *)(v3 + 8) || (*(_DWORD *)(v3 + 52) & 0x40000000) == 0 )
      goto LABEL_9;
    if ( (int)MiReferenceSubsection((__int64 *)v3, 0) < 2 )
    {
      MiReleaseSpinLockExclusive(v6, v7);
      return 0LL;
    }
    v10 = *(_DWORD *)(v3 + 44) - (*(_DWORD *)(v3 + 52) & 0x3FFFFFFF);
    MiReleaseSpinLockExclusive(v6, v7);
    FileExtents = MiAllocateFileExtents(v3, 0, 0);
    v8 = 0;
    v7 = ExAcquireSpinLockExclusive(v6);
    if ( FileExtents >= 0 )
      v8 = v10 != *(_DWORD *)(v3 + 44) - (*(_DWORD *)(v3 + 52) & 0x3FFFFFFF);
    v5 += MiDecrementSubsections(v3, v3, 0);
    if ( !v8 )
    {
      if ( FileExtents < 0 )
        break;
LABEL_9:
      v3 = *(_QWORD *)(v3 + 16);
    }
  }
  while ( v3 );
  MiReleaseSpinLockExclusive((_DWORD *)(v1 + 72), v7);
  if ( v5 )
  {
    LOBYTE(v2) = *(_QWORD *)(v1 + 64) != 0LL;
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v1 + 60) & 0x3FF)), v2, v5);
  }
  return (unsigned int)FileExtents;
}
