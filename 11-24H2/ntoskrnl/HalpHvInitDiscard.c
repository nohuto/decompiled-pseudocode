/*
 * XREFs of HalpHvInitDiscard @ 0x140C1141C
 * Callers:
 *     HalpHvInitSystem @ 0x140B4F1E0 (HalpHvInitSystem.c)
 * Callees:
 *     HalpEnlightenmentInitialize @ 0x140548B50 (HalpEnlightenmentInitialize.c)
 */

__int64 __fastcall HalpHvInitDiscard(__int64 a1)
{
  HalpEnlightenmentInitialize();
  if ( HalpHvCpuManager )
  {
    HalpHvSecureCpuResume = 1;
    if ( qword_140FC1130 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140FC1170 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x200) != 0 )
  {
    HalpHvSecureCpuResume = 1;
  }
  off_140E008D8[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140E009E0[0] = HalpSaveAndDisableEnlightenment;
  off_140E009E8[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
