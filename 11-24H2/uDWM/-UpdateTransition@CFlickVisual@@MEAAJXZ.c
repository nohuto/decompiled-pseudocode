/*
 * XREFs of ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800C31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180094A30 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800B75B4 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CFlickVisual::UpdateTransition(CFlickVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 39);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CFlickVisual::Stop(this);
  else
    CContactManager::PostFlickFeedbackUpdate(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20),
      *((_DWORD *)this + 64),
      *((_DWORD *)this + 65),
      (_QWORD *)this + 34,
      v1 != 0);
  return 0LL;
}
