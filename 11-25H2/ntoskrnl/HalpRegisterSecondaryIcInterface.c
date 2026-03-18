/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1405534BC
 * Callers:
 *     HaliSetSystemInformation @ 0x1406F69E4 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x14055300C (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x1406F5134 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
