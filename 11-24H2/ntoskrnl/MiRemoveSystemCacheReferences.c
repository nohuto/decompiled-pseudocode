/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x1404BF2B0
 * Callers:
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 */

LONG __fastcall MiRemoveSystemCacheReferences(__int64 *BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  LONG result; // eax

  v2 = *BugCheckParameter2;
  v5 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = MiRemoveViewsFromSection(BugCheckParameter2, a2, 4);
  --*(_QWORD *)(v2 + 40);
  --*(_DWORD *)(v2 + 88);
  v8 = v7;
  result = MiCheckControlArea(v2, v6);
  if ( v8 )
    return MiReturnCrossPartitionSectionCharges(v5, 1, v8);
  return result;
}
