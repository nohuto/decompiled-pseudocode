/*
 * XREFs of CarLoadFromDV @ 0x14060D954
 * Callers:
 *     CarInit @ 0x14060AA2C (CarInit.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

unsigned __int64 __fastcall CarLoadFromDV(char a1)
{
  unsigned __int64 result; // rax

  CarRuleClasses = VfRuleClasses;
  result = (unsigned int)VfTriageContext;
  CarTriageContext = VfTriageContext;
  if ( !a1 )
  {
    CarXdvOptions = VfFlightOptions;
    return (unsigned __int64)memmove(CarDrivers, MmVerifyDriverBuffer, (unsigned int)MmVerifyDriverBufferLength);
  }
  return result;
}
