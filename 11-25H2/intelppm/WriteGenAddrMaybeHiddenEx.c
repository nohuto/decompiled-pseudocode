/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x140008B8C
 * Callers:
 *     CpcReinitializeHandler @ 0x140008E50 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x140008ED0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x140008F20 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x140008F50 (CpcSetTimeWindow.c)
 *     EnableCpcResourcePriorityRegisters @ 0x140008FC4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x14000170C (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x140008B58 (WriteGenAddrHiddenEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, char *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    return WriteGenAddrHiddenEx(*(_DWORD *)(a1 + 84), a2, a3);
  else
    return WriteGenAddrEx(a2, a3);
}
