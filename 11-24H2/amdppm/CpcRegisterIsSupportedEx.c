/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x140006644
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x1400067A4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1400302D4 (ValidateAcpiCPC.c)
 *     ValidateCpcResourcePriorities @ 0x140031404 (ValidateCpcResourcePriorities.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
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
