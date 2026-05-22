/*
 * XREFs of ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800BFFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BCF1C (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF060 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF088 (--$-4U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@-$unique_ptr@VMPCSlateDeadzoneHelper@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800BF2AC (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x1800BF2F0 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800BF510 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ?InitializeConstants@MPCHandProcessor@@AEAAXXZ @ 0x1800C0168 (-InitializeConstants@MPCHandProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCHandProcessor::Initialize3DComponents(signed __int64 this)
{
  char *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  struct MPCConstantManager *Instance; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  struct MPCConstantManager *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const char *v18; // r9
  struct MPCConstantManager *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // r9
  struct MPCConstantManager *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int128 v27; // [rsp+20h] [rbp-10h] BYREF
  float v28; // [rsp+50h] [rbp+20h] BYREF
  __int64 v29; // [rsp+58h] [rbp+28h] BYREF
  __int64 v30; // [rsp+60h] [rbp+30h] BYREF

  v1 = (char *)(this - 24);
  MPCHandProcessor::InitializeConstants((MPCHandProcessor *)(this - 24));
  Instance = MPCConstantManager::GetInstance(v4, v3, v5, v6);
  *((_QWORD *)&v27 + 1) = 31LL;
  *(_QWORD *)&v27 = L"RayInjectionTemporalDeadzoneSec";
  v8 = this & -(__int64)(v1 != 0LL);
  v28 = MPCConstantManager::GetConstant<float>((__int64)Instance, v8, &v27);
  v13 = MPCConstantManager::GetInstance(v10, v9, v11, v12);
  *((_QWORD *)&v27 + 1) = 24LL;
  *(_QWORD *)&v27 = L"RayInjectionXYDeadzone1M";
  LODWORD(v29) = MPCConstantManager::GetConstant<float>((__int64)v13, v8, &v27);
  v14 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v30, (float *)&v29, &v28);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(this + 3648, v14);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v30);
  v19 = MPCConstantManager::GetInstance(v16, v15, v17, v18);
  *((_QWORD *)&v27 + 1) = 24LL;
  *(_QWORD *)&v27 = L"TouchTemporalDeadzoneSec";
  v28 = MPCConstantManager::GetConstant<float>((__int64)v19, v8, &v27);
  v24 = MPCConstantManager::GetInstance(v21, v20, v22, v23);
  *((_QWORD *)&v27 + 1) = 17LL;
  *(_QWORD *)&v27 = L"TouchXYDeadzone1M";
  LODWORD(v29) = MPCConstantManager::GetConstant<float>((__int64)v24, v8, &v27);
  v25 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v30, (float *)&v29, &v28);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(this + 3656, v25);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v30);
  v28 = 0.0;
  v26 = std::make_unique<MPCButtonHoldHelper,float,0>(&v29, &v28);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 3664, v26);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v29);
  *(_BYTE *)(this + 3547) = 1;
}
