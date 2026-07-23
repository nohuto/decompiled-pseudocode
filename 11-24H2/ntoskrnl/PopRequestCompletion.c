/*
 * XREFs of PopRequestCompletion @ 0x1403A6460
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceIrpFinish @ 0x1402E64EC (PopDiagTraceIrpFinish.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A65A0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1403A6728 (PopFxNotifyPreDIrpCompletion.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopFreeIrp @ 0x1403A7BB8 (PopFreeIrp.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopUpdateWakeSource @ 0x14049B14C (PopUpdateWakeSource.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CD100 (PopDirectedDripsStartDisengageTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // r14
  IRP *v6; // rsi
  int *v7; // rbp
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 184);
  v6 = a2;
  if ( v3 && v5 == 2 )
    PopFxNotifyPreDIrpCompletion(v3);
  v7 = (int *)&v6->IoStatus.0;
  if ( *(_QWORD *)(a3 + 216) )
  {
    LOBYTE(a2) = v5;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 232), a2);
  }
  if ( v5 )
  {
    PopHandleDevicePowerIrpCompletion(a3);
  }
  else
  {
    PopDiagTraceIrpFinish((__int64)v6);
    if ( *v7 >= 0 )
    {
      if ( *(_BYTE *)(a3 + 240) )
        PopUpdateWakeSource(*(PVOID *)(a3 + 24));
      if ( *v7 >= 0 )
      {
        v10 = *(_QWORD *)(a3 + 24);
        if ( v10 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
          if ( v11 )
          {
            if ( (*(_DWORD *)(v11 + 760) & 0x30000) != 0 )
              PopDirectedDripsStartDisengageTimer(0LL);
          }
        }
      }
    }
    if ( v3 )
    {
      v12 = *(_QWORD *)(v3 + 56);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 128), 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v9) = 1;
        PopPepUpdateConstraints(v12, 5LL, v9);
      }
      PopFxDereferenceDevice(v3, 0LL);
    }
    PopFreeIrp(v6);
  }
  return 3221225494LL;
}
