/*
 * XREFs of ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400683A0
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x140068290 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140051D30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140054980 (WPP_RECORDER_SF_LqZ.c)
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x140073DE0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     ndisWdfDevicePowerDown @ 0x1400AFC70 (ndisWdfDevicePowerDown.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401648B0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifyDevicePower(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  enum _NDIS_DEVICE_POWER_STATE v3; // edi
  int v4; // esi
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rax
  struct SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // si
  int v10; // eax
  bool v11; // bp
  void (__fastcall *v12)(_QWORD, __int64); // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 v16; // cl
  char v17; // cl
  unsigned __int8 v18; // cl
  char v19; // r9
  __int64 v20; // rax
  unsigned __int8 v21; // dl
  __int16 v22; // r8
  __int64 v23; // rax
  void (__fastcall *v24)(_QWORD, __int64); // rax
  __int64 v25; // rdx
  char v26; // al
  int v27; // eax
  unsigned __int8 v28; // r9
  __int64 v29; // r8
  unsigned __int8 v30; // cl
  char v31; // cl
  unsigned __int8 v32; // cl
  char v33; // r10
  __int64 v34; // rax
  unsigned __int8 v35; // r8
  __int16 v36; // r9
  __int64 v37; // rax
  struct _GUID *v38; // [rsp+20h] [rbp-28h]
  __int64 v39; // [rsp+30h] [rbp-18h]
  __int64 v40; // [rsp+38h] [rbp-10h]

  v3 = (int)a3;
  v4 = a2;
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(Miniport, 0x00000080))");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x16u,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a3,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( (byte_14011B101 & 8) != 0 )
  {
    LODWORD(v40) = v3;
    LODWORD(v39) = 1;
    LODWORD(v38) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      (__int64)a1,
      (__int64)&MiniportPowerDeviceState,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v38,
      a1->NetLuid.Value,
      v39,
      v40);
  }
  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  if ( PhysicalPerformanceCounters )
  {
    if ( v3 > NdisDeviceStateD0 )
      ++PhysicalPerformanceCounters->LowPowerTransitions;
    a1->PhysicalPerformanceCounters->DevicePowerState = v3 - 1;
  }
  if ( v3 == NdisDeviceStateD0 )
  {
    if ( v4 )
    {
      ndisWdfDevicePowerOn(a1);
      return;
    }
    if ( ndisIdleCondition != NdisIdleConditionL2ConnectedOnly )
      return;
    m_impl = a1->IdleSm.__ptr_.__value_->m_engine.m_impl;
    v8 = (KSPIN_LOCK *)((char *)m_impl + 1000);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
    *((_BYTE *)m_impl + 1009) = v9;
    v27 = *((_DWORD *)m_impl + 248);
    if ( v27 == 5 )
    {
      if ( *((_WORD *)m_impl + 440) == 2 )
      {
        v12 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)m_impl + 116);
        if ( v12 )
        {
          v13 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 8LL);
          goto LABEL_61;
        }
LABEL_62:
        *((_WORD *)m_impl + 440) = 0;
LABEL_88:
        *((_BYTE *)m_impl + 983) = v9;
        *((_BYTE *)m_impl + 982) = 0;
        if ( v9 >= 2u )
          *((_DWORD *)m_impl + 246) = KeGetPcr()->Prcb.Number;
        else
          *((_QWORD *)m_impl + 123) = KeGetCurrentThread();
        SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(m_impl);
        return;
      }
      v11 = 0;
    }
    else
    {
      v11 = v27 == 1;
    }
    switch ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 10LL) )
    {
      case 1:
        v34 = *((unsigned __int8 *)m_impl + 979);
        v31 = (v34 + 1) & 0xF;
        if ( v31 == *((_BYTE *)m_impl + 978) )
          goto LABEL_92;
        break;
      case 2:
        v32 = *((_BYTE *)m_impl + 978);
        v33 = 0;
        LOBYTE(v34) = *((_BYTE *)m_impl + 979);
        v35 = v32;
        if ( v32 != (_BYTE)v34 )
        {
          do
          {
            v36 = *((_WORD *)m_impl + v32 + 416);
            if ( v36 == 2 )
            {
              v33 = 1;
            }
            else
            {
              v37 = v35;
              v35 = (v35 + 1) & 0xF;
              *((_WORD *)m_impl + v37 + 416) = v36;
            }
            LOBYTE(v34) = *((_BYTE *)m_impl + 979);
            v32 = (v32 + 1) & 0xF;
          }
          while ( v32 != (_BYTE)v34 );
          if ( v33 )
          {
            *((_WORD *)m_impl + (((unsigned __int8)v34 - 1) & 0xF) + 416) = 2;
            goto LABEL_38;
          }
        }
        v31 = (v34 + 1) & 0xF;
        if ( v31 == *((_BYTE *)m_impl + 978) )
          goto LABEL_92;
        v34 = (unsigned __int8)v34;
        break;
      case 3:
        v28 = *((_BYTE *)m_impl + 978);
        v29 = *((unsigned __int8 *)m_impl + 979);
        v30 = v28;
        if ( v28 != (_BYTE)v29 )
        {
          while ( *((_WORD *)m_impl + v30 + 416) != 2 )
          {
            v30 = (v30 + 1) & 0xF;
            if ( v30 == (_BYTE)v29 )
              goto LABEL_70;
          }
          goto LABEL_25;
        }
LABEL_70:
        v31 = (v29 + 1) & 0xF;
        if ( v31 != v28 )
        {
          *((_WORD *)m_impl + v29 + 416) = 2;
          goto LABEL_82;
        }
LABEL_92:
        SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
          m_impl,
          RequiresDedicatedThread,
          2u,
          0);
        v26 = 0;
LABEL_86:
        if ( !v26 )
          return;
        if ( v11 )
          goto LABEL_88;
LABEL_38:
        KeReleaseSpinLock(v8, *((_BYTE *)v8 + 9));
        return;
      default:
        goto LABEL_25;
    }
    *((_WORD *)m_impl + v34 + 416) = 2;
LABEL_82:
    v24 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)m_impl + 116);
    *((_BYTE *)m_impl + 979) = v31;
    if ( v24 )
    {
      v25 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 8LL);
      goto LABEL_84;
    }
LABEL_85:
    v26 = 1;
    goto LABEL_86;
  }
  if ( v3 != NdisDeviceStateD1 && (unsigned int)(v3 - 3) > 1 )
    return;
  if ( !v4 )
  {
    if ( ndisIdleCondition != NdisIdleConditionL2ConnectedOnly )
      return;
    m_impl = a1->IdleSm.__ptr_.__value_->m_engine.m_impl;
    v8 = (KSPIN_LOCK *)((char *)m_impl + 1000);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
    *((_BYTE *)m_impl + 1009) = v9;
    v10 = *((_DWORD *)m_impl + 248);
    if ( v10 != 5 )
    {
      v11 = v10 == 1;
LABEL_22:
      switch ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 14LL) )
      {
        case 1:
          v20 = *((unsigned __int8 *)m_impl + 979);
          v17 = (v20 + 1) & 0xF;
          if ( v17 == *((_BYTE *)m_impl + 978) )
            goto LABEL_45;
          break;
        case 2:
          v18 = *((_BYTE *)m_impl + 978);
          v19 = 0;
          LOBYTE(v20) = *((_BYTE *)m_impl + 979);
          v21 = v18;
          if ( v18 != (_BYTE)v20 )
          {
            do
            {
              v22 = *((_WORD *)m_impl + v18 + 416);
              if ( v22 == 3 )
              {
                v19 = 1;
              }
              else
              {
                v23 = v21;
                v21 = (v21 + 1) & 0xF;
                *((_WORD *)m_impl + v23 + 416) = v22;
              }
              LOBYTE(v20) = *((_BYTE *)m_impl + 979);
              v18 = (v18 + 1) & 0xF;
            }
            while ( v18 != (_BYTE)v20 );
            if ( v19 )
            {
              *((_WORD *)m_impl + (((unsigned __int8)v20 - 1) & 0xF) + 416) = 3;
              goto LABEL_38;
            }
          }
          v17 = (v20 + 1) & 0xF;
          if ( v17 == *((_BYTE *)m_impl + 978) )
            goto LABEL_45;
          v20 = (unsigned __int8)v20;
          break;
        case 3:
          v14 = *((_BYTE *)m_impl + 978);
          v15 = *((unsigned __int8 *)m_impl + 979);
          v16 = v14;
          if ( v14 != (_BYTE)v15 )
          {
            while ( *((_WORD *)m_impl + v16 + 416) != 3 )
            {
              v16 = (v16 + 1) & 0xF;
              if ( v16 == (_BYTE)v15 )
                goto LABEL_29;
            }
            goto LABEL_25;
          }
LABEL_29:
          v17 = (v15 + 1) & 0xF;
          if ( v17 != v14 )
          {
            *((_WORD *)m_impl + v15 + 416) = 3;
            goto LABEL_42;
          }
LABEL_45:
          SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
            m_impl,
            RequiresDedicatedThread,
            3u,
            0);
          v26 = 0;
          goto LABEL_86;
        default:
LABEL_25:
          KeReleaseSpinLock(v8, v9);
          return;
      }
      *((_WORD *)m_impl + v20 + 416) = 3;
LABEL_42:
      v24 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)m_impl + 116);
      *((_BYTE *)m_impl + 979) = v17;
      if ( v24 )
      {
        v25 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 12LL);
LABEL_84:
        v24(*((_QWORD *)m_impl + 112), v25);
        goto LABEL_85;
      }
      goto LABEL_85;
    }
    if ( *((_WORD *)m_impl + 440) != 3 )
    {
      v11 = 0;
      goto LABEL_22;
    }
    v12 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)m_impl + 116);
    if ( v12 )
    {
      v13 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 12LL);
LABEL_61:
      v12(*((_QWORD *)m_impl + 112), v13);
      goto LABEL_62;
    }
    goto LABEL_62;
  }
  if ( !ndisIsMiniportStarted(a1) )
    NT_ASSERT("ndisIsMiniportStarted(Miniport)");
  if ( a1->PnPDeviceState != NdisPnPDeviceStarted )
    NT_ASSERT("Miniport->PnPDeviceState == NdisPnPDeviceStarted");
  if ( (a1->PnPFlags & 0x800) != 0
    || (KeClearEvent(&a1->OpenReadyEvent.Event), ndisPrepForLowPowerCommon(a1, v3), (a1->PnPFlags & 0x800) != 0) )
  {
    ndisSetDeviceInterfaceState(a1, 0);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
  }
  ndisWdfDevicePowerDown(a1, v3);
}
