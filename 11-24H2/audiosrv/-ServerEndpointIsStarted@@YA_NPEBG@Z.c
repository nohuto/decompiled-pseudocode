/*
 * XREFs of ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800CF5A4
 * Callers:
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800CF898 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 */

char __fastcall ServerEndpointIsStarted(const unsigned __int16 *a1)
{
  char v2; // si
  RPC_STATUS v3; // eax
  __int64 i; // rdi
  RPC_BINDING_VECTOR *BindingVector[2]; // [rsp+30h] [rbp-10h] BYREF
  RPC_WSTR StringBinding; // [rsp+78h] [rbp+38h] BYREF
  RPC_WSTR Protseq; // [rsp+80h] [rbp+40h] BYREF
  RPC_WSTR String; // [rsp+88h] [rbp+48h] BYREF

  BindingVector[0] = 0LL;
  v2 = 0;
  v3 = RpcServerInqBindings(BindingVector);
  if ( v3 )
  {
    if ( v3 != 1718 )
      return v2;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids, a1);
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < BindingVector[0]->Count; i = (unsigned int)(i + 1) )
    {
      StringBinding = 0LL;
      if ( !RpcBindingToStringBindingW(BindingVector[0]->BindingH[i], &StringBinding) )
      {
        Protseq = 0LL;
        String = 0LL;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xAu,
            (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
            StringBinding);
        }
        if ( !RpcStringBindingParseW(StringBinding, 0LL, &Protseq, 0LL, &String, 0LL) )
        {
          if ( !(unsigned int)_o__wcsicmp(Protseq, L"ncalrpc") )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids);
            }
            if ( !(unsigned int)_o__wcsicmp(String, a1) )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0xCu,
                  (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
                  a1);
              }
              v2 = 1;
              RpcStringFreeW(&Protseq);
              RpcStringFreeW(&StringBinding);
              RpcStringFreeW(&String);
              break;
            }
          }
          RpcStringFreeW(&Protseq);
          RpcStringFreeW(&String);
        }
        RpcStringFreeW(&StringBinding);
      }
    }
  }
  if ( BindingVector[0] )
    RpcBindingVectorFree(BindingVector);
  return v2;
}
