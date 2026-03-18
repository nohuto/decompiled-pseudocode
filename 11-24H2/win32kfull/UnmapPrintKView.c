/*
 * XREFs of UnmapPrintKView @ 0x1401B1A3C
 * Callers:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1401B19A4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BH@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1401B1AC0 (--$GreReleaseSemaphoreCommon@$0BH@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1401B1B20 (--0-$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1401B776C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 */

void __fastcall UnmapPrintKView(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *i; // rbx
  void *v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<23>::SEMOBJ<23>(&v6, v3 + 4872);
  for ( i = *(_QWORD **)(v3 + 24032); i; i = (_QWORD *)i[4] )
  {
    if ( *i == a1 )
    {
      v5 = (void *)i[2];
      if ( v5 )
      {
        vUnmapFontFileInKernel(v5);
        i[2] = 0LL;
      }
    }
  }
  if ( v6 )
    GreReleaseSemaphoreCommon<23,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
}
