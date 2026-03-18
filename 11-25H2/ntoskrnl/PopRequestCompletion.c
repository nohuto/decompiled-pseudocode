/*
 * XREFs of PopRequestCompletion @ 0x1403580F0
 * Callers:
 *     <none>
 * Callees:
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140358230 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFreeIrp @ 0x14035860C (PopFreeIrp.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x14035871C (PopFxNotifyPreDIrpCompletion.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopDiagTraceIrpFinish @ 0x140359154 (PopDiagTraceIrpFinish.c)
 *     PopUpdateWakeSource @ 0x1404A11DC (PopUpdateWakeSource.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CB330 (PopDirectedDripsStartDisengageTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // r14
  IRP *v6; // rsi
  int *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx

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
    PopDiagTraceIrpFinish(v6);
    if ( *v7 >= 0 )
    {
      if ( *(_BYTE *)(a3 + 240) )
        PopUpdateWakeSource(*(PVOID *)(a3 + 24));
      if ( *v7 >= 0 )
      {
        v9 = *(_QWORD *)(a3 + 24);
        if ( v9 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v10 + 760) & 0x30000) != 0 )
              PopDirectedDripsStartDisengageTimer(0LL);
          }
        }
      }
    }
    if ( v3 )
    {
      v11 = *(_QWORD *)(v3 + 56);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 128), 0xFFFFFFFF) == 1 )
        PopPepUpdateConstraints(v11, 5, 1);
      PopFxDereferenceDevice(v3, 0LL);
    }
    PopFreeIrp(v6);
  }
  return 3221225494LL;
}
