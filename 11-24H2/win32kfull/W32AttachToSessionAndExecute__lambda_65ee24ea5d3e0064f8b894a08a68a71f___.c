/*
 * XREFs of W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402EEE1C
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1402EF0F0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402EED68 (W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402EF118 (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 */

int __fastcall W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(
        unsigned int a1,
        struct _PLUGPLAY_NOTIFY_HDR **a2)
{
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  int v9; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v11; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return SimpleHapticsController::HapticsDeviceNotifyWorker(*a2, a2[1]);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v7, v6) )
      return SimpleHapticsController::HapticsDeviceNotifyWorker(*a2, a2[1]);
    else
      return -1073741811;
  }
  else
  {
    v9 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v11 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v9 = W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v11, 0x47727355u);
    }
    return v9;
  }
}
