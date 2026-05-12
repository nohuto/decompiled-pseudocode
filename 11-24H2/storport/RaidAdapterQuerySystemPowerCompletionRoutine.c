/*
 * XREFs of RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1400348E0
 * Callers:
 *     <none>
 * Callees:
 *     GetRaidAdapter @ 0x140034AAC (GetRaidAdapter.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterQuerySystemPowerCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 RaidAdapter; // rax
  __int64 v5; // rsi
  NTSTATUS v6; // ebx

  RaidAdapter = GetRaidAdapter(a1, a2, a3);
  v5 = RaidAdapter;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      35LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      RaidAdapter,
      a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  if ( v6 < 0
    || (v6 = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(v5 + 8),
               3u,
               DevicePowerStateTable[*(int *)(*(_QWORD *)(a2 + 184) + 24LL)],
               (PREQUEST_POWER_COMPLETE)RaidAdapterQueryDevicePowerCompletionRoutine,
               (PVOID)a2,
               0LL),
        v6 < 0) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 336));
  }
  else
  {
    v6 = -1073741802;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 36LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, v5, a2, v6);
  }
  return (unsigned int)v6;
}
