/*
 * XREFs of ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x14014E8D8
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14014E360 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

char __fastcall AdvancedWindowPos::HasFullscreenState(AdvancedWindowPos *this, const struct tagWND *a2)
{
  __int64 v2; // rdx
  __int64 UserSessionState; // rax
  char v6; // bl
  __int64 Prop; // rax

  v2 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v2 + 20) & 0x40) != 0 )
    return 1;
  if ( (*(_BYTE *)(v2 + 31) & 0x20) == 0 )
    return 0;
  UserSessionState = W32GetUserSessionState(this, v2);
  v6 = 1;
  Prop = GetProp((__int64)this, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
  if ( !Prop || (*(_DWORD *)(Prop + 16) & 0x40) == 0 )
    return 0;
  return v6;
}
