/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140425A10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059450 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403708E8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  struct DXGADAPTER *v9; // r15
  __int64 Pool2; // rsi
  __int64 v11; // rax
  int v12; // ecx
  __int64 SynchronizationObjectImpl; // r15
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  _BYTE v18[24]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v19[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  __int64 v22; // [rsp+88h] [rbp+27h]
  __int64 v23; // [rsp+90h] [rbp+2Fh] BYREF
  int v24; // [rsp+98h] [rbp+37h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3831LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_3:
    WdLogGlobalForLineNumber = v3;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    return 0;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v7 = v6;
  if ( !v6 )
    goto LABEL_5;
  v8 = *(_DWORD *)(v6 + 32);
  if ( v8 == 6 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3836LL;
    v4 = L"D3DDDI_PERIODIC_MONITORED_FENCE is not supported";
    goto LABEL_3;
  }
  if ( v8 == 7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3843;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"D3DDDI_NATIVE_FENCE is not supported",
      3843LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v23 = 57954575LL;
    v24 = 0;
    RtlLogUnexpectedCodepath(&v23);
    goto LABEL_5;
  }
  if ( v8 >= 8 )
  {
    WdLogSingleEntry1(2LL, *(int *)(v6 + 32));
    v3 = *(int *)(v7 + 32);
    v4 = L"Improper synchronzation type detected: %lu";
    WdLogGlobalForLineNumber = 3851;
    goto LABEL_4;
  }
  v9 = 0LL;
  if ( !*(_DWORD *)(v6 + 24) )
  {
    if ( v8 == 5 )
    {
      WdLogSingleEntry0(2LL);
      v3 = 3860LL;
      v4 = L"Device handle is zero for device sync objects";
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(v6 + 36) & 1) == 0 )
    {
      WdLogSingleEntry0(2LL);
      v3 = 3865LL;
      v4 = L"Device handle is zero when a non-shared sync object is created";
      goto LABEL_3;
    }
    v9 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL);
  }
  Pool2 = 0LL;
  if ( v8 != 4 )
  {
LABEL_25:
    SynchronizationObjectImpl = (int)DxgkCreateSynchronizationObjectImpl(
                                       v7 + 24,
                                       *(_DWORD *)(v7 + 120) | 0x80000000,
                                       0LL,
                                       v9);
    if ( Pool2 )
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    if ( (int)SynchronizationObjectImpl < 0 )
    {
      WdLogSingleEntry1(2LL, SynchronizationObjectImpl);
      WdLogGlobalForLineNumber = 3935;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
        SynchronizationObjectImpl,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_38;
    }
    v19[0] = *(_DWORD *)(v7 + 112);
    v14 = *(_DWORD *)(v7 + 32);
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( v14 == 5 )
    {
      LODWORD(v22) = *(_DWORD *)(v7 + 48);
      v21 = *(_QWORD *)(v7 + 48);
      v15 = *(_QWORD *)(v7 + 56);
    }
    else
    {
      if ( v14 != 6 )
      {
LABEL_33:
        v16 = *(_DWORD *)(v7 + 36);
        v17 = *(_DWORD *)(v7 + 104);
        v19[1] = v17;
        if ( (v16 & 1) != 0 && !v17 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3928;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Output.hGlobalSyncObject",
            3928LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v19, 0x20u);
        v2 = 1;
        goto LABEL_38;
      }
      LODWORD(v22) = *(_DWORD *)(v7 + 56);
      v21 = *(_QWORD *)(v7 + 48);
      v15 = *(_QWORD *)(v7 + 64);
    }
    v20 = v15;
    goto LABEL_33;
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3875LL;
    v4 = L"Invalid CPU event pointer";
    goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
  if ( Pool2 )
  {
    v11 = *((_QWORD *)a1 + 11);
    *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
    *(_WORD *)(Pool2 + 16) = 256;
    v12 = *(_DWORD *)(v11 + 408);
    *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v7 + 40);
    *(_BYTE *)(Pool2 + 19) = (v12 & 0x10) != 0;
    *(_QWORD *)(v7 + 40) = Pool2;
    DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    goto LABEL_25;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3882;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
    3882LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_38:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
  return v2;
}
