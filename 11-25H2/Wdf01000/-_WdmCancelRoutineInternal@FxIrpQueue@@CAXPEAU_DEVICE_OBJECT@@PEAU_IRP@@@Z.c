/*
 * XREFs of ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14006ADC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIrpQueue::_WdmCancelRoutineInternal(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  KIRQL CancelIrql; // cl
  unsigned __int8 v4; // r8
  _QWORD *v5; // rdi
  _QWORD *_a2; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // r8
  void (__fastcall *v12)(_QWORD *, _IRP *, _QWORD *, __int64); // rax
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  CancelIrql = Irp->CancelIrql;
  irql = 0;
  IoReleaseCancelSpinLock(CancelIrql);
  v5 = Irp->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v5 == 1 )
    _a2 = (_QWORD *)v5[2];
  else
    _a2 = Irp->Tail.Overlay.DriverContext[3];
  v7 = _a2[2];
  if ( *(char *)(v7 + 24) < 0 && *(_QWORD *)(v7 - 40) )
  {
    FxVerifierLock::Lock(*(FxVerifierLock **)(v7 - 40), &irql, v4);
    LOBYTE(v8) = irql;
  }
  else
  {
    LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 112));
  }
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --*((_DWORD *)_a2 + 8);
  if ( v5 != _a2 )
  {
    v5[1] = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
  }
  v12 = (void (__fastcall *)(_QWORD *, _IRP *, _QWORD *, __int64))_a2[3];
  if ( v12 )
  {
    v12(_a2, Irp, v5, v8);
  }
  else
  {
    FxNonPagedObject::Unlock((FxNonPagedObject *)_a2[2], v8, (unsigned __int8)Blink);
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741536;
    WPP_IFR_SF_qq(*(_FX_DRIVER_GLOBALS **)(_a2[2] + 16LL), 2u, 0x12u, 0xBu, WPP_FxIrpQueue_cpp_Traceguids, Irp, _a2);
    FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(_a2[2] + 16LL));
    IofCompleteRequest(Irp, 0);
  }
}
