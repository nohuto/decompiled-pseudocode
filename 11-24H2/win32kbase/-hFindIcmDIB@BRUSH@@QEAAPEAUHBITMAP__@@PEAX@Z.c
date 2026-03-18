/*
 * XREFs of ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401C3F10
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C3E10 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     <none>
 */

HBITMAP __fastcall BRUSH::hFindIcmDIB(BRUSH *this, void *a2)
{
  struct _FAST_MUTEX **v5; // rdi
  __int64 i; // rbx

  if ( !a2 )
    return (HBITMAP)*((_QWORD *)this + 3);
  v5 = *(struct _FAST_MUTEX ***)(W32GetSessionState(this) + 88);
  KeAcquireGuardedMutex(*v5 + 26);
  for ( i = *((_QWORD *)this + 11); i; i = *(_QWORD *)(i + 16) )
  {
    if ( *(void **)i == a2 )
    {
      KeReleaseGuardedMutex(*v5 + 26);
      return *(HBITMAP *)(i + 8);
    }
  }
  KeReleaseGuardedMutex(*v5 + 26);
  return 0LL;
}
