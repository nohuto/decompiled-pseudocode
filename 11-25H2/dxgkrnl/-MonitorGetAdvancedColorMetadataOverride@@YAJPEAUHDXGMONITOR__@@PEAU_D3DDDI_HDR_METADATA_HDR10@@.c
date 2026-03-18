/*
 * XREFs of ?MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@@Z @ 0x14030933C
 * Callers:
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402B0520 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140308DD0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorMetadataOverride(
        struct HDXGMONITOR__ *a1,
        struct _D3DDDI_HDR_METADATA_HDR10 *a2)
{
  __int64 v4; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
  if ( v5[0] )
  {
    v4 = *(_QWORD *)(v5[0] + 224LL);
    *(_OWORD *)a2->RedPrimary = *(_OWORD *)(v4 + 484);
    *(_QWORD *)&a2->MaxMasteringLuminance = *(_QWORD *)(v4 + 500);
    *(_DWORD *)&a2->MaxContentLightLevel = *(_DWORD *)(v4 + 508);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3699;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
    return 3221226021LL;
  }
}
