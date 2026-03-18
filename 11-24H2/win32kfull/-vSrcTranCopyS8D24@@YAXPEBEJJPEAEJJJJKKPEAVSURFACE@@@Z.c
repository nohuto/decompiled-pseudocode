/*
 * XREFs of ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2800
 * Callers:
 *     <none>
 * Callees:
 *     ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F28D4 (-vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BI@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F3AC0 (--$GreReleaseSemaphoreCommon@$0BI@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F3B24 (--0-$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall vSrcTranCopyS8D24(
        const unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int v12; // edi
  int v13; // esi
  __int64 SessionState; // rax
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF

  v12 = a3;
  v13 = a2;
  SessionState = W32GetSessionState(a1, a2, a3);
  SEMOBJ<24>::SEMOBJ<24>(&v16, *(_QWORD *)(SessionState + 96) + 4872LL);
  vSrcTranCopyS8D24Unsafe(a1, v13, v12, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v16 )
    GreReleaseSemaphoreCommon<24,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
}
