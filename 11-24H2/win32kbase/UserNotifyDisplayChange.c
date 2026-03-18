/*
 * XREFs of UserNotifyDisplayChange @ 0x1400A3780
 * Callers:
 *     DrvEnableMDEV @ 0x140012A70 (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400A38F0 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x140041C90 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1400A37E8 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1400A3A40 (DwmAsyncNotifyDisplayModeChange.c)
 */

__int64 UserNotifyDisplayChange()
{
  __int64 v1; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v1 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v1);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
}
