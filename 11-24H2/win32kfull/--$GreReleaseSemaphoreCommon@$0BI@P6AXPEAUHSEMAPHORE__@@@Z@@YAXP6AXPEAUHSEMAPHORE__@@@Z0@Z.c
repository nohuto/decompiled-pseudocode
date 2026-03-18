/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BI@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F3AC0
 * Callers:
 *     ?vSrcOpaqCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2560 (-vSrcOpaqCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2800 (-vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140266D20 (-vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<24,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *v4; // rax
  bool v5; // zf

  EtwTraceGreLockReleaseSemaphore(L"EUDC2", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    v5 = (*(_QWORD *)v4 & 0xFFFFFFFFFEFFFFFFuLL) == 0;
    *(_QWORD *)v4 &= ~0x1000000uLL;
    if ( v5 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
