/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x1407596E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorAllowModernStandbyPromotion @ 0x1407590F0 (PopPowerAggregatorAllowModernStandbyPromotion.c)
 *     PopCurrentPowerState @ 0x140A2C1F8 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  bool v3; // cc
  unsigned int v6; // edi
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 16) <= 2u;
  v9 = 0LL;
  if ( v3 )
  {
    *(_DWORD *)a2 = 1;
    if ( a3 == 2 )
      *(_BYTE *)(a2 + 24) = 1;
    v6 = 0;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      *(_BYTE *)(a2 + 25) = *(_BYTE *)(a1 + 41);
    }
    else if ( PopPowerAggregatorOneWayEntry )
    {
      *(_BYTE *)(a2 + 25) = 1;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 53) <= 1 )
      *(_BYTE *)(a2 + 27) = 1;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      PopCurrentPowerState(&v9);
      if ( !(_BYTE)v9 && (unsigned int)((DWORD2(v9) >> 1) + 100 * HIDWORD(v9)) / DWORD2(v9) <= 0x14 )
        *(_BYTE *)(a2 + 27) = 1;
    }
    if ( PopEnforceAusterityMode )
      *(_BYTE *)(a2 + 27) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      if ( *(_BYTE *)(a1 + 43) )
      {
        v7 = *(_DWORD *)(a2 + 8);
        if ( v7 != 43 && v7 != 55 )
          *(_BYTE *)(a2 + 27) = 1;
      }
    }
    if ( !PopPowerAggregatorAllowModernStandbyPromotion(a1, a2) )
    {
      *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 48);
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v6;
}
