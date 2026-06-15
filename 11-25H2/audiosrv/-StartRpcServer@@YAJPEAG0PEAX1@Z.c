/*
 * XREFs of ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800CE7A8
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800CCE10 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800CE4C0 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 */

__int64 __fastcall StartRpcServer(unsigned __int16 *a1, unsigned __int16 *a2, void *a3, void *a4)
{
  RPC_STATUS v7; // eax
  unsigned int v8; // ebx
  int v9; // eax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids, a2);
  }
  if ( ServerEndpointIsStarted(a2) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids);
    }
    goto LABEL_16;
  }
  v7 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, a2, a4);
  v8 = v7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, (__int64)&WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids, v7);
  }
  if ( !v8 )
  {
LABEL_16:
    v9 = RpcServerRegisterIf3(a3, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, a4);
    v8 = v9;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids,
        v9);
    }
  }
  return v8;
}
