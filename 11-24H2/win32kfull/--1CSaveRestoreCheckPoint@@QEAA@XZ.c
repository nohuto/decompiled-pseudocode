/*
 * XREFs of ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1402A50C0
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 */

void __fastcall CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint(CSaveRestoreCheckPoint *this)
{
  const struct tagRECT *v1; // rdi
  __int64 v2; // rdx
  __int64 *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  const struct tagWND *v6; // rbx
  __int64 UserSessionState; // rax
  CHECKPOINT *Prop; // rax

  v1 = (const struct tagRECT *)((char *)this + 8);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 8)) )
  {
    LOBYTE(v2) = 1;
    v6 = (const struct tagWND *)HMValidateHandleNoSecure(*v3, v2);
    if ( v6 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      Prop = (CHECKPOINT *)GetProp((__int64)v6, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
      if ( Prop )
        CHECKPOINT::SetNormalRect(Prop, v6, v1, 0);
    }
  }
}
