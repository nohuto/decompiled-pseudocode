/*
 * XREFs of RaAdapterStartPowerIo @ 0x1400104F4
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x14001018C (RaidPowerPassToMiniPort.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaAdapterStartPowerIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v9; // r15
  char v10; // al
  int v11; // eax
  unsigned int v12; // esi

  v5 = *(_QWORD *)(a4 + 16);
  v6 = *(_QWORD *)(a1 + 64);
  v9 = 0LL;
  RaidZeroXrb(v5, a2, 0LL, 0LL);
  v10 = *(_BYTE *)(v5 + 16);
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 160) = a2;
  *(_BYTE *)(v5 + 16) = v10 & 0xE3 | 4;
  *(_QWORD *)(v5 + 168) = a3;
  *(_QWORD *)(v5 + 216) = v6;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v9 = a3;
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 96) = v5;
    *(_QWORD *)(a3 + 80) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 48) = v5;
  }
  RaSrbSetMiniportContext(v6, a3);
  *(_QWORD *)(v5 + 656) = a5;
  if ( *(_BYTE *)(v6 + 4370) )
    v11 = RaidAdapterRaiseIrqlAndExecuteXrb(v6, v5);
  else
    v11 = RaidAdapterPostScatterGatherExecute(v6, v5);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
    {
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(v5 + 184);
    }
    else
    {
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(v5 + 176);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(v5 + 184);
    }
    RaidXrbDeallocateResources(v5, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        10LL,
        &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
        v6,
        a2,
        *(_DWORD *)(a2 + 48));
    }
  }
  return v12;
}
