/*
 * XREFs of InitializeInputComponents @ 0x1C00821D8
 * Callers:
 *     InputInitialize @ 0x1C00814D4 (InputInitialize.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x1C00813F0 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x1C008299C (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0082A20 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x1C0082A70 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x1C0082AD0 (-Initialize@CInputGlobals@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0082C00 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C0082D54 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0082EA4 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1C0083630 (RegisterCoreMsgProviderPreferences.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C00B72C0 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B75D0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C4124 (-GetInstance@CContentRects@@CAAEAV1@XZ.c)
 *     Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsage @ 0x1C00D54E4 (Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E7A84 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

__int64 __fastcall InitializeInputComponents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rdi
  int v18; // eax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  NSInstrumentation::CLeakTrackingAllocator *v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int *v24; // rdi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  CInputSystemMetrics *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax
  __int64 v33; // rax
  unsigned __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v40; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+B0h] [rbp-50h]
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v49[20]; // [rsp+160h] [rbp+60h] BYREF
  PVOID v50[26]; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v51; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v52; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int v53; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned __int64 v54; // [rsp+2F8h] [rbp+1F8h] BYREF

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16048) )
  {
    v51 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 451LL);
  }
  v7 = gpLeakTrackingAllocator;
  v51 = 1883524675;
  v8 = 872LL;
  v37 = 260LL;
  v42 = 872LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v9 != 1 )
    {
      if ( v9 != 2 )
        goto LABEL_23;
      v54 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70444E43u, &v54) )
      {
        v40 = &v37;
        v41 = &v51;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v7,
                                                                                           (__int64)&v40,
                                                                                           &v42);
        goto LABEL_18;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         888LL,
                                                                                         1883524675LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_23;
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v7,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v54,
                                BackTrace) )
        {
LABEL_21:
          memset((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 0, 0x368uLL);
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = 0LL;
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = 0LL;
          memset(
            (void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32),
            0,
            0x348uLL);
          goto LABEL_24;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v7,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v54,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_18;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_23;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70444E43u) )
      goto LABEL_23;
    Pool2 = (_QWORD *)ExAllocatePool2(v37 & 0xFFFFFFFFFFFFFFFDuLL, 888LL, v51);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
          *Pool2 = 1883524675LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v7 + 1),
        (const void *)0x70444E43);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       872LL,
                                                                                       1883524675LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
  }
LABEL_18:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_21;
LABEL_23:
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_24:
  *(_QWORD *)(SGDGetUserSessionState(v8, v4, v5, v6) + 16048) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 16048) )
  {
    InputExtensibilityCallout::UnInitialize();
LABEL_79:
    v16 = -1073741801;
    goto LABEL_80;
  }
  v16 = CActivationObjectManager::Initialize();
  if ( v16 >= 0 )
  {
    v16 = CInputGlobals::Initialize();
    if ( v16 >= 0 )
    {
      v16 = CCursorClip::Initialize();
      if ( v16 >= 0 )
      {
        v16 = CMasterInputThread::Initialize();
        if ( v16 >= 0 )
        {
          if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
          {
            v52 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 273LL);
          }
          v17 = gpLeakTrackingAllocator;
          v52 = 1884574539;
          v38 = 260LL;
          v43 = 144LL;
          v18 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( *(_DWORD *)gpLeakTrackingAllocator )
          {
            if ( v18 != 1 )
            {
              if ( v18 != 2 )
                goto LABEL_78;
              v35 = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x7054534Bu, &v35) )
              {
                v45[0] = &v38;
                v45[1] = &v52;
                v19 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v17,
                        (__int64)v45,
                        &v43);
                goto LABEL_47;
              }
              v19 = ExAllocatePool2(260LL, 160LL, 1884574539LL);
              if ( !v19 )
                goto LABEL_78;
              _InterlockedIncrement64((volatile signed __int64 *)v17 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(v49);
              if ( (unsigned __int64)(v19 & 0xFFF) + 16 >= 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                        v17,
                                        v19,
                                        v35,
                                        v49) )
                {
LABEL_50:
                  memset((void *)v19, 0, 0x90uLL);
                  *(_QWORD *)(v19 + 24) = 0LL;
                  *(_QWORD *)(v19 + 32) = 0LL;
                  *(_QWORD *)(v19 + 40) = 0LL;
                  *(_QWORD *)(v19 + 48) = 0LL;
                  *(_QWORD *)v19 = &CKernelSensorThread::`vftable';
                  *(_QWORD *)(v19 + 8) = 0LL;
                  *(_QWORD *)(v19 + 16) = 0LL;
                  *(_OWORD *)(v19 + 56) = 0LL;
                  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (PVOID)v19;
                  *(_OWORD *)(v19 + 72) = 0LL;
                  *(_QWORD *)(v19 + 88) = 0LL;
                  *(_QWORD *)(v19 + 96) = 0LL;
                  *(_QWORD *)(v19 + 104) = 0LL;
                  *(_BYTE *)(v19 + 112) = 0;
                  *(_DWORD *)(v19 + 116) = 0;
                  *(_QWORD *)(v19 + 120) = 0LL;
                  *(_DWORD *)(v19 + 128) = 100;
                  *(_DWORD *)(v19 + 132) = 300;
                  *(_BYTE *)(v19 + 136) = 1;
                  v16 = CInputConfig::Initialize();
                  if ( v16 < 0 )
                    goto LABEL_80;
                  v46 = 0LL;
                  v47 = 0;
                  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
                  dword_1C02908A0 = 0;
                  v16 = CFrameIdGenerator::Initialize();
                  if ( v16 < 0 )
                    goto LABEL_80;
                  if ( gpInputSystemMetrics )
                  {
                    v53 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 18LL);
                  }
                  v21 = gpLeakTrackingAllocator;
                  v53 = 1699576147;
                  v39 = 260LL;
                  v44 = 12LL;
                  v22 = *(_DWORD *)gpLeakTrackingAllocator;
                  if ( *(_DWORD *)gpLeakTrackingAllocator )
                  {
                    if ( v22 != 1 )
                    {
                      if ( v22 != 2 )
                        goto LABEL_76;
                      v36 = 0LL;
                      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                              gpLeakTrackingAllocator,
                              0x654D7953u,
                              &v36) )
                      {
                        v40 = &v39;
                        v41 = &v53;
                        v24 = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                (__int64)v21,
                                                (__int64)&v40,
                                                &v44);
                        goto LABEL_69;
                      }
                      v24 = (unsigned int *)ExAllocatePool2(260LL, 28LL, 1699576147LL);
                      if ( !v24 )
                        goto LABEL_76;
                      _InterlockedIncrement64((volatile signed __int64 *)v21 + 16);
                      NSInstrumentation::CBackTrace::CBackTrace(v50);
                      if ( (unsigned __int64)((unsigned __int16)v24 & 0xFFF) + 16 >= 0x1000 )
                      {
                        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                                v21,
                                                v24,
                                                v36,
                                                v50) )
                        {
LABEL_72:
                          gpInputSystemMetrics = v24;
                          *(_QWORD *)v24 = 0LL;
                          *(_QWORD *)(v24 + 1) = 0LL;
                          v24[2] = 0;
                          *v24 = 0;
                          CInputSystemMetrics::WriteSystemMetricsKey(v23, 0LL, 0LL);
                          CInputSystemMetrics::WriteSystemMetricsKey(v26, 0LL, 1LL);
                          CInputSystemMetrics::WritePointerDevicePresenceKey(v27, v24[1]);
                          if ( isChildPartition() )
                          {
                            Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
                            *((_QWORD *)Instance + 1) = Instance;
                            *(_QWORD *)Instance = Instance;
                          }
                          InputObjectMap::s_hashTable = 0LL;
                          Buffer = 0LL;
                          InputObjectMap::s_hashTableLock = 0LL;
                          v33 = SGDGetUserSessionState(v29, v28, v30, v31);
                          v16 = 0;
                          *(_QWORD *)(v33 + 3600) = 0LL;
                          *(_QWORD *)(v33 + 3608) = 0LL;
                          goto LABEL_80;
                        }
                      }
                      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                                   v21,
                                                   v24,
                                                   v36,
                                                   v50) )
                      {
                        v24 += 4;
                        goto LABEL_69;
                      }
                      _InterlockedIncrement64((volatile signed __int64 *)v21 + 17);
                      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v24);
                      goto LABEL_76;
                    }
                    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                            gpLeakTrackingAllocator,
                            0x654D7953u) )
                      goto LABEL_76;
                    v25 = (unsigned int *)ExAllocatePool2(v39 & 0xFFFFFFFFFFFFFFFDuLL, 28LL, v53);
                    v24 = v25;
                    if ( !v25
                      || (_InterlockedIncrement64((volatile signed __int64 *)v21 + 14),
                          *(_QWORD *)v25 = 1699576147LL,
                          v24 = v25 + 4,
                          v25 == (unsigned int *)-16LL) )
                    {
                      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                        *((NSInstrumentation::CPointerHashTable **)v21 + 1),
                        (const void *)0x654D7953);
                    }
                  }
                  else
                  {
                    v24 = (unsigned int *)ExAllocatePool2(260LL, 12LL, 1699576147LL);
                    if ( v24 )
                      _InterlockedIncrement64((volatile signed __int64 *)v21 + 14);
                  }
LABEL_69:
                  if ( v24 )
                    goto LABEL_72;
LABEL_76:
                  gpInputSystemMetrics = 0LL;
                  goto LABEL_79;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                           v17,
                                           v19,
                                           v35,
                                           v49) )
              {
                v19 += 16LL;
                goto LABEL_47;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v17 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v19);
              goto LABEL_78;
            }
            if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                    gpLeakTrackingAllocator,
                    0x7054534Bu) )
              goto LABEL_78;
            v20 = (_QWORD *)ExAllocatePool2(v38 & 0xFFFFFFFFFFFFFFFDuLL, 160LL, v52);
            v19 = (__int64)v20;
            if ( !v20
              || (_InterlockedIncrement64((volatile signed __int64 *)v17 + 14),
                  *v20 = 1884574539LL,
                  v19 = (__int64)(v20 + 2),
                  v20 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v17 + 1),
                (const void *)0x7054534B);
            }
          }
          else
          {
            v19 = ExAllocatePool2(260LL, 144LL, 1884574539LL);
            if ( v19 )
              _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
          }
LABEL_47:
          if ( v19 )
            goto LABEL_50;
LABEL_78:
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          goto LABEL_79;
        }
      }
    }
  }
LABEL_80:
  CDesktopInputSink::GetInstance();
  CContentRects::GetInstance();
  RegisterCoreMsgProviderPreferences(
    20,
    1,
    2,
    0,
    (__int64)lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_);
  if ( (unsigned int)Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsage() )
    RegisterCoreMsgProviderPreferences(
      2,
      1,
      2,
      0,
      (__int64)lambda_82048e68f5598f867a09767a358fae1b_::_lambda_invoker_cdecl_);
  return (unsigned int)v16;
}
