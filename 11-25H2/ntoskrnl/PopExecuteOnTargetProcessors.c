/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x1403B2EE8
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x14026A200 (PpmUpdatePlatformIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1403B20E4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmUpdateIdleDomains @ 0x1405CAE30 (PpmUpdateIdleDomains.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CAF20 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCheckResetProcessors @ 0x1405D2260 (PpmCheckResetProcessors.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     PpmIdleRegisterDefaultStates @ 0x14073E1EC (PpmIdleRegisterDefaultStates.c)
 *     PpmWmiIdleAccountingWork @ 0x14074F9D0 (PpmWmiIdleAccountingWork.c)
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 *     PpmPostProcessMediaBuffering @ 0x140A3F0D8 (PpmPostProcessMediaBuffering.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A4D8BC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmUpdateProcessorPolicy @ 0x140A56B1C (PpmUpdateProcessorPolicy.c)
 *     PpmUpdateIdleStates @ 0x140A640E0 (PpmUpdateIdleStates.c)
 *     PpmReapplyIdlePolicy @ 0x140A936D0 (PpmReapplyIdlePolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x1403B2FA4 (PopQueueTargetDpc.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+5Ah] [rbp-1Fh]
  __int16 v10; // [rsp+5Eh] [rbp-1Bh]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  Object = 393217LL;
  v17 = 0;
  v6[1] = v6;
  v6[0] = v6;
  v7[1] = *(_QWORD *)(a1 + 8);
  v15 = v7;
  v7[0] = a1;
  v11 = a2;
  p_Object = &Object;
  memset(&Dpc, 0, 60);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
