/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14043B080
 * Callers:
 *     HalpDpPostReplace @ 0x140B3F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B3FB3C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B5B6B0 (HalpCheckFixedWakeSources.c)
 *     HalpAcpiPreSleep @ 0x140B5D4E8 (HalpAcpiPreSleep.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  __int64 result; // rax

  result = 3221225659LL;
  if ( PmRegisters[48 * a1] )
    return 0LL;
  return result;
}
