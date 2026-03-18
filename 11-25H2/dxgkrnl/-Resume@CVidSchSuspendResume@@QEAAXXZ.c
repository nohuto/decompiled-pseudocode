/*
 * XREFs of ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x140051378
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1403140E4 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 */

void __fastcall CVidSchSuspendResume::Resume(ADAPTER_RENDER **this)
{
  if ( *(_DWORD *)this )
  {
    ADAPTER_RENDER::ResumeSchedulerForVidPnSource(this[1], *(_DWORD *)this);
    *(_DWORD *)this = 0;
  }
}
