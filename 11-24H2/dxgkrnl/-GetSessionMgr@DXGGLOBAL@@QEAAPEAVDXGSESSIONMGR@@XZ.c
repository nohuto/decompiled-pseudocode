/*
 * XREFs of ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018CA00
 * Callers:
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x140008B60 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x140009010 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x140009520 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x140026D68 (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140059480 (-WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPE.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x140063C44 (-IsCurrentConsoleSession@@YAEXZ.c)
 * Callees:
 *     <none>
 */

struct DXGSESSIONMGR *__fastcall DXGGLOBAL::GetSessionMgr(DXGGLOBAL *this)
{
  return (struct DXGSESSIONMGR *)*((_QWORD *)this + 122);
}
