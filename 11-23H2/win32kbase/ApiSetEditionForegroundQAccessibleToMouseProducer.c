/*
 * XREFs of ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00C9854
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C01F55C8 (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F58E0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionForegroundQAccessibleToMouseProducer(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *(_DWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1269LL);
  if ( qword_1C0296438 && (int)qword_1C0296438() >= 0 && qword_1C0296440 )
    return (unsigned int)qword_1C0296440(*(_QWORD *)a1, 1LL, a3);
  return v3;
}
