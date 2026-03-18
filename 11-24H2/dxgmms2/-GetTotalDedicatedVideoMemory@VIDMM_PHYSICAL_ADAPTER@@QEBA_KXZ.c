/*
 * XREFs of ?GetTotalDedicatedVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEBA_KXZ @ 0x1400FF1D4
 * Callers:
 *     ?QuerySleepStudyStatistics@VIDMM_GLOBAL@@QEAAXGPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x1400FF120 (-QuerySleepStudyStatistics@VIDMM_GLOBAL@@QEAAXGPEAU_DXGK_SLEEP_STUDY_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::GetTotalDedicatedVideoMemory(VIDMM_PHYSICAL_ADAPTER *this)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  unsigned __int16 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax

  v1 = *((_DWORD *)this + 16);
  v2 = 0LL;
  v3 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 206);
    do
    {
      v5 = *(_QWORD *)(v4 + 8LL * v3);
      v6 = *(_DWORD *)(v5 + 104);
      if ( (v6 & 0x1001) == 0 && (v6 & 0x200000) == 0 )
        v2 += *(_QWORD *)(v5 + 72);
      ++v3;
    }
    while ( v3 < v1 );
  }
  return v2;
}
