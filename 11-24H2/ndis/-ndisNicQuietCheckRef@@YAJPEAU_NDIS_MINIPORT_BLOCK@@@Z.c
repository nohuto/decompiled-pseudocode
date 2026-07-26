/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770
 * Callers:
 *     ndisDispatchRequest @ 0x14002CA40 (ndisDispatchRequest.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14003B410 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003A730 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x14004A750 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005E3E0 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1400607C0 (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140069790 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008ACE0 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14008F740 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140161DA0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // bl
  unsigned int v4; // ebp
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v6; // r13
  char v7; // r14
  unsigned int v8; // r12d
  KIRQL v9; // r15
  int v10; // eax
  KIRQL v11; // dl
  unsigned int v12; // r12d
  KIRQL v13; // al
  KIRQL v14; // al
  int v15; // eax
  char v16; // bl
  KIRQL v17; // al
  KIRQL v18; // bl
  char v20; // [rsp+70h] [rbp+8h]
  char v21; // [rsp+70h] [rbp+8h]

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_DWORD *)AoAc + 13) && !*((_DWORD *)AoAc + 95) && !*((_DWORD *)AoAc + 94) )
  {
    *((_DWORD *)AoAc + 94) = 1;
    KeClearEvent((PRKEVENT)((char *)AoAc + 392));
    KeClearEvent((PRKEVENT)((char *)AoAc + 416));
    v4 = 0;
    if ( *((_QWORD *)AoAc + 104) )
    {
      *((_QWORD *)AoAc + 102) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 104);
      *((_QWORD *)AoAc + 104) = 0LL;
    }
    if ( (*((_DWORD *)AoAc + 97) & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++*((_DWORD *)AoAc + 213);
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    *((_DWORD *)AoAc + 97) = 0;
    *((_DWORD *)AoAc + 271) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
    if ( (unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !a1->SelectiveSuspend )
        goto LABEL_54;
      if ( (a1->Flags & 0x80u) != 0 )
      {
        ndisSelectiveSuspendStopWdf(a1, 7LL);
        goto LABEL_54;
      }
      SelectiveSuspend = a1->SelectiveSuspend;
      v6 = 0;
      v7 = 0;
      v12 = a1->Flags & 0x80;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      v21 = ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v12 != 0) == 0;
      if ( v12
        && !*((_DWORD *)SelectiveSuspend + 128)
        && !*((_DWORD *)SelectiveSuspend + 129)
        && !*((_DWORD *)SelectiveSuspend + 132)
        && !*((_DWORD *)SelectiveSuspend + 133)
        && !*((_DWORD *)SelectiveSuspend + 130)
        && !*((_DWORD *)SelectiveSuspend + 131)
        && !*((_DWORD *)SelectiveSuspend + 144)
        && !*((_DWORD *)SelectiveSuspend + 127) )
      {
        v7 = 1;
        KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x22u,
          (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
          (char)a1,
          7);
      *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v21, 7u, 0);
      if ( v12 )
      {
LABEL_24:
        if ( v7 || !KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
          if ( v7 )
            ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
          else
            KeWaitForSingleObject((char *)SelectiveSuspend + 272, Executive, 0, 0, 0LL);
LABEL_54:
          if ( a1->SelectiveSuspend
            && (a1->PnPFlags & 0x60) == 0x60
            && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
          {
            v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
            *((_BYTE *)AoAc + 384) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v14);
            v15 = ndisSubmitIdleRequest(a1, 1u);
            v16 = v15;
            if ( v15 != 259 )
            {
              NdisUnexpectedAoAcError(a1, 3u, 0);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Lq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0xEu,
                  0x1Cu,
                  (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
                  v16,
                  a1);
              v4 = -1073741823;
              goto LABEL_62;
            }
          }
          else
          {
            v4 = ndisRequestNicQuiet(a1, 0);
            if ( v4 )
            {
LABEL_62:
              v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
              *((_DWORD *)AoAc + 94) = 4;
              v18 = v17;
              KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
              KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v18);
            }
          }
          KeSetEvent((PRKEVENT)((char *)AoAc + 416), 0, 0);
          return v4;
        }
        goto LABEL_32;
      }
    }
    else
    {
      SelectiveSuspend = a1->SelectiveSuspend;
      if ( !SelectiveSuspend )
        goto LABEL_54;
      v6 = 0;
      v7 = 0;
      v8 = a1->Flags & 0x80;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
      v20 = ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v8 != 0) == 0;
      if ( v8
        && !*((_DWORD *)SelectiveSuspend + 128)
        && !*((_DWORD *)SelectiveSuspend + 129)
        && !*((_DWORD *)SelectiveSuspend + 132)
        && !*((_DWORD *)SelectiveSuspend + 133)
        && !*((_DWORD *)SelectiveSuspend + 130)
        && !*((_DWORD *)SelectiveSuspend + 131)
        && !*((_DWORD *)SelectiveSuspend + 144)
        && !*((_DWORD *)SelectiveSuspend + 127) )
      {
        v7 = 1;
        KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x22u,
          (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
          (char)a1,
          7);
      *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v20, 7u, 0);
      if ( v8 )
        goto LABEL_24;
    }
    v10 = *((_DWORD *)SelectiveSuspend + 126);
    if ( (v10 & 1) != 0 )
    {
      KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
      *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
      v6 = 1;
      v10 = *((_DWORD *)SelectiveSuspend + 126);
    }
    if ( (v10 & 0x200) == 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
      ndisCancelWaitWake(a1);
      if ( v6 )
      {
        KeFlushQueuedDpcs();
        ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
      }
      ndisCancelIdleRequestSync(a1, 7, 0, 1u);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
      v11 = v13;
      goto LABEL_53;
    }
LABEL_32:
    v11 = v9;
LABEL_53:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v11);
    goto LABEL_54;
  }
  if ( (unsigned int)(*((_DWORD *)AoAc + 94) - 1) <= 1 && *((_QWORD *)AoAc + 105) )
  {
    *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
    *((_QWORD *)AoAc + 105) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  return 0LL;
}
