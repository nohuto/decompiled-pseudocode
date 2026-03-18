/*
 * XREFs of ??0?$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F3B24
 * Callers:
 *     ?vSrcOpaqCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2560 (-vSrcOpaqCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2800 (-vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140266D20 (-vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1402FF2D0 (-vSrcOpaqCopyS4D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1402FF5B0 (-vSrcOpaqCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1402FF6C0 (-vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1402FFEE4 (-vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<24>::SEMOBJ<24>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  unsigned __int64 v5; // r8
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // rdx
  int v9; // ecx
  int v10; // eax

  v3 = *(HSEMAPHORE *)(a2 + 8616);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFF000000uLL) != 0 && (v7 & 0x1000000) == 0 )
    {
      v9 = 37;
      do
      {
        v10 = v5;
        if ( !_bittest64(&v7, v5) )
          v10 = v9;
        ++v5;
        v9 = v10;
      }
      while ( v5 < 0x40 );
      if ( v10 > 24 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v6 |= 0x1000000uLL;
  }
  return a1;
}
