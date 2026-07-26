/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x14009DAB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098480 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  PVOID v4; // rsi

  v4 = ShutdownContext;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ShutdownContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ShutdownContext,
      1,
      47,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportHandle);
  }
  if ( !*((_QWORD *)MiniportHandle + 258) )
  {
    *((_QWORD *)MiniportHandle + 258) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 257) = v4;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ShutdownContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ShutdownContext,
      1,
      48,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportHandle);
  }
}
