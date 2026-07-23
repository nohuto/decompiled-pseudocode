/*
 * XREFs of IoDisconnectInterrupt @ 0x1409C05D0
 * Callers:
 *     DifIoDisconnectInterruptWrapper @ 0x140626760 (DifIoDisconnectInterruptWrapper.c)
 *     IopConnectLineBasedInterrupt @ 0x1409BFBA0 (IopConnectLineBasedInterrupt.c)
 *     IoDisconnectInterruptEx @ 0x1409BFE80 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x1409C0F8C (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeRemoveQueueDpc @ 0x14045A7A0 (KeRemoveQueueDpc.c)
 *     KeFreeInterrupt @ 0x1404932B4 (KeFreeInterrupt.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406F9CE4 (IopDestroyPassiveInterruptBlock.c)
 *     PnpTraceInterruptConnection @ 0x1409C07A0 (PnpTraceInterruptConnection.c)
 *     IopDestroyActiveConnectBlock @ 0x1409C0D28 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1409C0E78 (IopInitializeActiveConnectBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  PVOID v2; // rcx
  unsigned __int8 v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  PSLIST_ENTRY *p_InternalState; // rsi
  struct _KTHREAD *v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  struct _KTHREAD *v11; // r10
  char v12; // dl
  int *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdi
  _WORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _BYTE v23[24]; // [rsp+30h] [rbp-68h] BYREF
  PVOID Object; // [rsp+48h] [rbp-50h]

  memset_0(v23, 0, 0x50uLL);
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(&InterruptObject[-1].IsrDpcStats.IsrCount, v23);
  v2 = Object;
  v3 = __popcnt(InterruptObject[-1].IsrDpcStats.IsrTimeStart);
  if ( Object )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  p_InternalState = (PSLIST_ENTRY *)&InterruptObject[1].InternalState;
  KeDisconnectInterrupt((__int64 *)&InterruptObject[1].InternalState, v3, &InterruptObject[-1].IsrDpcStats.IsrCount);
  if ( Object )
  {
    KeSetEvent((PRKEVENT)Object, 0, 0);
    KeLeaveCriticalRegion();
  }
  if ( LOBYTE(InterruptObject[1].Type) )
    IopDestroyPassiveInterruptBlock(HIDWORD(InterruptObject[-1].IsrDpcStats.DpcTime));
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v11 = KeGetCurrentThread();
    v12 = 0;
    if ( (char)v3 <= 0 )
      goto LABEL_22;
    v13 = &InterruptObject[1].InternalState;
    v14 = v3;
    do
    {
      v15 = *(_QWORD *)v13;
      v13 += 2;
      if ( *(struct _KTHREAD **)(v15 + 152) == v11 )
        v12 = 1;
      --v14;
    }
    while ( v14 );
    if ( !v12 )
LABEL_22:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegionThread();
  v7 = *(_QWORD *)&InterruptObject[1].Number;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 312);
    v9 = *(_QWORD *)(v8 + 40);
    if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(*(_QWORD *)&InterruptObject[1].Number, (PVOID)*(unsigned __int16 *)(v7 + 2));
      v16 = *(_QWORD *)(v7 + 8);
      if ( v16 )
      {
        IoAddTriageDumpDataBlock(v16, (PVOID)(unsigned int)*(__int16 *)(v16 + 2));
        v17 = (_WORD *)(*(_QWORD *)(v7 + 8) + 56LL);
        if ( *v17 )
        {
          IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 56LL));
        }
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
      if ( v18 )
      {
        v19 = (unsigned __int16 *)(v18 + 40);
        IoAddTriageDumpDataBlock(v18, (PVOID)0x388);
        if ( *v19 )
        {
          IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v19 + 1), (PVOID)*v19);
        }
        v20 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 56LL);
        if ( *v20 )
        {
          IoAddTriageDumpDataBlock((ULONG)v20, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 56LL));
        }
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 16LL);
        if ( v21 && *(_WORD *)(v21 + 56) )
        {
          IoAddTriageDumpDataBlock(v21 + 56, (PVOID)2);
          v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v7, 0LL, 0LL);
    }
    _InterlockedAdd((volatile signed __int32 *)(v8 + 96), 0xFFFFFFFF);
    *(_QWORD *)&InterruptObject[1].Number = 0LL;
    ObfDereferenceObjectWithTag((PVOID)v7, 0x54706E50u);
  }
  if ( (char)v3 > 0 )
  {
    v10 = v3;
    do
    {
      KeFreeInterrupt(*p_InternalState);
      *p_InternalState++ = 0LL;
      --v10;
    }
    while ( v10 );
  }
  IopDestroyActiveConnectBlock(v23);
  ExFreePoolWithTag(&InterruptObject[-1].IsrDpcStats, 0);
  PnpTraceInterruptConnection(0LL);
}
