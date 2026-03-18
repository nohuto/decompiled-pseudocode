/*
 * XREFs of PspRemoveProperty @ 0x14042D240
 * Callers:
 *     PspSetPropertyHelper @ 0x14042D138 (PspSetPropertyHelper.c)
 *     PspEmptyPropertySet @ 0x1408A7B34 (PspEmptyPropertySet.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PspFindPropertySetEntry @ 0x14042D300 (PspFindPropertySetEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID *PropertySetEntry; // rax
  KIRQL v7; // r8
  PVOID *v8; // rbx
  PVOID *v9; // rcx
  PVOID **v10; // rax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2);
  v8 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v9 = (PVOID *)*PropertySetEntry;
    if ( *((PVOID **)*PropertySetEntry + 1) != PropertySetEntry || (v10 = (PVOID **)PropertySetEntry[1], *v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v7);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8[3], 0x72507350u);
    ExFreePoolWithTag(v8, 0x50737050u);
  }
  return 0LL;
}
