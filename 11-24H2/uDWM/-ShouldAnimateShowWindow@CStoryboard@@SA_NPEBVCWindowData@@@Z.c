/*
 * XREFs of ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000321C
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180003294 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18004087C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180053678 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CStoryboard::ShouldAnimateShowWindow(const struct CWindowData *a1)
{
  unsigned __int64 v1; // rdx
  char v3; // bl
  int v4; // eax
  CBaseObject *v5; // r10
  CImmersiveState *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  v7 = 0LL;
  v3 = 1;
  v4 = CImmersiveState::Create(&v7, v1);
  v5 = v7;
  if ( v4 >= 0
    && (*((_DWORD *)a1 + 186) & 0x100000) != 0
    && ((*((_BYTE *)a1 + 740) & 1) != 0 || CImmersiveState::IsLauncherShownAboveWindow(v7, a1)) )
  {
    v3 = 0;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v3;
}
