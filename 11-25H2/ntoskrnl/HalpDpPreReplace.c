/*
 * XREFs of HalpDpPreReplace @ 0x140B3FB3C
 * Callers:
 *     HalpDpReplaceControl @ 0x140B3FC60 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1404203D0 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockBeforeSleep @ 0x14042D448 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14043B080 (HalpAcpiPmRegisterAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDpPreReplace(__int64 a1)
{
  char v1; // bl
  __int16 v2; // [rsp+40h] [rbp+8h] BYREF
  __int16 v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 45) )
  {
    guard_dispatch_icall_no_overrides(0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0598 >> 1, (__int64)&v3, 2u, 0LL);
      v1 = v3;
      v2 = v3;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0598 >> 1, (__int64)&v3, 2u, 0LL);
        v1 = v2 | v3;
      }
      v2 = v1 & 0x20;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0598 >> 1, (unsigned __int8 *)&v2, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0598 >> 1, (unsigned __int8 *)&v2, 2u, 0LL);
    }
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockBeforeSleep();
  }
}
