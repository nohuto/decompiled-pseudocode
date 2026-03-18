/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x14019AEA0
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  PERESOURCE *v9; // rcx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  unsigned int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-30h]

  v5 = a2;
  IsEnabledDeviceUsageNoInline = Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline();
  v9 = *(PERESOURCE **)(a1 + 16);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( DXGADAPTER::IsCoreResourceExclusiveOwner(v9)
      || ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)a1)
      && *(struct _KTHREAD **)(4024 * v5 + *(_QWORD *)(a1 + 128) + 1136) == KeGetCurrentThread() )
    {
      goto LABEL_9;
    }
    WdLogSingleEntry0(1LL);
    v10 = 6610LL;
    v11 = L"IsCoreResourceExclusiveOwner() || (IsCoreResourceSharedOwner() && m_pDisplaySource[VidPnSourceId].m_CachedMode"
           "ListLock.IsExclusiveOwner())";
  }
  else
  {
    if ( DXGADAPTER::IsCoreResourceExclusiveOwner(v9) )
      goto LABEL_9;
    WdLogSingleEntry0(1LL);
    v10 = 6614LL;
    v11 = L"IsCoreResourceExclusiveOwner()";
  }
  WdLogGlobalForLineNumber = v10;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, v11, v10, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
  v12 = *(_DWORD *)(a1 + 96);
  if ( (unsigned int)v5 < v12 )
  {
    v14 = 4024 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + v14 + 1116) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + v14 + 1120) = a4;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, v12);
    v15 = *(unsigned int *)(a1 + 96);
    WdLogGlobalForLineNumber = 6620;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v5,
      v15,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
