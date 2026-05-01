/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180006D70
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180007220 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180007450 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007650 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180007750 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x180018038 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  rsize_t v4; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  void *v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  void *v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rdx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **Source; // [rsp+20h] [rbp-18h] BYREF
  void (*v29)(void *); // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  *(_QWORD *)this = 0LL;
  if ( a3 != (void (*)(void *))-1LL )
  {
    if ( !wil::details::g_featureStateManager )
      return;
    AcquireSRWLockExclusive(&stru_18002F150);
    if ( !qword_18002F1C0 )
    {
      qword_18002F1C0 = 0LL;
      if ( (unsigned int)wil_details_RtlRegisterFeatureConfigurationChangeNotification(
                           _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
                           &wil::details::g_featureStateManager,
                           v8,
                           &qword_18002F1C0) )
        goto LABEL_16;
    }
    *(_QWORD *)this = 0LL;
    v9 = 0LL;
    v10 = (void *)*(&xmmword_18002F1A0 + 1);
    v11 = 0LL;
    v12 = xmmword_18002F1A0;
    while ( v9 < (*(&xmmword_18002F1A0 + 1) - xmmword_18002F1A0) >> 4 )
    {
      v24 = v9 + 1;
      if ( !*(_QWORD *)(v11 + xmmword_18002F1A0) )
      {
        v26 = 2 * v9;
        *(_QWORD *)(xmmword_18002F1A0 + 8 * v26) = a2;
        *(_QWORD *)(v12 + 8 * v26 + 8) = a3;
        *(_QWORD *)this = v24;
        goto LABEL_16;
      }
      ++v9;
      v11 += 16LL;
    }
    v13 = xmmword_18002F1B0;
    Source = a2;
    v14 = xmmword_18002F1B0 - xmmword_18002F1A0;
    v29 = a3;
    if ( (unsigned __int64)(*(&xmmword_18002F1A0 + 1) - xmmword_18002F1A0 + 16LL) >= (_QWORD)xmmword_18002F1B0
                                                                                   - xmmword_18002F1A0 )
    {
      v15 = 16LL;
      if ( (unsigned __int64)(2 * v14) > 0x10 )
        v15 = 2 * v14;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_18002F1A0, v15) )
        goto LABEL_16;
      v13 = xmmword_18002F1B0;
      v10 = (void *)*(&xmmword_18002F1A0 + 1);
    }
    if ( (unsigned __int64)v10 < v13 )
      v4 = v13 - (_QWORD)v10;
    memcpy_s(v10, v4, &Source, 0x10uLL);
    *(&xmmword_18002F1A0 + 1) += 16LL;
    v16 = (*(&xmmword_18002F1A0 + 1) - xmmword_18002F1A0) >> 4;
    goto LABEL_15;
  }
  if ( wil::details::g_featureStateManager
    && !wil::ProcessShutdownInProgress(this)
    && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    AcquireSRWLockExclusive(&stru_18002F150);
    wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
    *(_QWORD *)this = 0LL;
    v17 = 0LL;
    v18 = (void *)*(&xmmword_18002F1F0 + 1);
    v19 = 0LL;
    v20 = xmmword_18002F1F0;
    while ( v17 < (*(&xmmword_18002F1F0 + 1) - xmmword_18002F1F0) >> 4 )
    {
      v25 = v17 + 1;
      if ( !*(_QWORD *)(v19 + xmmword_18002F1F0) )
      {
        v27 = 2 * v17;
        *(_QWORD *)(xmmword_18002F1F0 + 8 * v27) = a2;
        *(_QWORD *)(v20 + 8 * v27 + 8) = 0LL;
        *(_QWORD *)this = v25;
        goto LABEL_31;
      }
      ++v17;
      v19 += 16LL;
    }
    v21 = xmmword_18002F200;
    Source = a2;
    v22 = xmmword_18002F200 - xmmword_18002F1F0;
    v29 = 0LL;
    if ( (unsigned __int64)(*(&xmmword_18002F1F0 + 1) - xmmword_18002F1F0 + 16LL) >= (_QWORD)xmmword_18002F200
                                                                                   - xmmword_18002F1F0 )
    {
      v23 = 16LL;
      if ( (unsigned __int64)(2 * v22) > 0x10 )
        v23 = 2 * v22;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_18002F1F0, v23) )
        goto LABEL_31;
      v21 = xmmword_18002F200;
      v18 = (void *)*(&xmmword_18002F1F0 + 1);
    }
    if ( (unsigned __int64)v18 < v21 )
      v4 = v21 - (_QWORD)v18;
    memcpy_s(v18, v4, &Source, 0x10uLL);
    *(&xmmword_18002F1F0 + 1) += 16LL;
    *(_QWORD *)this = (*(&xmmword_18002F1F0 + 1) - xmmword_18002F1F0) >> 4;
LABEL_31:
    if ( !*(_QWORD *)this )
      goto LABEL_16;
    v16 = *(_QWORD *)this | 0x80000000LL;
LABEL_15:
    *(_QWORD *)this = v16;
LABEL_16:
    ReleaseSRWLockExclusive(&stru_18002F150);
  }
}
