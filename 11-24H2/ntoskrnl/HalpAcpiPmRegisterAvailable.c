/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14042AE00
 * Callers:
 *     HalpDpPostReplace @ 0x140B518D0 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B51B8C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B6CA9C (HalpCheckFixedWakeSources.c)
 *     HalpAcpiPreSleep @ 0x140B6DE6C (HalpAcpiPreSleep.c)
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
