/*
 * XREFs of PoDeviceAcquireIrp @ 0x140356F58
 * Callers:
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x140356C48 (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x140252A98 (PopDiagTraceDeviceAcquireIrp.c)
 */

void __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
}
