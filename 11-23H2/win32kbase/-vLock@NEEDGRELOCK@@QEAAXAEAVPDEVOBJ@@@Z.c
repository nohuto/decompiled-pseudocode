/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0089E50
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005E63C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x1C016C72C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0089ED0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  HSEMAPHORE v5; // rcx

  *(_QWORD *)this = 0LL;
  if ( *(_QWORD *)a2
    && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000) == 0 )
  {
    v5 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 120LL);
    *(_QWORD *)this = v5;
    EngAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsem", *(_QWORD *)this, 2);
  }
}
