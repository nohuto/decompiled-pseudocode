/*
 * XREFs of ?QuerySleepStudyStatistics@VIDMM_GLOBAL@@QEAAXGPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x1400FF1FC
 * Callers:
 *     VidMmQuerySleepStudyStatistics @ 0x140042580 (VidMmQuerySleepStudyStatistics.c)
 * Callees:
 *     ?GetTotalDedicatedVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEBA_KXZ @ 0x1400FF2B0 (-GetTotalDedicatedVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_GLOBAL::QuerySleepStudyStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct _DXGK_SLEEP_STUDY_DATA *a3)
{
  unsigned __int16 v4; // r11
  __int64 v6; // rbx
  __int16 v7; // r11

  *((_QWORD *)a3 + 5) = *((_QWORD *)this + 5618);
  v4 = 0;
  *((_QWORD *)a3 + 1) = qword_1400815B8;
  *((_QWORD *)a3 + 2) = qword_140081658;
  *((_QWORD *)a3 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 24LL);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 16LL);
  *(_QWORD *)a3 = 0LL;
  if ( *((_DWORD *)this + 1736) )
  {
    v6 = 0LL;
    do
    {
      v6 += VIDMM_PHYSICAL_ADAPTER::GetTotalDedicatedVideoMemory(*(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029)
                                                                                            + 8LL * v4));
      v4 = v7 + 1;
      *(_QWORD *)a3 = v6;
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 1736) );
  }
}
