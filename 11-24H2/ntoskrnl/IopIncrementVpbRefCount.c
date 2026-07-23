/*
 * XREFs of IopIncrementVpbRefCount @ 0x1403566B0
 * Callers:
 *     IopMountInitializeVpb @ 0x1404865B0 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1404B80C8 (IopReferenceVerifyVpb.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1408AD120 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int v3; // ebx
  KIRQL v5; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( a2 )
  {
    v5 = KeAcquireQueuedSpinLock(9uLL);
    v6 = (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 28) + 1);
    v7 = v5;
    *(_DWORD *)(BugCheckParameter2 + 28) = v6;
    v3 = *(_DWORD *)(BugCheckParameter2 + 28);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18, v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v7);
    __writecr8(v7);
  }
  else
  {
    v3 = *(_DWORD *)(BugCheckParameter2 + 28) + 1;
    *(_DWORD *)(BugCheckParameter2 + 28) = v3;
  }
  if ( v3 <= 0 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v8 )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)0x150);
      v9 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v9 )
      {
        IoAddTriageDumpDataBlock(v9, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, *(unsigned int *)(BugCheckParameter2 + 28));
  }
  return (unsigned int)v3;
}
