/*
 * XREFs of ?PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1801BD410
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x180032310 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall MPCClickerProcessor::PopulateDetectedOrLostReport(
        MPCClickerProcessor *this,
        unsigned __int8 a2,
        __int64 a3,
        struct LegacyInputInfo *a4)
{
  int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
         4 * (unsigned int)a2 + 1,
         0,
         1024,
         **((_DWORD **)this + 6),
         (__int64)a4);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v4,
      v5);
}
