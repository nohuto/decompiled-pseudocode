/*
 * XREFs of ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1400EF480
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EF2C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::GetSensitivityLevel(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    return *(unsigned int *)(a1 + 172);
  else
    return 0LL;
}
