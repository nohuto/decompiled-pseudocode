/*
 * XREFs of KiDetermineImportOptimizationEnablement @ 0x1405BB398
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     KiIsSafeBoot @ 0x1405BB624 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1405BB76C (KiIsWinPEBoot.c)
 */

__int64 __fastcall KiDetermineImportOptimizationEnablement(__int64 a1)
{
  __int64 result; // rax

  result = KiIsSafeBoot();
  if ( (_BYTE)result
    || (result = KiIsWinPEBoot(a1), (_BYTE)result)
    || (result = *(_QWORD *)(a1 + 240), (*(_DWORD *)(result + 132) & 0x1000) != 0) )
  {
    KiFeatureSettings |= 0x20000u;
  }
  return result;
}
