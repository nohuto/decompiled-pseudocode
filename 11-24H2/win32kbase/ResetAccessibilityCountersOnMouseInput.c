/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1400EC220
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E486C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall ResetAccessibilityCountersOnMouseInput(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 UserSessionState; // rbx
  __int64 v4; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(W32GetUserSessionState(a1) + 14052) = 0;
  *(_BYTE *)(W32GetUserSessionState(v1) + 14053) = 0;
  _InterlockedOr(v5, 0);
  UserSessionState = W32GetUserSessionState(v2);
  if ( *(_QWORD *)(UserSessionState + 20544) )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
    if ( *(_QWORD *)(UserSessionState + 20544) )
    {
      ApiSetEditionKillAccessibilityTimer();
      *(_QWORD *)(UserSessionState + 20544) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v4) + 20568) = 8;
    }
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  }
}
