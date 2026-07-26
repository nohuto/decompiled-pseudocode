/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400656A0
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140065270 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1400658A0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140065B40 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x140065B70 (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14007A3D0 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x140095F40 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14016D440 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v3; // r14
  unsigned int v5; // ebp
  KIRQL v6; // al
  KIRQL v7; // di
  KIRQL v8; // al
  int v9; // eax
  char v10; // r14

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !ndisAoAcIsD0Required(AoAc) && !*((_DWORD *)AoAc + 94) )
  {
    *((_DWORD *)AoAc + 94) = 1;
    KeClearEvent((PRKEVENT)((char *)AoAc + 392));
    KeClearEvent((PRKEVENT)((char *)AoAc + 416));
    ndisCloseTimeInterval((unsigned __int64 *)AoAc + 104, (unsigned __int64 *)AoAc + 102);
    if ( (*((_DWORD *)AoAc + 97) & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++*((_DWORD *)AoAc + 213);
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    v5 = 0;
    *((_DWORD *)AoAc + 97) = 0;
    *((_DWORD *)AoAc + 271) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
    if ( a1->SelectiveSuspend
      && (ndisSelectiveSuspendStop(a1, 7LL), a1->SelectiveSuspend)
      && (a1->PnPFlags & 0x60) == 0x60
      && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
      *((_BYTE *)AoAc + 384) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
      v9 = ndisSubmitIdleRequest(a1, 1u);
      v10 = v9;
      if ( v9 == 259 )
        goto LABEL_11;
      NdisUnexpectedAoAcError(a1, 3u, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x1Cu,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          v10,
          a1);
      v5 = -1073741823;
    }
    else
    {
      v5 = ndisRequestNicQuiet(a1, 0);
      if ( !v5 )
      {
LABEL_11:
        KeSetEvent((PRKEVENT)((char *)AoAc + 416), 0, 0);
        return v5;
      }
    }
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    *((_DWORD *)AoAc + 94) = 4;
    v7 = v6;
    KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
    goto LABEL_11;
  }
  if ( (unsigned int)(*((_DWORD *)AoAc + 94) - 1) <= 1 )
    ndisCloseTimeInterval((unsigned __int64 *)AoAc + 105, (unsigned __int64 *)AoAc + 103);
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  return 0LL;
}
