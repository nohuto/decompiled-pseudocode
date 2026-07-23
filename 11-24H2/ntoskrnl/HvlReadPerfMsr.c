/*
 * XREFs of HvlReadPerfMsr @ 0x140580CF0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReadPerfRegister @ 0x140581CFC (HvlpReadPerfRegister.c)
 */

__int64 __fastcall HvlReadPerfMsr(__int64 a1, unsigned int a2, __int64 a3)
{
  return HvlpReadPerfRegister(a1, a2 | 0x10000000000000LL, a3);
}
