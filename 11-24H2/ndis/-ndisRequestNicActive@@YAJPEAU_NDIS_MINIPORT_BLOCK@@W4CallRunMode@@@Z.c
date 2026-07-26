/*
 * XREFs of ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140039B90
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x14003A580 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x14003ACE0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140039E00 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14003A230 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140069790 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400864C0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008ACE0 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // al
  KIRQL v6; // al
  int v7; // edx
  int v8; // ecx
  KIRQL v9; // si
  _KEVENT *p_PowerD0CompleteEvent; // r15
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // ebx
  KIRQL v16; // al
  KIRQL v17; // si
  __int64 v18; // rcx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_DWORD *)AoAc + 94) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
    return 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
  if ( !a1->SelectiveSuspend || (a1->PnPFlags & 0x60) != 0x60 || (unsigned int)(a1->DeviceCaps.DeviceWake - 2) > 2 )
  {
LABEL_3:
    ndisWaitForKernelObject((char *)AoAc + 392);
    ndisUpdateMiniportCsTrafficStatistics(a1, 2LL);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    v8 = *((_DWORD *)AoAc + 94);
    v9 = v6;
    if ( v8 == 2 )
    {
      if ( !*((_BYTE *)AoAc + 387) )
      {
        ++*((_DWORD *)AoAc + 202);
        p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
        *((_DWORD *)AoAc + 94) = 3;
        v11 = MEMORY[0xFFFFF78000000008];
        v12 = *((_BYTE *)AoAc + 1081) == 0;
        *((_QWORD *)AoAc + 104) = MEMORY[0xFFFFF78000000008];
        if ( v12 )
          v11 = 0LL;
        *((_QWORD *)AoAc + 105) = v11;
        KeClearEvent(&a1->PowerD0CompleteEvent);
        KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
        v13 = ndisRequestDevicePowerD0(a1, NdisMEventD0_NicActive);
        v14 = v13;
        if ( v13 != 259 )
        {
          NdisUnexpectedAoAcError(a1, 1u, v13);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x14u,
              (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
              v14,
              a1);
          return v14;
        }
        goto LABEL_8;
      }
    }
    else
    {
      if ( v8 != 4 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
        p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
        v14 = 259;
LABEL_8:
        if ( a2 == RunSynchronous )
        {
          ndisWaitForKernelObject(p_PowerD0CompleteEvent);
          return 0;
        }
        return v14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          21,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          (char)a1);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
    return (unsigned int)-1073741823;
  }
  ndisWaitForKernelObject((char *)AoAc + 416);
  ndisCancelIdleRequestSync(a1, 7, 0, 0);
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v17 = v16;
  if ( *((_BYTE *)AoAc + 384) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v16);
    goto LABEL_3;
  }
  *((_DWORD *)AoAc + 94) = 0;
  KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
  v18 = MEMORY[0xFFFFF78000000008];
  v12 = *((_BYTE *)AoAc + 1081) == 0;
  *((_QWORD *)AoAc + 104) = MEMORY[0xFFFFF78000000008];
  if ( v12 )
    v18 = 0LL;
  *((_QWORD *)AoAc + 105) = v18;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v17);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop(a1, 7LL);
  return 0LL;
}
