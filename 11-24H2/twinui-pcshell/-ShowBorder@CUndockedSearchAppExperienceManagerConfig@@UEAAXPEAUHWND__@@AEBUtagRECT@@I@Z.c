/*
 * XREFs of ?ShowBorder@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@I@Z @ 0x1802155C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::ShowBorder(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    1u,
    (char)a3,
    a4);
}
