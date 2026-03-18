/*
 * XREFs of RemotePassthruDisable @ 0x1C020281C
 * Callers:
 *     NtUserRemotePassthruDisable @ 0x1C01D9250 (NtUserRemotePassthruDisable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x1C0131D40 (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C02027D4 (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02DCAC4 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 v0; // rdx
  __int64 Timer_high; // rcx
  __int64 RemoteContext; // rsi
  __int64 v3; // r8
  PVOID v5; // r8
  HANDLE v6; // rdx
  __int64 v7; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  RemoteContext = GreGetRemoteContext();
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 4) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      26,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(Timer_high, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v5 = gConsoleShadowThinwireFileObject;
      v6 = ghConsoleShadowThinwireChannel;
      v7 = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v5 = (PVOID)gThinwireFileObject;
      v6 = (HANDLE)ghRemoteThinwireChannel;
      v7 = RemoteHDEV;
    }
    if ( !(unsigned int)bDrvReconnect(v7, v6, v5, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen(v10, v9, v11);
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
