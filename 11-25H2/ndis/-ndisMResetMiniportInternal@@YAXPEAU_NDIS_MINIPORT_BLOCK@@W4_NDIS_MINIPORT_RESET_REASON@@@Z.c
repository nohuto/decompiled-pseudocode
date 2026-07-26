/*
 * XREFs of ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x14003DEF0
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14003CEF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ndisQueuedResetMiniport @ 0x1400A9850 (ndisQueuedResetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061D50 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     NdisMSleep @ 0x140067890 (NdisMSleep.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     NdisMResetComplete @ 0x1400A83A0 (NdisMResetComplete.c)
 *     McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1400A989C (McTemplateK0jqxzqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ndisMInvokeReset @ 0x140143420 (ndisMInvokeReset.c)
 */

void __fastcall ndisMResetMiniportInternal(__int64 a1, int a2)
{
  int v4; // edx
  bool v5; // zf
  KIRQL v6; // dl
  KIRQL v7; // dl
  int v8; // edx
  __int64 v9; // rcx
  NDIS_STATUS v10; // edi
  KIRQL v11; // si
  KIRQL v12; // dl
  struct _GUID *v13; // [rsp+20h] [rbp-89h]
  __int64 v14; // [rsp+30h] [rbp-79h]
  unsigned __int8 v15; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN v16[15]; // [rsp+51h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  v16[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xDu,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      a1,
      a2);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = (*(_DWORD *)(a1 + 120) & 0x81200000) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( !v5 || (*(_DWORD *)(a1 + 124) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(a1 + 3880) - 2) <= 2 )
  {
    v12 = v15;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++*(_WORD *)(a1 + 1784);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++*(_WORD *)(a1 + 1786);
    }
    if ( (byte_140125105 & 0x40) != 0 )
      McTemplateK0jqxzqq_EtwWriteTransfer(
        *(unsigned __int16 *)(a1 + 1784) + *(unsigned __int16 *)(a1 + 1786),
        v4,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 8LL),
        a2,
        *(_WORD *)(a1 + 1784) + *(_WORD *)(a1 + 1786));
    *(_DWORD *)(a1 + 120) |= 0x200000u;
    *(_QWORD *)(a1 + 392) = 0LL;
    ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)a1, 1u);
    *(_DWORD *)(a1 + 120) |= 0x80000u;
    while ( *(_DWORD *)(a1 + 1824) )
    {
      v6 = v15;
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
      NdisMSleep(0x32u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &v15);
    }
    v7 = v15;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
    *((_DWORD *)&StatusIndication.Header + 1) = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = (void *)a1;
    memset(&StatusIndication.PortNumber, 0, 96);
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx((NDIS_HANDLE)a1, &StatusIndication);
    if ( (byte_140125101 & 4) != 0 )
    {
      LODWORD(v14) = 65539;
      LODWORD(v13) = *(_DWORD *)(a1 + 4056);
      McTemplateK0jqxd_EtwWriteTransfer(
        v9,
        &CallMiniportReset,
        (const GUID *)(a1 + 4008),
        a1 + 4008,
        (__int64)v13,
        *(_QWORD *)(a1 + 4024),
        v14);
    }
    if ( *(_QWORD *)(a1 + 4448) )
      ndisSetBusySync(a1, 36LL);
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          17,
          14,
          (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids);
      }
      v11 = KfRaiseIrql(2u);
      v10 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(v16, *(_QWORD *)(a1 + 24));
      if ( v11 != 2 )
        KeLowerIrql(v11);
    }
    else
    {
      v10 = ndisMInvokeReset(a1);
    }
    if ( v10 != 259 )
      NdisMResetComplete((NDIS_HANDLE)a1, v10, v16[0]);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0xFu,
        (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
        a1,
        v14);
    }
  }
}
