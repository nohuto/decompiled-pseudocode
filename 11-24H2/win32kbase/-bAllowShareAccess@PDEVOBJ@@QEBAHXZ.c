/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x140014590
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x140010ED0 (GreLockVisRgnSharedOrExclusive.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400143F0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014520 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14012FFF0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this, __int64 a2)
{
  __int64 v2; // rbx
  PDEVOBJ *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  __int64 SessionState; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)this;
  v3 = this;
  v4 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  if ( (v4 & 1) == 0 )
    return 0LL;
  if ( (v4 & 0x1000000) != 0 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 2604) != 5 && (v4 & 0x20000) == 0 )
  {
    this = *(PDEVOBJ **)(v2 + 2568);
    if ( (((unsigned __int64)this + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)this + 40) & 0x800000) == 0 )
      return 0LL;
  }
  v5 = *(_QWORD *)(v2 + 24);
  SessionState = W32GetSessionState(this, a2);
  v7 = *(_QWORD *)v3;
  return (*(_DWORD *)(*(_QWORD *)v3 + 2112LL) & 0x400) == 0
      && (*(_DWORD *)(v7 + 1808) & 0x8000000) == 0
      && (*(_DWORD *)(v7 + 40) & 0x48000000) == 0
      && (*(_DWORD *)(v5 + 40) & 0x1000000) == 0
      && *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 4128LL) != 0;
}
