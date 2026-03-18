/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140022104
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x1400B788C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1400B79C0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJ<36>::vUnlock(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *v5; // rax

  v3 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"MapRot", (int)*a1, a3);
    v5 = GreGetCurrentThreadCrossSessionCheck();
    if ( v5 )
      *(_QWORD *)v5 &= ~0x1000000000uLL;
    GreReleaseSemaphoreSharedInternal(v3);
    *a1 = 0LL;
  }
}
