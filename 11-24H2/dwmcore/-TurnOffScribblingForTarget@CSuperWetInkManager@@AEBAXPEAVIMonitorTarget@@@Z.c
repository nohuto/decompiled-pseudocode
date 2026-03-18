/*
 * XREFs of ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801C4784
 * Callers:
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x1801A0E60 (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C4700 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801C4E44 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::TurnOffScribblingForTarget(CSuperWetInkManager *this, struct IMonitorTarget *a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, CSuperWetInkManager **); // rax
  int (__fastcall **v3)(_QWORD, GUID *, CSuperWetInkManager **); // rcx
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  CSuperWetInkManager *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v2 = (int (__fastcall ***)(_QWORD, GUID *, CSuperWetInkManager **))(*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 224LL))(a2);
  if ( v2 )
  {
    v3 = *v2;
    v6 = 0LL;
    if ( (*v3)(v2, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v6) >= 0 )
    {
      (*(void (__fastcall **)(CSuperWetInkManager *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0LL);
      v4 = (*(__int64 (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v6 + 56LL))(v6);
      if ( v4 )
      {
        CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0, 0x400000u);
        v5 = *(RTL_SRWLOCK **)(v4 + 32);
        AcquireSRWLockExclusive(v5 + 13);
        CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)v5);
        if ( v5 != (RTL_SRWLOCK *)-104LL )
          ReleaseSRWLockExclusive(v5 + 13);
        *(_BYTE *)(v4 + 49) = 0;
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
