/*
 * XREFs of ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x18005A6EC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x18005A784 (-OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::EndTransition(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 1);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmEndTransitionRequest, v5);
  if ( v5 != -1 )
    v4 = CAnimationScheduler::OnEndTransitionRequest(
           *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
           v5);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
