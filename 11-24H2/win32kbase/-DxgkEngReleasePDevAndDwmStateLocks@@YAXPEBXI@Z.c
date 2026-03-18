/*
 * XREFs of ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x140013AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x140013B80 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400235B4 (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DxgkEngReleasePDevAndDwmStateLocks(const void *a1, unsigned int a2)
{
  PDEV *i; // rcx
  __int64 v5; // rax
  PDEV *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 SessionState; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate<1>(i);
    v6 = (PDEV *)v5;
    if ( !v5 )
      break;
    v7 = (*(_DWORD *)(v5 + 40) & 0x20400) == 0;
    v10 = v5;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v5 + 2568);
      if ( *(const void **)(v8 + 232) == a1 && *(_DWORD *)(v8 + 248) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v10,
          (struct _SURFOBJ *)((*((_QWORD *)v6 + 318) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v6
                                                                                              + 318) >> 64)),
          0LL,
          2u);
        GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *((_QWORD *)v6 + 6));
      }
    }
  }
  SessionState = W32GetSessionState();
  GreReleaseSemaphoreExclusive<7,>(*(_QWORD *)(SessionState + 88));
}
