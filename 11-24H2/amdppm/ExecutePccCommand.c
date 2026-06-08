/*
 * XREFs of ExecutePccCommand @ 0x140027E24
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140026164 (CpcGuaranteedNotifyWorker.c)
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 *     ExecutePccWrite @ 0x140027E50 (ExecutePccWrite.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140041A78 (CpcHighestNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExecutePccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
