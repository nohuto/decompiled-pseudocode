/*
 * XREFs of StartPccCommand @ 0x140026F38
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140024F58 (CpcGuaranteedNotifyWorker.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x140026B90 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140040828 (CpcHighestNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0xFFFFFFFE | ((int)result >= 0);
  return result;
}
