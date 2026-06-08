/*
 * XREFs of ExecutePccCommand @ 0x140026C24
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140024F58 (CpcGuaranteedNotifyWorker.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     ExecutePccWrite @ 0x140026C50 (ExecutePccWrite.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140040828 (CpcHighestNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExecutePccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
