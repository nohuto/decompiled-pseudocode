/*
 * XREFs of ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140080060
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x140076710 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ndisQueuedResetMiniport @ 0x1400A1600 (ndisQueuedResetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086A20 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086C40 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     NdisMResetComplete @ 0x14009FE80 (NdisMResetComplete.c)
 *     McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1400A164C (McTemplateK0jqxzqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ndisMInvokeReset @ 0x140138400 (ndisMInvokeReset.c)
 */

void __fastcall ndisMResetMiniportInternal(__int64 a1, int a2)
{
  int v4; // edx
  KIRQL v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // edx
  __int64 v9; // rcx
  NDIS_STATUS v10; // edi
  KIRQL v11; // si
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D0h]
  BOOLEAN v14[16]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTIMER Timer; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v17; // [rsp+B0h] [rbp-50h]
  __int128 v18; // [rsp+C0h] [rbp-40h]
  __int128 v19; // [rsp+D0h] [rbp-30h]
  __int128 v20; // [rsp+E0h] [rbp-20h]
  __int128 v21; // [rsp+F0h] [rbp-10h]
  __int128 v22; // [rsp+100h] [rbp+0h]

  v14[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xDu,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      a1,
      a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 120) & 0x81200000) != 0
    || (*(_DWORD *)(a1 + 124) & 0x80000) != 0
    || (unsigned int)(*(_DWORD *)(a1 + 3880) - 2) <= 2 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
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
    if ( (byte_14011B105 & 0x40) != 0 )
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
    _InterlockedOr((volatile signed __int32 *)(a1 + 120), 0x200000u);
    *(_QWORD *)(a1 + 392) = 0LL;
    ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)a1, 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 120), 0x80000u);
    for ( ; *(_DWORD *)(a1 + 1824); *(_QWORD *)(a1 + 520) = KeGetCurrentThread() )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
      memset(&Timer, 0, sizeof(Timer));
      KeInitializeTimerEx(&Timer, SynchronizationTimer);
      KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
      KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
    v6 = *(_QWORD *)(a1 + 3760);
    v7 = *(_QWORD *)(a1 + 5288);
    v16[0] = 7340440LL;
    v16[1] = a1;
    v17 = 0LL;
    DWORD1(v17) = 1073807364;
    v18 = 0LL;
    v19 = 0uLL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    (*((void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))g_MiniportHookDrivers
     + 16 * (__int64)*(int *)(v6 + 896)
     + 8))(
      *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)*(int *)(v6 + 896) + 3),
      v7,
      a1,
      v16);
    if ( (byte_14011B101 & 4) != 0 )
    {
      LODWORD(v13) = 65539;
      LODWORD(Timeout) = *(_DWORD *)(a1 + 4056);
      McTemplateK0jqxd_EtwWriteTransfer(
        v9,
        (__int64)&CallMiniportReset,
        a1 + 4008,
        a1 + 4008,
        (__int64)Timeout,
        *(_QWORD *)(a1 + 4024),
        v13);
    }
    if ( *(_QWORD *)(a1 + 4448) )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, 36LL, 0LL);
      else
        ndisWdfSetBusySync(a1, 36LL, 0LL);
    }
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
      v10 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(v14, *(_QWORD *)(a1 + 24));
      if ( v11 != 2 )
        KeLowerIrql(v11);
    }
    else
    {
      v10 = ndisMInvokeReset(a1);
    }
    if ( v10 != 259 )
      NdisMResetComplete((NDIS_HANDLE)a1, v10, v14[0]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0xFu,
        (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
        a1,
        v13);
    }
  }
}
