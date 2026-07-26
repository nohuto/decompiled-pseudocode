/*
 * XREFs of ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005E3E0
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14005E2A0 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14003AA30 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005E640 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005E750 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005E7B0 (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  int v4; // esi
  __int64 result; // rax
  KIRQL v6; // r14
  int v7; // r12d
  unsigned int v8; // esi
  _UNKNOWN **v9; // rcx
  _UNKNOWN **v10; // rcx
  int v11; // ebx
  KIRQL v12; // al
  int v13; // ecx
  KIRQL v14; // di
  struct _GUID *v15; // [rsp+20h] [rbp-38h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a2;
  if ( a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 || ndisShouldEngageNicAutoPowerSaver(a1) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x404) != 0 || !(unsigned __int8)ndisReferenceMiniport(a1, 0x15u) )
    {
      v11 = *((_DWORD *)SelectiveSuspend + 126) >> 2;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
      result = 3221291025LL;
      if ( (v11 & 1) != 0 )
        return 259LL;
    }
    else
    {
      v7 = v4;
      *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) ^ ((unsigned __int16)*((_DWORD *)SelectiveSuspend + 126) ^ (unsigned __int16)((_WORD)v4 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 200));
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
      ndisLogMiniportEvent(a1, NdisMEvent_SSIdleReq);
      v8 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v4);
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 224), 0, 0);
      if ( v8 == 259 )
      {
        v9 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0xEu,
            (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
            (char)a1,
            v7);
        if ( (byte_14011B101 & 8) != 0 )
          McTemplateK0q_EtwWriteTransfer(
            (__int64)v9,
            &SSIdleDetected,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v10 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xDu,
            (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
            v8,
            a1);
        if ( (byte_14011B101 & 8) != 0 )
        {
          LODWORD(v15) = v8;
          McTemplateK0qq_EtwWriteTransfer(
            (__int64)v10,
            (__int64)&SSIdleDeclined,
            (__int64)&a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            (__int64)v15);
        }
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        v13 = *((_DWORD *)SelectiveSuspend + 126);
        v14 = v12;
        *((_DWORD *)SelectiveSuspend + 126) = v13 & 0xFFFFFEFF;
        if ( (v13 & 4) != 0 )
        {
          *((_DWORD *)SelectiveSuspend + 126) = v13 & 0xFFFFFEFB;
          KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
          *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
          ndisDereferenceMiniport(a1, 0x15u);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
        }
        return v8;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
  return result;
}
