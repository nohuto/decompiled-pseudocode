/*
 * XREFs of ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C00CEFFC
 * Callers:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00D2254 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     vUnmapRemoteFonts @ 0x1C028B7F0 (vUnmapRemoteFonts.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00CF20C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C013E7A8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmUnmapViewOfSection(void *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v9);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v6) + 32) + 23536LL) && a2 == *(_QWORD *)(v5 + 23488) )
  {
    v7 = MmUnmapViewOfSection(*(_QWORD *)(v5 + 23496), a1);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
    return v7;
  }
  else
  {
    if ( v9 )
    {
      GreReleasePushLockShared(v9);
      KeLeaveCriticalRegion();
    }
    return 3221225473LL;
  }
}
