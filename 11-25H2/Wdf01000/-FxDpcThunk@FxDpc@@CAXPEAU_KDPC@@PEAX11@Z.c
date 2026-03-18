/*
 * XREFs of ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x140060B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDpc::FxDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  _FX_DRIVER_GLOBALS *v5; // rdx
  void (__fastcall **v6)(unsigned __int64); // rdi
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _WORD *v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_FX_DRIVER_GLOBALS **)(DeferredContext + 16);
  if ( v5->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v5;
  v6 = (void (__fastcall **)(unsigned __int64))(DeferredContext + 208);
  if ( *(_QWORD *)(DeferredContext + 208) )
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine((void *)(DeferredContext + 208), 8u, 2164260864u, 3938u, 2u);
    v8 = (_QWORD *)(DeferredContext + 192);
    v9 = *(_QWORD *)(DeferredContext + 192);
    v10 = (_WORD *)(DeferredContext + 10);
    v11 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 )
    {
      v13 = 0;
      (*(void (__fastcall **)(__int64, char *, void *, void *))(*(_QWORD *)v9 + 16LL))(
        v9,
        &v13,
        SystemArgument1,
        SystemArgument2);
      if ( !*v10 )
        v11 = 0LL;
      (*v6)(v11);
      LOBYTE(v12) = v13;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, v12);
    }
    else
    {
      if ( !*v10 )
        v11 = 0LL;
      ((void (__fastcall *)(unsigned __int64, _FX_DRIVER_GLOBALS *, void *, void *))*v6)(
        v11,
        v5,
        SystemArgument1,
        SystemArgument2);
    }
  }
}
