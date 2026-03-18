/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401AB7D0 (DxgkAdjustFullscreenGamma.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402D751C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140308290 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x14030F03C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x140313A24 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     CheckGivenTargetIsPartOfCloneGroup @ 0x140315358 (CheckGivenTargetIsPartOfCloneGroup.c)
 *     DxgkIsSourceInHardwareClone @ 0x1403D76D0 (DxgkIsSourceInHardwareClone.c)
 *     DxgkSetGammaRamp @ 0x1403FCA30 (DxgkSetGammaRamp.c)
 *     DxgkDispMgrSourceOperation @ 0x140414C50 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *const a4)
{
  __int64 v4; // r15
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r13d
  __int64 v20; // r8
  _QWORD *v21; // rcx
  int v22; // eax
  __int64 result; // rax
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 9170;
    return result;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 9184;
    return 3223191554LL;
  }
  v7 = a1[390];
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 9198;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 104);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9212;
    return result;
  }
  v9 = v8 + 40;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 40));
  v14 = *(_QWORD *)(v8 + 128);
  if ( !v14 )
  {
    v36 = 0LL;
LABEL_29:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = a1;
    v26 = -1071774884;
    WdLogGlobalForLineNumber = 9232;
LABEL_30:
    DXGFASTMUTEX::Release((struct _KTHREAD **)v9);
    return v26;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
  v15 = *(_QWORD *)(v8 + 128);
  v36 = v15;
  if ( !v15 )
    goto LABEL_29;
  v16 = v15 + 96;
  v17 = v15 + 120;
  v18 = *(_QWORD *)(v15 + 120);
  v19 = -1;
  v20 = 0LL;
  v21 = 0LL;
  if ( v18 != v15 + 120 )
    v21 = (_QWORD *)(v18 - 8);
  while ( v21 )
  {
    if ( *(_DWORD *)(v21[11] + 24LL) == (_DWORD)v4 )
    {
      if ( v20 == a3 )
      {
        v19 = *(_DWORD *)(v21[12] + 24LL);
        goto LABEL_13;
      }
      ++v20;
    }
    v25 = v21[1];
    v21 = (_QWORD *)(v25 - 8);
    if ( v25 == v17 )
      v21 = 0LL;
  }
  if ( v18 == v17 || v18 == 8 )
  {
    v27 = v4;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v18, v20, v17) + 24) = v16;
    WdLogGlobalForLineNumber = 195;
LABEL_39:
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
    v33[4] = v27;
    v26 = -1071774919;
    v33[6] = -1071774919LL;
    v33[3] = a3;
    v33[5] = v16;
    WdLogGlobalForLineNumber = 9251;
    auto_rc<DMMVIDPN const>::reset(&v36, 0LL);
    goto LABEL_30;
  }
  v27 = v4;
  if ( !v20 )
  {
    v34 = WdLogNewEntry5_WdTrace(0LL, v18, 0LL, v17);
    *(_QWORD *)(v34 + 24) = v4;
    *(_QWORD *)(v34 + 32) = v16;
    WdLogGlobalForLineNumber = 187;
    goto LABEL_39;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdTrace(0LL, v18, v20, v17);
  v28[3] = v16;
  v28[4] = v4;
  v28[5] = a3;
  WdLogGlobalForLineNumber = 179;
LABEL_13:
  v22 = _InterlockedDecrement((volatile signed __int32 *)(v15 + 32));
  if ( v22 )
  {
    if ( v22 < 0 )
    {
      v35 = v22;
      WdLogSingleEntry1(2LL, v22);
      WdLogGlobalForLineNumber = 77;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Client is trying to release a destroyed object (ref count = %I64d)!",
        v35,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else if ( v15 != -24 )
  {
    (**(void (__fastcall ***)(__int64, __int64))(v15 + 24))(v15 + 24, 1LL);
  }
  v36 = 0LL;
  *a4 = v19;
  if ( *(struct _KTHREAD **)(v9 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v9, 0LL, 0LL);
    WdLogGlobalForLineNumber = 568;
  }
  if ( *(int *)(v9 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 571;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v9 + 32))-- == 1 )
  {
    *(_QWORD *)(v9 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
