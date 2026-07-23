/*
 * XREFs of HalpCheckPowerButton @ 0x1405422F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x140411C50 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x14054263C (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x14058C2B0 (InbvCheckDisplayOwnership.c)
 */

void HalpCheckPowerButton()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( ((_DWORD)KiBugCheckData || (unsigned __int8)InbvCheckDisplayOwnership()) && HalpShutdownContext && PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v1, 2u, 0LL);
    v0 = v1;
    if ( byte_140F8F310 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
      v0 |= v1;
    }
    if ( (v0 & 0x8100) == 0x100 )
      HalpShutdown();
  }
}
