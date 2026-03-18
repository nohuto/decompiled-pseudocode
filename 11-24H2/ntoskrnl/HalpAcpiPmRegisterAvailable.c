/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x140438240
 * Callers:
 *     HalpDpPostReplace @ 0x140B4F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B4FB3C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B6B1B0 (HalpCheckFixedWakeSources.c)
 *     HalpAcpiPreSleep @ 0x140B6C5C8 (HalpAcpiPreSleep.c)
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
