/*
 * XREFs of ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x1800530FC
 * Callers:
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001C6D8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001CE00 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001E4B0 (--1CAudioSession@@MEAA@XZ.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002D25C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x18007F630 (--1-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800EC80C (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x1800F9DDC (--1CEndpointStore@@UEAA@XZ.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800FDD74 (--1CMuteSoftware@@EEAA@XZ.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x18010BF94 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__g_PoTimerCookie___0 @ 0x180169E20 (_dynamic_atexit_destructor_for__g_PoTimerCookie___0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::default_delete<_RecurringTask>::operator()(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rdi

  if ( a2 )
  {
    if ( *(_QWORD *)a2 )
    {
      SetThreadpoolTimer(*(PTP_TIMER *)a2, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)a2, 1);
      CloseThreadpoolTimer(*(PTP_TIMER *)a2);
    }
    *(_QWORD *)(a2 + 8) = 0LL;
    v3 = *(volatile signed __int32 **)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = *(volatile signed __int32 **)(a2 + 16);
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    operator delete((void *)a2, (const struct std::nothrow_t *)0x20);
  }
}
