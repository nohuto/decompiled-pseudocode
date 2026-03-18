/*
 * XREFs of HalpTimerBuildKnownResourceIdString @ 0x1405472E0
 * Callers:
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 *     HalpTimerRegister @ 0x14056008C (HalpTimerRegister.c)
 * Callees:
 *     HalpExtBuildResourceIdString @ 0x14054CD64 (HalpExtBuildResourceIdString.c)
 */

__int64 __fastcall HalpTimerBuildKnownResourceIdString(__int64 a1, int a2, wchar_t *a3)
{
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  LODWORD(SizeInWords) = a2;
  return HalpExtBuildResourceIdString(
           1413894989,
           0,
           16640,
           *(unsigned __int16 *)(a1 + 136),
           1,
           0,
           *(_DWORD *)(a1 + 140),
           SizeInWords,
           a3);
}
