/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B514
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?OnAccentPolicyChanged@CWindowData@@QEAAXXZ @ 0x18007E174 (-OnAccentPolicyChanged@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  bool v2; // dl

  v1 = *((_QWORD *)this + 89);
  if ( !v1 || (v2 = 1, (*(_BYTE *)(v1 + 736) & 1) == 0) || (*(_BYTE *)(v1 + 740) & 1) != 0 )
    v2 = 0;
  CTopLevelWindow::UpdateAccent(this, v2);
}
