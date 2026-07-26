/*
 * XREFs of ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140017F50
 * Callers:
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015DED0 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1400173B0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140064460 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1400658C0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14009B078 (-ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisAoAcStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum CallRunMode a3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v7; // bp
  int v8; // edx
  int v9; // eax
  char v10; // bl
  int v11; // edx

  AoAc = a1->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( a2 == 13 )
  {
    ++*((_DWORD *)AoAc + 15);
    *((_DWORD *)AoAc + 95) |= 0x1000u;
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        *((_DWORD *)AoAc + 95) |= 1u;
        break;
      case 2:
        *((_DWORD *)AoAc + 95) |= 2u;
        ndisAoAcCleanup(AoAc);
        break;
      case 3:
        *((_DWORD *)AoAc + 95) |= 4u;
        *((_BYTE *)AoAc + 387) = 1;
        ndisAoAcCleanup(AoAc);
        break;
      case 4:
        *((_DWORD *)AoAc + 95) |= 8u;
        break;
      case 5:
        *((_DWORD *)AoAc + 95) |= 0x10u;
        ndisAoAcCleanup(AoAc);
        break;
      case 6:
        *((_DWORD *)AoAc + 95) |= 0x20u;
        break;
      case 8:
        ++*((_DWORD *)AoAc + 14);
        *((_DWORD *)AoAc + 95) |= 0x80u;
        break;
      case 11:
        *((_DWORD *)AoAc + 95) |= 0x400u;
        break;
      case 12:
        *((_DWORD *)AoAc + 95) |= 0x800u;
        break;
      default:
        break;
    }
  }
  if ( *((_DWORD *)AoAc + 16) )
  {
    *((_DWORD *)AoAc + 16) = 0;
    ndisAoAcActiveRefSubtract(AoAc, 0LL, 1LL);
    if ( KeCancelTimer((PKTIMER)((char *)AoAc + 72)) )
      ndisDereferenceMiniport(a1, 2u);
  }
  if ( *((_DWORD *)AoAc + 94) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        14,
        41,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        (char)a1);
    }
    ndisCancelWaitWake(a1);
    v9 = ndisRequestNicActive(a1, a3);
    v10 = v9;
    if ( v9 && v9 != 259 )
    {
      ndisAoAcCompleteQueuedIrps(a1, v9);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          14,
          42,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          v10,
          (char)a1);
      }
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
  }
}
