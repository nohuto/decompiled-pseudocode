/*
 * XREFs of ?ScheduleEvictionTimer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400E0344
 * Callers:
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E06B8 (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::ScheduleEvictionTimer(VIDMM_GLOBAL *this, struct VIDMM_PHYSICAL_ADAPTER *a2)
{
  __int64 v4; // rdx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 11218, 1, 0) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76284) || (v4 = *((_QWORD *)a2 + 3), v4 == 9000000000LL) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76284) != 1 || (v4 = *((_QWORD *)a2 + 2), v4 == 9000000000LL) )
        v4 = qword_140081658;
    }
    KeSetTimer((PKTIMER)((char *)this + 44808), (LARGE_INTEGER)-v4, (PKDPC)((char *)this + 44880));
  }
}
