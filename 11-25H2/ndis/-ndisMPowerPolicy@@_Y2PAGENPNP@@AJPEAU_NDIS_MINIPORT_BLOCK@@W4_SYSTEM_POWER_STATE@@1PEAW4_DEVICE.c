/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140180350
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055D80 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017FF00 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x1400693E0 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1400B0F50 (ndisWdmSendOidPmParametersForSx.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x14016D640 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisMPowerPolicy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        enum _DEVICE_POWER_STATE *a4,
        unsigned __int8 a5)
{
  unsigned int v5; // r13d
  __int64 v6; // rdi
  enum _DEVICE_POWER_STATE v8; // r12d
  __int64 v11; // rcx
  int EnabledWoLPacketPatterns; // edx
  int v13; // r9d
  unsigned int PnPFlags; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r9d
  _DEVICE_POWER_STATE v19; // r8d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  struct _GUID *v22; // [rsp+20h] [rbp-E0h]
  __int64 v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  _BYTE v25[248]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v26[6]; // [rsp+150h] [rbp+50h] BYREF

  v5 = 0;
  v6 = a2;
  memset(v26, 0, 20);
  v8 = PowerDeviceD3;
  v11 = (__int64)&WPP_4a94757187d03d50151c0070042f9279_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x79u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      a2);
    v11 = (__int64)&WPP_4a94757187d03d50151c0070042f9279_Traceguids;
  }
  if ( (a1->Flags & 0x80u) != 0 )
    __int2c();
  if ( (_DWORD)v6 == 6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        122,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    if ( byte_140125103 < 0 )
    {
      LODWORD(v23) = 65537;
      LODWORD(v22) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        (__int64)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        &PowerShutdownMiniport,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v22,
        a1->NetLuid.Value,
        v23);
    }
    *a4 = PowerDeviceD3;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        123,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    return 0LL;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        124,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    if ( byte_140125103 < 0 )
    {
      LODWORD(v23) = 65538;
      LODWORD(v22) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v11,
        &PowerWakeUpDevice,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v22,
        a1->NetLuid.Value,
        v23);
    }
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval(&a1->LastSystemSleepTime);
    }
    *a4 = PowerDeviceD0;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 125;
    goto LABEL_19;
  }
  if ( !a5 )
  {
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (a1->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(a1) || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        126,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    if ( (byte_140125101 & 8) != 0 )
    {
      LODWORD(v23) = 65537;
      LODWORD(v22) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v11,
        &PowerPolicySetD3,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v22,
        a1->NetLuid.Value,
        v23);
    }
    *a4 = PowerDeviceD3;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        127,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    return 0LL;
  }
  if ( (unsigned int)(a1->CurrentDevicePowerState - 2) > 2 )
  {
    if ( (_DWORD)v6 == 5 )
    {
      if ( a3 == PowerSystemShutdown )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v13 = 129;
LABEL_19:
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          v13,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1);
        return 0LL;
      }
      if ( ndisAoAcCapable || ndisAoAcTest )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v13 = 130;
        goto LABEL_19;
      }
    }
    if ( (a1->PnPFlags & 0x40) == 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = 0;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x83u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v23);
      }
      if ( (byte_140125101 & 8) != 0 )
      {
        LODWORD(v23) = 65537;
        LODWORD(v22) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v11,
          &PowerWakeNotEnabled,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v22,
          a1->NetLuid.Value,
          v23);
      }
      goto LABEL_33;
    }
    v19 = a1->DeviceCaps.DeviceState[v6];
    if ( (int)v6 >= 5 && ((int)v6 > a1->DeviceCaps.SystemWake || v19 > a1->DeviceCaps.DeviceWake) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          132,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1);
      if ( (byte_140125101 & 8) != 0 )
      {
        LODWORD(v23) = 65537;
        LODWORD(v22) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v11,
          &PowerHibernateOrShutdown,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v22,
          a1->NetLuid.Value,
          v23);
      }
      goto LABEL_33;
    }
    EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
    v11 = 0LL;
    if ( (EnabledWoLPacketPatterns & 2) != 0 )
    {
      MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
      if ( MinMagicPacketWakeUp )
        v11 = (unsigned int)MinMagicPacketWakeUp;
    }
    if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0
      && (MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp) != NdisDeviceStateUnspecified
      && (!(_DWORD)v11 || (int)v11 > MinPatternWakeUp) )
    {
      v11 = (unsigned int)MinPatternWakeUp;
    }
    else
    {
      MinPatternWakeUp = (int)v11;
      if ( !(_DWORD)v11 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            14,
            133,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a1);
        if ( (byte_140125101 & 8) != 0 )
        {
          LODWORD(v23) = 65537;
          LODWORD(v22) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            v11,
            &PowerPolicyPatternNotEnabled,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v22,
            a1->NetLuid.Value,
            v23);
        }
        goto LABEL_33;
      }
    }
    EnabledWoLPacketPatterns = a1->DeviceCaps.DeviceWake;
    if ( (int)v11 <= EnabledWoLPacketPatterns )
      EnabledWoLPacketPatterns = MinPatternWakeUp;
    if ( (int)v6 <= a1->DeviceCaps.SystemWake && v19 <= EnabledWoLPacketPatterns && v19 )
    {
      if ( EnabledWoLPacketPatterns == 4 )
      {
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
        {
LABEL_71:
          if ( v19 > v8 )
          {
            v5 = -1073741823;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v23) = v6;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xEu,
                0x88u,
                (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                (char)a1,
                v23);
            }
            if ( (byte_140125102 & 0x40) != 0 )
            {
              LODWORD(v23) = 65540;
LABEL_126:
              LODWORD(v22) = a1->IfIndex;
              McTemplateK0jqxd_EtwWriteTransfer(
                v11,
                &PowerPolicyError,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                (__int64)v22,
                a1->NetLuid.Value,
                v23);
              goto LABEL_72;
            }
          }
          goto LABEL_72;
        }
      }
      else
      {
        if ( !--EnabledWoLPacketPatterns )
        {
LABEL_120:
          if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) != 0 )
          {
            v8 = PowerDeviceD0;
            goto LABEL_71;
          }
