/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801B45F0
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
 *     ?InitializeConstants@MPCSixDofProcessor@@AEAAXXZ @ 0x1801B4934 (-InitializeConstants@MPCSixDofProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::Initialize3DComponents(signed __int64 this)
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
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  struct MPCConstantManager *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const char *v22; // r9
  struct MPCConstantManager *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  const char *v28; // r9
  struct MPCConstantManager *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  const char *v34; // r9
  struct MPCConstantManager *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  const char *v39; // r9
  struct MPCConstantManager *v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  const char *v45; // r9
  struct MPCConstantManager *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  const char *v50; // r9
  struct MPCConstantManager *v51; // rax
  __int64 *v52; // rax
  __int128 v53; // [rsp+20h] [rbp-10h] BYREF
  __int64 v54; // [rsp+50h] [rbp+20h] BYREF
  __int64 v55; // [rsp+58h] [rbp+28h] BYREF
  __int64 v56; // [rsp+60h] [rbp+30h] BYREF

  v1 = (char *)(this - 24);
  MPCSixDofProcessor::InitializeConstants((MPCSixDofProcessor *)(this - 24));
  LODWORD(v54) = 0;
  v3 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v54);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4072, v3);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v55);
  v4 = std::make_unique<MPCButtonHoldHelper,float,0>(&v54, &flt_18020368C);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4080, v4);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v54);
  Instance = MPCConstantManager::GetInstance(v6, v5, v7, v8);
  *((_QWORD *)&v53 + 1) = 24LL;
  *(_QWORD *)&v53 = L"DragModeTriggerTimeInSec";
  v10 = this & -(__int64)(v1 != 0LL);
  LODWORD(v54) = MPCConstantManager::GetConstant<float>((__int64)Instance, v10, &v53);
  v11 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v54);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4088, v11);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v55);
  LODWORD(v54) = 0;
  v12 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v54);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4096, v12);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v55);
  v17 = MPCConstantManager::GetInstance(v14, v13, v15, v16);
  *((_QWORD *)&v53 + 1) = 30LL;
  *(_QWORD *)&v53 = L"TouchpadReleasedTimeoutSeconds";
  LODWORD(v54) = MPCConstantManager::GetConstant<float>((__int64)v17, v10, &v53);
  v18 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v54);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4104, v18);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v55);
  v23 = MPCConstantManager::GetInstance(v20, v19, v21, v22);
  *((_QWORD *)&v53 + 1) = 29LL;
  *(_QWORD *)&v53 = L"TouchpadTouchedTimeoutSeconds";
  LODWORD(v54) = MPCConstantManager::GetConstant<float>((__int64)v23, v10, &v53);
  v24 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v54);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4112, v24);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v55);
  v29 = MPCConstantManager::GetInstance(v26, v25, v27, v28);
  *((_QWORD *)&v53 + 1) = 32LL;
  *(_QWORD *)&v53 = L"TouchpadDeltaSmoothingTimeoutSec";
  LODWORD(v54) = MPCConstantManager::GetConstant<float>((__int64)v29, v10, &v53);
  v30 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v54);
  std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(this + 4120, v30);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v55);
  v35 = MPCConstantManager::GetInstance(v32, v31, v33, v34);
  *((_QWORD *)&v53 + 1) = 27LL;
  *(_QWORD *)&v53 = L"TouchpadTemporalDeadzoneSec";
  LODWORD(v54) = MPCConstantManager::GetConstant<float>((__int64)v35, v10, &v53);
  v40 = MPCConstantManager::GetInstance(v37, v36, v38, v39);
  *((_QWORD *)&v53 + 1) = 20LL;
  *(_QWORD *)&v53 = L"TouchpadXYDeadzone1M";
  LODWORD(v55) = MPCConstantManager::GetConstant<float>((__int64)v40, v10, &v53);
  v41 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v56, (float *)&v55, (float *)&v54);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(this + 4128, v41);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v56);
  v46 = MPCConstantManager::GetInstance(v43, v42, v44, v45);
  *((_QWORD *)&v53 + 1) = 26LL;
  *(_QWORD *)&v53 = L"TriggerTemporalDeadzoneSec";
  LODWORD(v54) = MPCConstantManager::GetConstant<float>((__int64)v46, v10, &v53);
  v51 = MPCConstantManager::GetInstance(v48, v47, v49, v50);
  *((_QWORD *)&v53 + 1) = 19LL;
  *(_QWORD *)&v53 = L"TriggerXYDeadzone1M";
  LODWORD(v55) = MPCConstantManager::GetConstant<float>((__int64)v51, v10, &v53);
  v52 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v56, (float *)&v55, (float *)&v54);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(this + 4136, v52);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v56);
  *(_BYTE *)(this + 3547) = 1;
}
