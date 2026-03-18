/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x140035780
 * Callers:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreDCSelectBrush @ 0x140035920 (GreDCSelectBrush.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     GreDCSelectPen @ 0x14003ABF0 (GreDCSelectPen.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C5CB0 (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct BRUSH *a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  DEC_SHARE_REF_CNT_LAZY0_FAST_OPT(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a1);
}
