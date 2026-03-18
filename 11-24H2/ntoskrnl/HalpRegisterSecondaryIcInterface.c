/*
 * XREFs of HalpRegisterSecondaryIcInterface @ 0x140555DBC
 * Callers:
 *     HaliSetSystemInformation @ 0x1407027D4 (HaliSetSystemInformation.c)
 * Callees:
 *     HalpCreateSecondaryIcEntry @ 0x14055590C (HalpCreateSecondaryIcEntry.c)
 *     HalpValidateInterface @ 0x140700F24 (HalpValidateInterface.c)
 */

__int64 HalpRegisterSecondaryIcInterface()
{
  __int64 v0; // r10

  if ( (unsigned __int8)HalpValidateInterface() )
    return HalpCreateSecondaryIcEntry(v0);
  else
    return 3221225485LL;
}
