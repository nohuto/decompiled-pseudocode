/*
 * XREFs of ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FA0
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018BA34 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400C20B4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMSuppressed(CBaseProcessor *this)
{
  __int64 UserSessionState; // rax
  bool IsInputThreadDesktopActive; // al
  char v4; // dl

  UserSessionState = W32GetUserSessionState(this);
  IsInputThreadDesktopActive = CMasterInputThread::IsInputThreadDesktopActive(*(CMasterInputThread **)(UserSessionState + 18808));
  v4 = 0;
  if ( IsInputThreadDesktopActive )
    return (*((_DWORD *)this + 2) & 4) != 0;
  return v4;
}
