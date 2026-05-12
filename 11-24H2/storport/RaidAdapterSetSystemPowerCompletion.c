/*
 * XREFs of RaidAdapterSetSystemPowerCompletion @ 0x140034720
 * Callers:
 *     <none>
 * Callees:
 *     GetRaidAdapter @ 0x140034AAC (GetRaidAdapter.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  __int64 RaidAdapter; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  POWER_STATE v9; // ebx
  REQUEST_POWER_COMPLETE *v10; // r9
  void *Context; // rdx
  NTSTATUS v12; // esi
  bool v13; // cl
  char v14; // r14

  v4 = 1;
  RaidAdapter = GetRaidAdapter(a1, a2, a3);
  v6 = RaidAdapter;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      RaidAdapter,
      a2);
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(int *)(v7 + 24);
  v9.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[v8];
  if ( *(_DWORD *)(v6 + 344) < (int)v8 )
  {
    v4 = 0;
LABEL_7:
    v10 = (REQUEST_POWER_COMPLETE *)RaidAdapterSetDevicePowerCompletionRoutine;
    Context = (void *)a2;
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(v6 + 4960) )
    goto LABEL_7;
  v10 = StorPortAdapterPoFxD0Completion;
  Context = (void *)v6;
LABEL_8:
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v7 + 3) |= 1u;
  v12 = *(_DWORD *)(a2 + 48);
  if ( v12 >= 0 )
  {
    v13 = (_DWORD)v8 != 1 && *(_DWORD *)(v6 + 344) < (int)v8;
    v14 = 2;
    *(_DWORD *)(v6 + 352) = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    *(_BYTE *)(v6 + 356) = v13;
    *(_DWORD *)(v6 + 344) = v8;
    v12 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v6 + 8), 2u, v9, v10, Context, 0LL);
    if ( v12 == 259 )
    {
      if ( v9.SystemState != PowerSystemWorking )
        v14 = 4;
      *(_BYTE *)(v6 + 107) |= v14;
      v12 = 0;
    }
  }
  if ( v4 || v12 < 0 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 336));
  else
    v12 = -1073741802;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 44LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, v6, a2, v12);
  }
  return (unsigned int)v12;
}
