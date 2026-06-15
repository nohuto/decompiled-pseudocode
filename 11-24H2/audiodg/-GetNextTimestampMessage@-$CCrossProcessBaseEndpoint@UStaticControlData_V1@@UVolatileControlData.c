/*
 * XREFs of ?GetNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x1400831C0
 * Callers:
 *     ?ReleaseInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140087A80 (-ReleaseInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053234 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     ?GetCurrentQueue@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140082DE4 (-GetCurrentQueue@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCo.c)
 */

char __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetNextTimestampMessage(
        _QWORD *a1,
        _OWORD *a2)
{
  __int32 v2; // ebx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  int v7; // edx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  bool v12; // zf
  volatile __int32 *v13; // rcx
  __int64 v14; // rax
  unsigned int v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-Ch] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  char v19; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v20 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCurrentQueue(
    a1,
    &v18,
    &v20,
    &v16,
    &v17,
    &v19);
  v5 = v20;
  if ( v20 != v16 )
  {
    if ( IsValidQueueIndex(v20, v17) )
    {
      v6 = v18;
      v7 = v5 + 1;
      v8 = *(_OWORD *)((v5 << 6) + v18 + 16);
      *a2 = *(_OWORD *)((v5 << 6) + v18);
      v9 = *(_OWORD *)((v5 << 6) + v6 + 32);
      a2[1] = v8;
      v10 = *(_OWORD *)((v5 << 6) + v6 + 48);
      v11 = a1[11];
      a2[2] = v9;
      a2[3] = v10;
      v12 = *(_DWORD *)(v11 + 180) == -1;
      v13 = (volatile __int32 *)a1[11];
      v14 = a1[12];
      if ( v12 )
      {
        if ( v7 != *(_DWORD *)(v14 + 132) )
          v2 = v5 + 1;
      }
      else if ( v7 == *(_DWORD *)(v14 + 148) )
      {
        _InterlockedExchange(v13 + 45, -1);
        _InterlockedExchange((volatile __int32 *)(a1[11] + 184LL), 0);
        v13 = (volatile __int32 *)(a1[11] + 188LL);
      }
      else
      {
        v13 += 46;
        v2 = v5 + 1;
      }
      _InterlockedExchange(v13, v2);
      LOBYTE(v2) = 1;
    }
    else
    {
      AudCPTraceLoggingErrorHelper(
        "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::GetN"
        "extTimestampMessage");
    }
  }
  return v2;
}
