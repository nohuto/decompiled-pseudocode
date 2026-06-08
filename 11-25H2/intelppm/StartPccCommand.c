/*
 * XREFs of StartPccCommand @ 0x140029B24
 * Callers:
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x140030F50 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x140047164 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0xFFFFFFFE | ((int)result >= 0);
  return result;
}
