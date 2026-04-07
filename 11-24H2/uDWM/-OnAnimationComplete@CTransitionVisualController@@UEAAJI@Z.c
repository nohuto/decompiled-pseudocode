/*
 * XREFs of ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800DD9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180043B7C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18005373C (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionVisualController::OnAnimationComplete(CTransitionVisualController *this, int a2)
{
  CAnimationEngine *v3; // rax
  __int64 v4; // rcx
  CAnimationEngine *v5; // rdi

  if ( *((_DWORD *)this + 22) == a2 )
  {
    v3 = CDesktopManager::AcquireAnimationEngine();
    v5 = v3;
    if ( v3 )
    {
      CAnimationEngine::UnregisterForAnimationCompleteNotification(v3, this);
      CAnimationEngine::Release(v5);
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(
        v4,
        (__int64)&UdwmTransitionVisualController_NotifyComplete,
        *((unsigned int *)this + 26));
    CTransitionVisualController::CleanupTransition(this);
  }
  return 0LL;
}
