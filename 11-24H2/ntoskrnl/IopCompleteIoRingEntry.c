/*
 * XREFs of IopCompleteIoRingEntry @ 0x1403C5F20
 * Callers:
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 *     IopIoRingDispatchComplete @ 0x1406F7B84 (IopIoRingDispatchComplete.c)
 *     IopIoRingDispatchCancel @ 0x14071659C (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x14071665C (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchReadScatter @ 0x14071673C (IopIoRingDispatchReadScatter.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140716848 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140716C08 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingDispatchWrite @ 0x140716E78 (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchWriteGather @ 0x140717020 (IopIoRingDispatchWriteGather.c)
 *     IopIoRingDispatchRead @ 0x140A94B48 (IopIoRingDispatchRead.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

int __fastcall IopCompleteIoRingEntry(__int64 a1, __int64 a2, _OWORD *a3, KPRIORITY a4)
{
  int *v4; // r14
  struct _KEVENT *v8; // rsi
  int v9; // ebx
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  char v14; // bl
  int result; // eax
  __int64 v16; // rdx
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+60h] [rbp+8h]

  v4 = *(int **)(a1 + 80);
  v18 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  v9 = *v4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v11 = v4[1];
  v12 = v11 + 1;
  if ( v11 + 1 - v9 <= *(_DWORD *)(a1 + 28) )
  {
    v13 = 3LL * (v18 & v11);
    *(_QWORD *)&v4[2 * v13 + 2] = a2;
    *(_OWORD *)&v4[2 * v13 + 4] = *a3;
    v4[1] = v12;
    if ( *(_QWORD *)(a1 + 168) )
    {
      _InterlockedOr(v17, 0);
      if ( (v12 - *v4) % *(_DWORD *)(a1 + 28) == 1 )
      {
        v8 = *(struct _KEVENT **)(a1 + 168);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
      }
    }
  }
  v14 = 0;
  ++*(_QWORD *)(a1 + 120);
  if ( *(_BYTE *)(a1 + 160) && *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 160) = 0;
    v14 = 1;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
  if ( v14 )
    result = KeSetEvent((PRKEVENT)(a1 + 136), a4, 0);
  if ( v8 )
    result = KeSetEvent(v8, a4, 0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = v10;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  __writecr8(v10);
  if ( v8 )
    return ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  return result;
}
