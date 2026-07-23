/*
 * XREFs of HalpResetSBF @ 0x140B4D058
 * Callers:
 *     HalpEndOfBoot @ 0x140701F20 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140B52ABC (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140B52B00 (HalWriteBootRegister.c)
 */

void HalpResetSBF()
{
  __int64 v0; // rcx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( HalpSimpleBootFlagTable )
  {
    if ( !(unsigned int)HalReadBootRegister(&v1) )
    {
      LOBYTE(v0) = v1 & 0xF9;
      HalWriteBootRegister(v0);
    }
  }
}