LABEL_127:
          v5 = -1073741823;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v23) = v6;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x87u,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a1,
              v23);
          }
          if ( (byte_140125102 & 0x40) != 0 )
          {
            LODWORD(v23) = 65539;
            goto LABEL_126;
          }
LABEL_72:
          if ( a5 || (ndisMInvokeDevicePowerNotify(a1, v8), !(unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1)) )
          {
            *a4 = v8;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qDD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xEu,
                0x89u,
                (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                (char)a1,
                v6,
                v8);
            if ( (byte_140125101 & 8) != 0 )
            {
              SLODWORD(v24) = *a4;
              LODWORD(v23) = v6;
              LODWORD(v22) = a1->IfIndex;
              McTemplateK0jqxqq_EtwWriteTransfer(
                v11,
                &PowerPolicyStates,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                (__int64)v22,
                a1->NetLuid.Value,
                v23,
                v24);
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return v5;
            v18 = 138;
            goto LABEL_47;
          }
          goto LABEL_34;
        }
        if ( !--EnabledWoLPacketPatterns )
        {
LABEL_118:
          if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
          {
            v8 = PowerDeviceD1;
            goto LABEL_71;
          }
          goto LABEL_120;
        }
        if ( EnabledWoLPacketPatterns != 1 )
          goto LABEL_127;
      }
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
      {
        v8 = PowerDeviceD2;
        goto LABEL_71;
      }
      goto LABEL_118;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(EnabledWoLPacketPatterns) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        EnabledWoLPacketPatterns,
        14,
        134,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    }
    if ( (byte_140125102 & 0x40) != 0 )
    {
      LODWORD(v23) = 65538;
      LODWORD(v22) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v11,
        &PowerPolicyError,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v22,
        a1->NetLuid.Value,
        v23);
    }
    v5 = -1073741823;
LABEL_33:
    if ( a5 )
    {
LABEL_41:
      *a4 = PowerDeviceD3;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Cu,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v6,
          4);
      if ( (byte_140125101 & 8) != 0 )
      {
        SLODWORD(v24) = *a4;
        LODWORD(v23) = v6;
        LODWORD(v22) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v11,
          &PowerPolicyStates,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v22,
          a1->NetLuid.Value,
          v23,
          v24);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      v18 = 141;
LABEL_47:
      LOBYTE(EnabledWoLPacketPatterns) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        EnabledWoLPacketPatterns,
        14,
        v18,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
      return v5;
    }
LABEL_34:
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
    {
      memset(&v25[1], 0, 0xF7uLL);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          14,
          139,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1);
      }
      if ( (byte_140125101 & 8) != 0 )
      {
        LODWORD(v23) = 65537;
        LODWORD(v22) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v17,
          &PowerDisableWakeup,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v22,
          a1->NetLuid.Value,
          v23);
      }
      v26[0] = 1311360;
      memset(&v25[112], 0, 136);
      *(_QWORD *)&v25[104] = &ndisIntReqGeneric;
      memset(v25, 0, 104);
      *(_OWORD *)&v26[1] = 0LL;
      *(_DWORD *)&v25[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v25[168]);
      *(_DWORD *)v25 = 15466902;
      *(_QWORD *)&v25[40] = v26;
      *(_DWORD *)&v25[32] = -50265847;
      *(_QWORD *)&v25[4] = 1LL;
      *(_DWORD *)&v25[48] = 20;
      ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v25, 0, 0LL);
    }
    goto LABEL_41;
  }
  if ( !a5 )
  {
    a1->PnPFlags &= ~0x400u;
    ndisCancelWaitWake(a1);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      128,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  return 2147483663LL;
}
