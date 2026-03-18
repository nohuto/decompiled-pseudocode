/*
 * XREFs of ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x140046360
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *v4; // rcx
  void (__fastcall **v6)(unsigned __int64, unsigned __int64); // rdi
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  _FX_DRIVER_GLOBALS *v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  char *v11; // r14
  _WORD *v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(FxSystemWorkItem **)(DeferredContext + 240);
  if ( v4 )
  {
    FxSystemWorkItem::EnqueueWorker(
      v4,
      (void (__fastcall *)(void *))FxInterrupt::_InterruptWorkItemCallback,
      (void *)DeferredContext,
      0);
  }
  else
  {
    v6 = (void (__fastcall **)(unsigned __int64, unsigned __int64))(DeferredContext + 336);
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine(v6, 8u, 2164260864u, 3938u, 2u);
    v8 = *(_FX_DRIVER_GLOBALS **)(DeferredContext + 16);
    if ( v8->FxTrackDriverForMiniDumpLog )
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                      + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v8;
    v9 = (_QWORD *)(DeferredContext + 248);
    v10 = *(_QWORD *)(DeferredContext + 248);
    v11 = (char *)(DeferredContext + 96);
    v12 = (_WORD *)(DeferredContext + 10);
    v13 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v10 )
    {
      v16 = 0;
      (*(void (__fastcall **)(__int64, unsigned __int8 *, void *, void *))(*(_QWORD *)v10 + 16LL))(
        v10,
        &v16,
        SystemArgument1,
        SystemArgument2);
      v15 = *(_QWORD *)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(*(_QWORD *)v11 + 10LL) )
        v15 = 0LL;
      if ( !*v12 )
        v13 = 0LL;
      (*v6)(v13, v15);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, v16);
    }
    else
    {
      v14 = *(_QWORD *)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(*(_QWORD *)v11 + 10LL) )
        v14 = 0LL;
      if ( !*v12 )
        v13 = 0LL;
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, void *, void *))*v6)(
        v13,
        v14,
        SystemArgument1,
        SystemArgument2);
    }
  }
}
