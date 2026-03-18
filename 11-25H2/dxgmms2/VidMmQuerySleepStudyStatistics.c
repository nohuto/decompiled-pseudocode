/*
 * XREFs of VidMmQuerySleepStudyStatistics @ 0x140042580
 * Callers:
 *     <none>
 * Callees:
 *     ?QuerySleepStudyStatistics@VIDMM_GLOBAL@@QEAAXGPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x1400FF1FC (-QuerySleepStudyStatistics@VIDMM_GLOBAL@@QEAAXGPEAU_DXGK_SLEEP_STUDY_DATA@@@Z.c)
 */

void __fastcall VidMmQuerySleepStudyStatistics(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        struct _DXGK_SLEEP_STUDY_DATA *a3)
{
  VIDMM_GLOBAL::QuerySleepStudyStatistics(a1, a2, a3);
}
