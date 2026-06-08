/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x140001BA0
 * Callers:
 *     CpcSetAutonomousMode @ 0x140001B70 (CpcSetAutonomousMode.c)
 *     CpcReinitializeHandler @ 0x1400059C0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x140005A40 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetTimeWindow @ 0x140005A90 (CpcSetTimeWindow.c)
 *     EnableCpcResourcePriorityRegisters @ 0x140005B04 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x140001BD0 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x140003D74 (WriteGenAddrHiddenEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    return WriteGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return WriteGenAddrEx(a2, a3);
}
