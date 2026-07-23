/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x1405536FC
 * Callers:
 *     HaliSetSystemInformation @ 0x140700414 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x14055324C (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x1406FEB64 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
