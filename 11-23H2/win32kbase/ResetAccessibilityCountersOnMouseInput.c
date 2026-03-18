/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C01B76F0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00E6350 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0206B90 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall ResetAccessibilityCountersOnMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13832) = 0;
  *(_BYTE *)(SGDGetUserSessionState(v5, v4, v6, v7) + 13833) = 0;
  _InterlockedOr(v12, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
    v11 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      ApiSetEditionKillAccessibilityTimer(v8, gtmridFKActivation);
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v13 )
      UserSessionSwitchLeaveCrit(v8, v11, v9, v10);
  }
}
