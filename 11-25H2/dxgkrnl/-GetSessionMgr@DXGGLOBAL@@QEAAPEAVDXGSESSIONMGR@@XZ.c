/*
 * XREFs of ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018AA10
 * Callers:
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x140018130 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1400185E0 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x140018AF0 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1400265C8 (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1400599C0 (-WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPE.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x140063354 (-IsCurrentConsoleSession@@YAEXZ.c)
 * Callees:
 *     <none>
 */

struct DXGSESSIONMGR *__fastcall DXGGLOBAL::GetSessionMgr(DXGGLOBAL *this)
{
  return (struct DXGSESSIONMGR *)*((_QWORD *)this + 118);
}
