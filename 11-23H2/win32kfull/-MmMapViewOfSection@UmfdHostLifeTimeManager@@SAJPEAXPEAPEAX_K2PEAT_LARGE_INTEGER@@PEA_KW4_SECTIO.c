/*
 * XREFs of ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C00CF0B4
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00CF330 (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00D1280 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     cMapRemoteFonts @ 0x1C028B310 (cMapRemoteFonts.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00CF20C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C013E7A8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmMapViewOfSection(
        void *a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6,
        enum _SECTION_INHERIT a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v18);
  if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v13) + 32) + 23536LL) )
  {
    v15 = *(_QWORD *)(SGDGetSessionState(v14) + 32);
    v16 = MmMapViewOfSection(a1, *(_QWORD *)(v15 + 23496), a2, 0LL, a4, a5, a6, 2, 0x400000, 2);
    *a10 = *(_QWORD *)(v15 + 23488);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v18);
    return v16;
  }
  else
  {
    if ( v18 )
    {
      GreReleasePushLockShared(v18);
      KeLeaveCriticalRegion();
    }
    return 3221225473LL;
  }
}
