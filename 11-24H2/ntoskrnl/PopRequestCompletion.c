/*
 * XREFs of PopRequestCompletion @ 0x140376130
 * Callers:
 *     <none>
 * Callees:
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140376270 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1403763F8 (PopFxNotifyPreDIrpCompletion.c)
 *     PopFreeIrp @ 0x1403764AC (PopFreeIrp.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopDiagTraceIrpFinish @ 0x140377E10 (PopDiagTraceIrpFinish.c)
 *     PopUpdateWakeSource @ 0x1404A0ACC (PopUpdateWakeSource.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CF9E0 (PopDirectedDripsStartDisengageTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192), *(_QWORD *)(a3 + 224));
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
        PopPepUpdateConstraints((_DWORD *)v11, 5, 1);
      PopFxDereferenceDevice(v3, 0LL);
    }
    PopFreeIrp(v6);
  }
  return 3221225494LL;
}
