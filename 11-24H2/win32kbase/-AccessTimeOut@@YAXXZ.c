/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x14011C3E0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall AccessTimeOut(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 20960) )
  {
    v3 = *(unsigned int *)(W32GetUserSessionState(v1) + 20948);
    if ( (v3 & 1) != 0 )
    {
      v4 = W32GetUserSessionState(v3);
      *(_QWORD *)(UserSessionState + 20960) = ApiSetEditionSetAccessibilityTimer(
                                                *(_QWORD *)(UserSessionState + 20960),
                                                *(unsigned int *)(v4 + 20952),
                                                (__int64)xxxAccessTimeOutTimer,
                                                1u);
    }
  }
}
