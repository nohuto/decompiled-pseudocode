/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1400059A4
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x140005B04 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x14002F0D4 (ValidateAcpiCPC.c)
 *     ValidateCpcResourcePriorities @ 0x140030204 (ValidateCpcResourcePriorities.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
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
