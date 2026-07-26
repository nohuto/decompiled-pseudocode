/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140174920
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081520 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401744D0 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003A730 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x14004DC10 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1400A8DE0 (ndisWdmSendOidPmParametersForSx.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x140161FA0 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisMPowerPolicy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        enum _DEVICE_POWER_STATE *a4,
        unsigned __int8 a5)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // edi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  enum _DEVICE_POWER_STATE v8; // r15d
  struct _GUID *v11; // rdx
  __int64 EnabledWoLPacketPatterns; // rcx
  int v13; // r9d
  _DEVICE_POWER_STATE v14; // edx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  int v16; // r9d
  unsigned int PnPFlags; // eax
  int v19; // edx
  __int64 v20; // rcx
  struct _GUID *v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  _BYTE v25[248]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v26[6]; // [rsp+150h] [rbp+50h] BYREF

  MinMagicPacketWakeUp = NdisDeviceStateUnspecified;
  v6 = 0;
  v7 = a2;
  memset(v26, 0, 20);
  v8 = PowerDeviceD3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x79u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      a2);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  if ( (_DWORD)v7 == 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 8), 4, 14, 122, v11, (char)a1);
    if ( byte_14011B103 < 0 )
    {
      LODWORD(v22) = 65537;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerShutdownMiniport,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v22);
    }
    *a4 = PowerDeviceD3;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 123;
LABEL_12:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      v13,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
    return 0LL;
  }
  if ( (_DWORD)v7 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 8), 4, 14, 124, v11, (char)a1);
    if ( byte_14011B103 < 0 )
    {
      LODWORD(v22) = 65538;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerWakeUpDevice,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v22);
    }
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval(&a1->LastSystemSleepTime);
    }
    *a4 = PowerDeviceD0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 125;
    goto LABEL_12;
  }
  if ( !a5 )
  {
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (a1->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(a1) || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        126,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v22) = 65537;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicySetD3,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v22);
    }
    *a4 = PowerDeviceD3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
    if ( (_DWORD)v7 == 5 )
    {
      if ( a3 == PowerSystemShutdown )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v13 = 129;
        goto LABEL_12;
      }
      if ( ndisAoAcCapable || ndisAoAcTest )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v13 = 130;
        goto LABEL_12;
      }
    }
    if ( (a1->PnPFlags & 0x40) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = 0;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x83u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v22);
      }
      if ( (byte_14011B101 & 8) != 0 )
      {
        LODWORD(v22) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          (__int64)&PowerWakeNotEnabled,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v22);
      }
      goto LABEL_106;
    }
    v14 = a1->DeviceCaps.DeviceState[v7];
    if ( (int)v7 >= 5 && ((int)v7 > a1->DeviceCaps.SystemWake || v14 > a1->DeviceCaps.DeviceWake) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          132,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1);
      if ( (byte_14011B101 & 8) != 0 )
      {
        LODWORD(v22) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          (__int64)&PowerHibernateOrShutdown,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v22);
      }
      goto LABEL_106;
    }
    EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
    if ( (EnabledWoLPacketPatterns & 2) != 0 && a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
      MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
    if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0
      && (MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp) != NdisDeviceStateUnspecified
      && (MinMagicPacketWakeUp == NdisDeviceStateUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp) )
    {
      MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
    }
    else
    {
      MinPatternWakeUp = MinMagicPacketWakeUp;
      if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            14,
            133,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a1);
        if ( (byte_14011B101 & 8) != 0 )
        {
          LODWORD(v22) = 65537;
          LODWORD(v21) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            EnabledWoLPacketPatterns,
            (__int64)&PowerPolicyPatternNotEnabled,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v21,
            a1->NetLuid.Value,
            v22);
        }
        goto LABEL_106;
      }
    }
    EnabledWoLPacketPatterns = (unsigned int)a1->DeviceCaps.DeviceWake;
    if ( MinMagicPacketWakeUp <= (int)EnabledWoLPacketPatterns )
      EnabledWoLPacketPatterns = (unsigned int)MinPatternWakeUp;
    if ( (int)v7 <= a1->DeviceCaps.SystemWake && v14 <= (int)EnabledWoLPacketPatterns && v14 )
    {
      EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
      if ( (_DWORD)EnabledWoLPacketPatterns )
      {
        EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
        if ( (_DWORD)EnabledWoLPacketPatterns )
        {
          EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
          if ( (_DWORD)EnabledWoLPacketPatterns )
          {
            if ( (_DWORD)EnabledWoLPacketPatterns != 1 )
              goto LABEL_87;
            if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
            {
LABEL_81:
              if ( v14 > v8 )
              {
                v6 = -1073741823;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v22) = v7;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    0xEu,
                    0x88u,
                    (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                    (char)a1,
                    v22);
                }
                if ( (byte_14011B102 & 0x40) != 0 )
                {
                  LODWORD(v22) = 65540;
LABEL_86:
                  LODWORD(v21) = a1->IfIndex;
                  McTemplateK0jqxd_EtwWriteTransfer(
                    EnabledWoLPacketPatterns,
                    (__int64)&PowerPolicyError,
                    (__int64)&a1->InterfaceGuid,
                    (__int64)&a1->InterfaceGuid,
                    (__int64)v21,
                    a1->NetLuid.Value,
                    v22);
                  goto LABEL_91;
                }
              }
              goto LABEL_91;
            }
          }
          if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
          {
            v8 = PowerDeviceD2;
            goto LABEL_81;
          }
        }
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
        {
          v8 = PowerDeviceD1;
          goto LABEL_81;
        }
      }
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) != 0 )
      {
        v8 = PowerDeviceD0;
        goto LABEL_81;
      }
