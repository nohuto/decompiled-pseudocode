/*
 * XREFs of ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     DxgkEngReleaseStableVisRgn @ 0x1400D0BB0 (DxgkEngReleaseStableVisRgn.c)
 *     UntrapAppContainerRenderingWrap @ 0x140147F00 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreShared<2,>(__int64 *a1)
{
  __int64 v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"GreLock", *a1 + 1144);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 10))-- == 1 )
      *(_QWORD *)v2 &= ~4uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v1 + 1144));
}
