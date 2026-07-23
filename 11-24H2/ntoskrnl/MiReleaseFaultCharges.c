/*
 * XREFs of MiReleaseFaultCharges @ 0x140427624
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseFaultCharges(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v5; // ebp
  KIRQL v6; // r15
  int v7; // eax
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = *(_DWORD *)(v1 + 56);
  if ( (v7 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v7 & 0x400) == 0 )
    v3 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, (__int64)BugCheckParameter2, 4);
  --*(_QWORD *)(v1 + 40);
  if ( v3 )
    v4 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v1 + 60) & 0x3FF));
  result = MiCheckControlArea(v1, v6);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v5, v3);
  return result;
}
