/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x140006010
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x140008FC4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x14002DC3C (ValidateAcpiCPC.c)
 *     ValidateCpcResourcePriorities @ 0x14002E9D0 (ValidateCpcResourcePriorities.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
