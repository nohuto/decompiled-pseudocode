/*
 * XREFs of ViPendingCompleteAfterWait @ 0x140B93D28
 * Callers:
 *     ViPendingCompleteAtDPC @ 0x140B93E70 (ViPendingCompleteAtDPC.c)
 *     ViPendingWorkerThread @ 0x140B940E0 (ViPendingWorkerThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140613C88 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140613CD0 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B851B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall ViPendingCompleteAfterWait(char *P)
{
  _QWORD *v2; // rdi
  KIRQL v3; // al
  IRP *v4; // r14
  __int64 v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  void *v7; // rbp
  bool v8; // zf
  unsigned __int64 v9; // rbx
  KIRQL v10; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)P + 42) == 1 )
    KeWaitForSingleObject(P + 104, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)P;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)P + 8LL));
  v4 = (IRP *)*v2;
  v5 = v2[27];
  *((_BYTE *)v2 + 16) = v3;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  *((_DWORD *)v2 + 14) &= ~0x10u;
  if ( !v5 || (v7 = *(void **)(v5 + 40)) == 0LL )
    v7 = 0LL;
  v8 = (*((_DWORD *)v2 + 6))-- == 1;
  v10 = 0;
  if ( v8 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v10);
    v9 = *v2;
    guard_dispatch_icall_no_overrides(v2, *v2);
    *v2 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v9 >> 12))),
      v9);
    ViIrpDatabaseReleaseLockExclusive(v10);
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 5);
  VfIrpDatabaseEntryReleaseLock(v2);
  if ( !CurrentStackLocation[-1].CompletionRoutine
    || (unsigned int)guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1), v4) != -1073741802 )
  {
    IofCompleteRequest(v4, P[172]);
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  ExFreePoolWithTag(P, 0);
}
