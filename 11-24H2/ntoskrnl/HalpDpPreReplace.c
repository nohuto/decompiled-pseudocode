/*
 * XREFs of HalpDpPreReplace @ 0x140B4FB3C
 * Callers:
 *     HalpDpReplaceControl @ 0x140B4FC60 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14041D360 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockBeforeSleep @ 0x140425518 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x140438240 (HalpAcpiPmRegisterAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDpPreReplace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 45) )
  {
    guard_dispatch_icall_no_overrides(0LL, a2, a3, a4);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0D38 >> 1, (__int64)&v6, 2u, 0LL);
      v4 = v6;
      v5 = v6;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0D38 >> 1, (__int64)&v6, 2u, 0LL);
        v4 = v5 | v6;
      }
      v5 = v4 & 0x20;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0D38 >> 1, (unsigned __int8 *)&v5, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0D38 >> 1, (unsigned __int8 *)&v5, 2u, 0LL);
    }
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockBeforeSleep();
  }
}
