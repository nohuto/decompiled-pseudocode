/*
 * XREFs of ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x1400350FC
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1400954E4 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x14009C4EC (--1VIDMM_PARTITION@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DF728 (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1400FA42C (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 *     VidSchInitializeAdapter @ 0x140115F70 (VidSchInitializeAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK(DXGAUTOEXPUSHLOCK *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  }
  else if ( v1 == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1), 0LL);
  }
}
