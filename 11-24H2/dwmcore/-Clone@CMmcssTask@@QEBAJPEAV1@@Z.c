/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180156E68
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156CE4 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1801575C4 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180158024 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1802097C8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180209828 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMmcssTask::Clone(LPCRITICAL_SECTION lpCriticalSection, struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v4; // esi
  char DebugInfo; // al
  int v7; // eax

  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  if ( CMmcssTask::AreEqualMmTask(&lpCriticalSection[1].DebugInfo->Type, &this[1].DebugInfo->Type) )
  {
    DebugInfo = (char)lpCriticalSection[2].DebugInfo;
    if ( LOBYTE(this[2].DebugInfo) != DebugInfo )
    {
      if ( DebugInfo )
        CMmcssTask::Apply(this, 0);
      else
        CMmcssTask::Revert((CMmcssTask *)this);
    }
  }
  else
  {
    v7 = CMmcssTask::Set(
           (CMmcssTask *)this,
           (const struct DWM_MMTASK *)lpCriticalSection[1].DebugInfo,
           (bool)lpCriticalSection[2].DebugInfo);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x77u, 0LL);
  }
  LeaveCriticalSection(lpCriticalSection);
  return v4;
}
