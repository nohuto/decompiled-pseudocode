/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140370234
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x140370500 (PoGetPerfStateAndParkingInfo.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403A5100 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateIdleDomains @ 0x1405CCC00 (PpmUpdateIdleDomains.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CCCF0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCheckResetProcessors @ 0x1405D41E0 (PpmCheckResetProcessors.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407485F0 (PpmIdleRegisterDefaultStates.c)
 *     PpmWmiIdleAccountingWork @ 0x14075B280 (PpmWmiIdleAccountingWork.c)
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 *     PpmPostProcessMediaBuffering @ 0x140A3D2EC (PpmPostProcessMediaBuffering.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 *     PpmUpdateIdleStates @ 0x140A5FB30 (PpmUpdateIdleStates.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140A6B908 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmReapplyIdlePolicy @ 0x140A94190 (PpmReapplyIdlePolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x1403702F0 (PopQueueTargetDpc.c)
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
