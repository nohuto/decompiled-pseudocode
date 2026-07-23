/*
 * XREFs of PspInsertProperty @ 0x14041F4DC
 * Callers:
 *     PspSetPropertyHelper @ 0x14041F4B8 (PspSetPropertyHelper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspFindPropertySetEntry @ 0x14041F680 (PspFindPropertySetEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInsertProperty(KSPIN_LOCK *a1, KSPIN_LOCK a2, void *a3)
{
  int v3; // edi
  KSPIN_LOCK *Pool2; // rbx
  KIRQL v8; // r12
  KSPIN_LOCK v9; // rax

  v3 = 0;
  Pool2 = (KSPIN_LOCK *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x50737050u);
  if ( Pool2 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    if ( PspFindPropertySetEntry(a1, a2) )
    {
      v3 = -1073741771;
    }
    else
    {
      Pool2[2] = a2;
      Pool2[3] = (KSPIN_LOCK)a3;
      v9 = *a1;
      if ( *(KSPIN_LOCK **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *Pool2 = v9;
      Pool2[1] = (KSPIN_LOCK)a1;
      *(_QWORD *)(v9 + 8) = Pool2;
      *a1 = (KSPIN_LOCK)Pool2;
      ObfReferenceObjectWithTag(a3, 0x72507350u);
    }
    KeReleaseSpinLock(a1 + 2, v8);
    if ( v3 < 0 )
      ExFreePoolWithTag(Pool2, 0x50737050u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
