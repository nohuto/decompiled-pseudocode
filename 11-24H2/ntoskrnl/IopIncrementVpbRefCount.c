/*
 * XREFs of IopIncrementVpbRefCount @ 0x1402D5430
 * Callers:
 *     IopMountInitializeVpb @ 0x14048B7DC (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1404BCF58 (IopReferenceVerifyVpb.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int v3; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 )
  {
    v5 = KeAcquireQueuedSpinLock(9uLL);
    v3 = ++*(_DWORD *)(BugCheckParameter2 + 28);
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v5);
    __writecr8(v5);
  }
  else
  {
    v3 = *(_DWORD *)(BugCheckParameter2 + 28) + 1;
    *(_DWORD *)(BugCheckParameter2 + 28) = v3;
  }
  if ( v3 <= 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)0x150);
      v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v7 )
      {
        IoAddTriageDumpDataBlock(v7, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, *(unsigned int *)(BugCheckParameter2 + 28));
  }
  return (unsigned int)v3;
}
