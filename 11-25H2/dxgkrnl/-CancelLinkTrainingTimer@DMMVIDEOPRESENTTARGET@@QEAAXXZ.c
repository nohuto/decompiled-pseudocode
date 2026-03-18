/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1403E51E4
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14008DDB4 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x140253330 (-DmmReset@@YAXPEAX@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140257160 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1402581FC (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1404031BC (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax

  if ( *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) == 1 || *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) == 3 )
  {
    KeCancelTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL));
    KeFlushQueuedDpcs();
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v5 = *((_QWORD *)this + 67);
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 152), 0, 5);
    if ( v6 != 5 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, 0LL, 152LL, a4) + 24) = v6;
      WdLogGlobalForLineNumber = 496;
    }
  }
}
