/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403B5C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x14001F680 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058780 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059990 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r15
  struct DXG_SIGNAL_GUEST_CPU_EVENT *Pool2; // rsi
  __int64 v12; // rax
  int v13; // ecx
  __int64 SynchronizationObjectImpl; // r15
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  _BYTE v19[24]; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v20[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+78h] [rbp+27h]
  __int64 v22; // [rsp+80h] [rbp+2Fh]
  __int64 v23; // [rsp+88h] [rbp+37h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v19);
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3831LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_3:
    WdLogGlobalForLineNumber = v3;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v8 = v6;
  if ( !v6 )
    goto LABEL_5;
  v9 = *(_DWORD *)(v6 + 32);
  if ( v9 == 6 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3836LL;
    v4 = L"D3DDDI_PERIODIC_MONITORED_FENCE is not supported";
    goto LABEL_3;
  }
  if ( v9 >= 8 )
  {
    WdLogSingleEntry1(2LL, *(int *)(v6 + 32));
    v3 = *(int *)(v8 + 32);
    v4 = L"Improper synchronzation type detected: %lu";
    WdLogGlobalForLineNumber = 3842;
    goto LABEL_4;
  }
  v10 = 0LL;
  if ( !*(_DWORD *)(v6 + 24) )
  {
    if ( v9 == 5 )
    {
      WdLogSingleEntry0(2LL);
      v3 = 3851LL;
      v4 = L"Device handle is zero for device sync objects";
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(v6 + 36) & 1) == 0 )
    {
      WdLogSingleEntry0(2LL);
      v3 = 3856LL;
      v4 = L"Device handle is zero when a non-shared sync object is created";
      goto LABEL_3;
    }
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
  }
  Pool2 = 0LL;
  if ( v9 != 4 )
  {
LABEL_23:
    SynchronizationObjectImpl = (int)DxgkCreateSynchronizationObjectImpl(
                                       v8 + 24,
                                       *(_DWORD *)(v8 + 120) | 0x80000000,
                                       0LL,
                                       v10,
                                       0LL);
    if ( Pool2 )
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(Pool2);
    if ( (int)SynchronizationObjectImpl < 0 )
    {
      WdLogSingleEntry1(2LL, SynchronizationObjectImpl);
      WdLogGlobalForLineNumber = 3926;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
        SynchronizationObjectImpl,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_36;
    }
    v20[0] = *(_DWORD *)(v8 + 112);
    v15 = *(_DWORD *)(v8 + 32);
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    if ( v15 == 5 )
    {
      LODWORD(v23) = *(_DWORD *)(v8 + 48);
      v22 = *(_QWORD *)(v8 + 48);
      v16 = *(_QWORD *)(v8 + 56);
    }
    else
    {
      if ( v15 != 6 )
      {
LABEL_31:
        v17 = *(_DWORD *)(v8 + 36);
        v18 = *(_DWORD *)(v8 + 104);
        v20[1] = v18;
        if ( (v17 & 1) != 0 && !v18 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3919;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Output.hGlobalSyncObject", 3919LL, 0LL, 0LL, 0LL, 0LL);
        }
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v20, 0x20u);
        v2 = 1;
        goto LABEL_36;
      }
      LODWORD(v23) = *(_DWORD *)(v8 + 56);
      v22 = *(_QWORD *)(v8 + 48);
      v16 = *(_QWORD *)(v8 + 64);
    }
    v21 = v16;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3866LL;
    v4 = L"Invalid CPU event pointer";
    goto LABEL_3;
  }
  Pool2 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)ExAllocatePool2(64LL, 40LL, 1265072196LL, v7);
  if ( Pool2 )
  {
    v12 = *((_QWORD *)a1 + 11);
    *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
    *((_WORD *)Pool2 + 8) = 256;
    v13 = *(_DWORD *)(v12 + 408);
    *((_QWORD *)Pool2 + 1) = *(_QWORD *)(v8 + 40);
    *((_BYTE *)Pool2 + 19) = (v13 & 0x10) != 0;
    *(_QWORD *)(v8 + 40) = Pool2;
    DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(Pool2);
    goto LABEL_23;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3873;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
    3873LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_36:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  return v2;
}
