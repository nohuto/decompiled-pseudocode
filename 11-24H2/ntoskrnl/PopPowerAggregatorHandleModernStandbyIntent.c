/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x140757B40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405D4DBC (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorAllowModernStandbyPromotion @ 0x140757550 (PopPowerAggregatorAllowModernStandbyPromotion.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  bool v3; // cc
  unsigned int v6; // esi
  char v7; // bl
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 16) <= 2u;
  v10 = 0LL;
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
      PopCurrentPowerState(&v10);
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant() != 8
        && (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant() != 6 )
      {
        PopAcquireRwLockShared(&PopAdaptiveStandbyLock);
        v7 = qword_140F0719C;
        PopReleaseRwLock(&PopAdaptiveStandbyLock);
        if ( !v7
          && !(_BYTE)v10
          && DWORD2(v10)
          && (unsigned int)((DWORD2(v10) >> 1) + 100 * HIDWORD(v10)) / DWORD2(v10) <= 0x14 )
        {
          *(_BYTE *)(a2 + 27) = 1;
        }
      }
    }
    if ( PopEnforceAusterityMode )
      *(_BYTE *)(a2 + 27) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      if ( *(_BYTE *)(a1 + 43) )
      {
        v8 = *(_DWORD *)(a2 + 8);
        if ( v8 != 43 && v8 != 55 )
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
