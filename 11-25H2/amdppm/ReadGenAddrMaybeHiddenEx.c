/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1400025A4
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x140005B04 (EnableCpcResourcePriorityRegisters.c)
 *     CpcGuaranteedNotifyWorker @ 0x140024F58 (CpcGuaranteedNotifyWorker.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140040828 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1400025CC (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x140003D40 (ReadGenAddrHiddenEx.c)
 */

__int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return ReadGenAddrEx(a2);
}
