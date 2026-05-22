/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801B77B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BF0FC (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1240 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1268 (--$-4U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@-$unique_ptr@VMPCSlateDeadzoneHelper@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800C148C (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x1800C14D0 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800C16F0 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@AEAAXXZ @ 0x1801B78CC (-InitializeConstants@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::Initialize3DComponents(signed __int64 this)
{
  char *v1; // rbx
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  struct MPCConstantManager *Instance; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  struct MPCConstantManager *v15; // rax
  __int64 *v16; // rax
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  float v19; // [rsp+58h] [rbp+28h] BYREF
  __int64 v20; // [rsp+60h] [rbp+30h] BYREF

  v1 = (char *)(this - 32);
  MPCGamepadProcessor::InitializeConstants((MPCGamepadProcessor *)(this - 32));
  v3 = std::make_unique<MPCButtonHoldHelper,float,0>(&v18, flt_1802037F4);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4240, v3);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v18);
  v4 = std::make_unique<MPCButtonHoldHelper,float,0>(&v18, flt_1802037F4);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4248, v4);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v18);
  Instance = MPCConstantManager::GetInstance(v6, v5, v7, v8);
  *((_QWORD *)&v17 + 1) = 25LL;
  *(_QWORD *)&v17 = L"SelectTemporalDeadzoneSec";
  v10 = this & -(__int64)(v1 != 0LL);
  LODWORD(v18) = MPCConstantManager::GetConstant<float>((__int64)Instance, v10, &v17);
  v15 = MPCConstantManager::GetInstance(v12, v11, v13, v14);
  *((_QWORD *)&v17 + 1) = 18LL;
  *(_QWORD *)&v17 = L"SelectXYDeadzone1M";
  v19 = MPCConstantManager::GetConstant<float>((__int64)v15, v10, &v17);
  v16 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v20, &v19, (float *)&v18);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(this + 4256, v16);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v20);
  *(_BYTE *)(this + 3547) = 1;
}
