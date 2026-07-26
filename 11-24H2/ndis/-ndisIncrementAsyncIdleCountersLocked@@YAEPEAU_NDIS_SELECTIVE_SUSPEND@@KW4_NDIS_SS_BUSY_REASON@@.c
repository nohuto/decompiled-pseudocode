/*
 * XREFs of ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140037E50
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline @ 0x140092E5C (Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ndisIncrementAsyncIdleCountersLocked(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  switch ( a3 )
  {
    case '"':
      if ( !(unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_15;
      *(_DWORD *)(a1 + 512) |= 2u;
      goto LABEL_14;
    case '#':
      if ( !(unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_15;
      *(_DWORD *)(a1 + 512) |= 4u;
LABEL_14:
      v8 = *(_QWORD *)(a1 + 600);
      *(_DWORD *)(a1 + 144) = 0;
      *(_BYTE *)(v8 + 20) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 44LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 68LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 92LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 116LL) = 0;
      result = 1LL;
      break;
    case '1':
      *(_DWORD *)(a1 + 512) |= 0x10u;
      return 1LL;
    case '2':
      v5 = *(_QWORD *)(a1 + 600);
      *(_DWORD *)(a1 + 144) = 0;
      *(_BYTE *)(v5 + 20) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 44LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 68LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 92LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 116LL) = 0;
      result = 1LL;
      *(_DWORD *)(a1 + 528) += a2;
      return result;
    case '3':
      if ( !*(_DWORD *)(a1 + 528) )
        goto LABEL_15;
      *(_DWORD *)(a1 + 532) += a2;
      result = 1LL;
      break;
    case '4':
      v6 = *(_QWORD *)(a1 + 600);
      *(_DWORD *)(a1 + 144) = 0;
      *(_BYTE *)(v6 + 20) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 44LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 68LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 92LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 116LL) = 0;
      result = 1LL;
      *(_DWORD *)(a1 + 520) += a2;
      return result;
    case '5':
      if ( !*(_DWORD *)(a1 + 520) )
        goto LABEL_15;
      *(_DWORD *)(a1 + 524) += a2;
      result = 1LL;
      break;
    case '6':
      v7 = *(_QWORD *)(a1 + 600);
      *(_DWORD *)(a1 + 144) = 0;
      *(_BYTE *)(v7 + 20) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 44LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 68LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 92LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 600) + 116LL) = 0;
      result = 1LL;
      *(_DWORD *)(a1 + 576) += a2;
      return result;
    default:
LABEL_15:
      result = 0LL;
      break;
  }
  return result;
}
