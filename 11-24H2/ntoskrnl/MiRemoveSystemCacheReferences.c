/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x1404C3D80
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 */

LONG __fastcall MiRemoveSystemCacheReferences(__int64 *BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  LONG result; // eax

  v2 = *BugCheckParameter2;
  v5 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = MiRemoveViewsFromSection(BugCheckParameter2, a2, 4);
  --*(_QWORD *)(v2 + 40);
  LOBYTE(v8) = v6;
  --*(_DWORD *)(v2 + 88);
  v9 = v7;
  result = MiCheckControlArea(v2, v8);
  if ( v9 )
    return MiReturnCrossPartitionSectionCharges(v5, 1, v9);
  return result;
}
