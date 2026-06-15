/*
 * XREFs of ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18002BAC4
 * Callers:
 *     ??$?4U?$default_delete@U_RecurringTask@@@std@@$0A@@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001D17C (--$-4U-$default_delete@U_RecurringTask@@@std@@$0A@@-$unique_ptr@U_RecurringTask@@U-$default_dele.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002AA90 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002BA68 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x18002D330 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_3b8cbb1503bba28940815bd3e09659f7__void_::_Do_call @ 0x1800DD510 (std--_Func_impl_no_alloc__lambda_3b8cbb1503bba28940815bd3e09659f7__void_--_Do_call.c)
 *     _lambda_3512d86930cf5e3297db3d8fbb4f9b41_::operator() @ 0x18010574C (_lambda_3512d86930cf5e3297db3d8fbb4f9b41_--operator().c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::unique_ptr<_RecurringTask>::reset(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      SetThreadpoolTimer(*(PTP_TIMER *)v2, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)v2, 1);
      CloseThreadpoolTimer(*(PTP_TIMER *)v2);
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    v3 = *(volatile signed __int32 **)(v2 + 16);
    *(_QWORD *)(v2 + 16) = 0LL;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = *(volatile signed __int32 **)(v2 + 16);
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    operator delete((void *)v2, (const struct std::nothrow_t *)0x20);
  }
}
