/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x140002014
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x140008FC4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x140047164 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ReadGenAddrEx @ 0x140002040 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x140006608 (ReadGenAddrHiddenEx.c)
 */

__int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return ReadGenAddrEx(a2);
}
