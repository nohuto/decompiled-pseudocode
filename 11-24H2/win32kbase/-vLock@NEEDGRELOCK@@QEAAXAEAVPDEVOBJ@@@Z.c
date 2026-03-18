/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014520
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x140014590 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rcx

  *(_QWORD *)this = 0LL;
  if ( *(_QWORD *)a2
    && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000) == 0 )
  {
    v6 = *(_QWORD **)(W32GetSessionState(v5, v4) + 88);
    *(_QWORD *)this = *v6 + 1144LL;
    GreAcquireSemaphore<2,>(v6);
  }
}
