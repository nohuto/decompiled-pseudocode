/*
 * XREFs of ?vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1402FFEE4
 * Callers:
 *     ?vSrcTranCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1402FFDA0 (-vSrcTranCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1400F1C6C (-vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 *     ??0?$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F3B24 (--0-$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall vSrcTranCopyS8D16New(
        const unsigned __int8 *a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11,
        void (*a12)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **),
        unsigned __int8 *a13)
{
  int v15; // esi
  __int64 SessionState; // rax
  HSEMAPHORE v18; // rbx
  struct _GRETHREAD *v19; // rax
  bool v20; // zf
  void (*v21)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [rsp+58h] [rbp-20h]

  v15 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  SEMOBJ<24>::SEMOBJ<24>((HSEMAPHORE *)&a12, *(_QWORD *)(SessionState + 96) + 4872LL);
  vSrcTranCopyS8D16NewUnsafe(a1, v15, a3, a4, a5, a6, a7, a8, a9, a10, a11, v21, a13);
  v18 = (HSEMAPHORE)a12;
  if ( a12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"EUDC2", a12);
    v19 = GreGetCurrentThreadCrossSessionCheck();
    if ( v19 )
    {
      v20 = (*(_QWORD *)v19 & 0xFFFFFFFFFEFFFFFFuLL) == 0;
      *(_QWORD *)v19 &= ~0x1000000uLL;
      if ( v20 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v18);
  }
}
