/*
 * XREFs of ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180044268
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x180044354 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartTransition(CWindowList *this, struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *a2)
{
  __int64 v3; // rcx
  const struct _GUID *v4; // r8
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmBeginTransitionRequest, *((unsigned int *)a2 + 1));
  v4 = (const struct _GUID *)((char *)a2 + 8);
  v5 = *((_QWORD *)a2 + 1) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = *((_QWORD *)a2 + 2) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v5 )
    v4 = 0LL;
  v6 = CAnimationScheduler::OnBeginTransitionRequest(
         *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
         *((_DWORD *)a2 + 1),
         v4,
         (struct _GUID *)((char *)a2 + 24));
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x15DFu, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
