/*
 * XREFs of ?vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140266D20
 * Callers:
 *     <none>
 * Callees:
 *     ?vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2120 (-vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BI@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F3AC0 (--$GreReleaseSemaphoreCommon@$0BI@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F3B24 (--0-$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS4D24(
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
        struct SURFACE *a11)
{
  int v13; // esi
  __int64 SessionState; // rax
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF

  v13 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  SEMOBJ<24>::SEMOBJ<24>((HSEMAPHORE *)&v16, *(_QWORD *)(SessionState + 96) + 4872LL);
  vSrcOpaqCopyS4D24Unsafe(a1, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v16 )
    GreReleaseSemaphoreCommon<24,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v16);
}
