/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1401ECA78
 * Callers:
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1401EC828 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1401EC9D8 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1402650D8 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x140267DC8 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x14026806C (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 *     NtGdiDDCCIGetCapabilitiesString @ 0x14026D6A0 (NtGdiDDCCIGetCapabilitiesString.c)
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z @ 0x14032241C (-DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     NtGdiDDCCISetVCPFeature @ 0x140322750 (NtGdiDDCCISetVCPFeature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(
        __int64 a1,
        void *a2,
        _QWORD *a3)
{
  __int64 v5; // rdi

  if ( OPM::INVALID_MONITOR_HANDLE == a2 )
    return *(unsigned int *)(a1 + 16);
  if ( (unsigned __int64)a2 > 0xFFFFFFFF )
    return *(unsigned int *)(a1 + 16);
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 12) )
    return *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)a2);
  if ( !v5 )
    return *(unsigned int *)(a1 + 16);
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(*(OPM::CMonitorPDO **)(*(_QWORD *)a1
                                                                                    + 8LL * (unsigned int)a2)) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v5;
  return 0LL;
}
