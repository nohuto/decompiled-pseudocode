/*
 * XREFs of KiDpcWatchdogCounterReset @ 0x140274D14
 * Callers:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 *     KiDpcWatchdog @ 0x1405C2B50 (KiDpcWatchdog.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x14064183C (EtwTraceCumulativeDpcSoftTimeout.c)
 */

__int64 __fastcall KiDpcWatchdogCounterReset(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx
  int v4; // r9d
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 13LL;
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v4 = *(_DWORD *)(v1 + 14552);
  if ( v4 && *(_DWORD *)(v1 + 33708) >= v4 )
    EtwTraceCumulativeDpcSoftTimeout(*(_QWORD *)(v1 + 8), v1);
  *(_DWORD *)(v1 + 33708) = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
