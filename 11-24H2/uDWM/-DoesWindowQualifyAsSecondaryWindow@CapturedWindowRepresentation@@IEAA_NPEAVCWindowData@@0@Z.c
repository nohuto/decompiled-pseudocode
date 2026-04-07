/*
 * XREFs of ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A8C8C
 * Callers:
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x18006562C (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800AA968 (-LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180042830 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A8C40 (-DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 */

char __fastcall CapturedWindowRepresentation::DoesWindowQualifyAsSecondaryWindow(
        CapturedWindowRepresentation *this,
        struct CWindowData *a2,
        struct CWindowData *a3)
{
  char v6; // di
  HWND v7; // rcx
  CapturedWindowRepresentation *v9; // rcx
  DWORD dwProcessId; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl) )
  {
    v7 = (HWND)*((_QWORD *)a3 + 5);
    dwProcessId = 0;
    if ( !GetWindowThreadProcessId(v7, &dwProcessId)
      || dwProcessId != *((_DWORD *)this + 20) && *((struct CWindowData **)a3 + 75) != a2 )
    {
      return 0;
    }
  }
  if ( *(struct CWindowData **)a3 != a3
    && CWindowData::IsWindowVisibleAndUncloaked(a3)
    && *((_QWORD *)a3 + 55)
    && (*((int *)a3 + 29) < 0 || *((char *)a3 + 120) < 0)
    && CapturedWindowRepresentation::DoWindowsIntersect(v9, a2, a3) )
  {
    return 1;
  }
  return v6;
}