LABEL_87:
      v6 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v7;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x87u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v22);
      }
      if ( (byte_14011B102 & 0x40) != 0 )
      {
        LODWORD(v22) = 65539;
        goto LABEL_86;
      }
LABEL_91:
      if ( a5 || (ndisMInvokeDevicePowerNotify(a1, v8), !(unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1)) )
      {
        *a4 = v8;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x89u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a1,
            v7,
            v8);
        if ( (byte_14011B101 & 8) != 0 )
        {
          SLODWORD(v23) = *a4;
          LODWORD(v22) = v7;
          LODWORD(v21) = a1->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            EnabledWoLPacketPatterns,
            (__int64)&PowerPolicyStates,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v21,
            a1->NetLuid.Value,
            v22,
            v23);
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v6;
        v16 = 138;
        goto LABEL_99;
      }
      goto LABEL_107;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        14,
        134,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    }
    if ( (byte_14011B102 & 0x40) != 0 )
    {
      LODWORD(v22) = 65538;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicyError,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v22);
    }
    v6 = -1073741823;
LABEL_106:
    if ( a5 )
    {
LABEL_114:
      *a4 = PowerDeviceD3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Cu,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1,
          v7,
          4);
      if ( (byte_14011B101 & 8) != 0 )
      {
        SLODWORD(v23) = *a4;
        LODWORD(v22) = v7;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          (__int64)&PowerPolicyStates,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v22,
          v23);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v16 = 141;
LABEL_99:
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        14,
        v16,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
      return v6;
    }
LABEL_107:
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
    {
      memset(&v25[1], 0, 0xF7uLL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v19,
          14,
          139,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1);
      }
      if ( (byte_14011B101 & 8) != 0 )
      {
        LODWORD(v22) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v20,
          (__int64)&PowerDisableWakeup,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v22);
      }
      v26[0] = 1311360;
      memset(&v25[112], 0, 136);
      *(_QWORD *)&v25[104] = &ndisIntReqGeneric;
      memset(v25, 0, 104);
      *(_OWORD *)&v26[1] = 0LL;
      *(_DWORD *)&v25[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v25[168]);
      *(_DWORD *)v25 = 15466902;
      *(_DWORD *)&v25[32] = -50265847;
      *(_QWORD *)&v25[4] = 1LL;
      *(_QWORD *)&v25[40] = v26;
      *(_DWORD *)&v25[48] = 20;
      ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v25, 0, 0LL);
    }
    goto LABEL_114;
  }
  if ( !a5 )
  {
    a1->PnPFlags &= ~0x400u;
    ndisCancelWaitWake(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      128,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  return 2147483663LL;
}
