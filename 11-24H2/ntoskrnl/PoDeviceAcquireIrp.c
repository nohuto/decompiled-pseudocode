/*
 * XREFs of PoDeviceAcquireIrp @ 0x1403D9CF8
 * Callers:
 *     PoHandleIrp @ 0x1403D99EC (PoHandleIrp.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403D9D34 (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
