/*
 * XREFs of HalpResetSBF @ 0x140B3B158
 * Callers:
 *     HalpEndOfBoot @ 0x1406F8480 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140B40A6C (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140B40AB0 (HalWriteBootRegister.c)
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
