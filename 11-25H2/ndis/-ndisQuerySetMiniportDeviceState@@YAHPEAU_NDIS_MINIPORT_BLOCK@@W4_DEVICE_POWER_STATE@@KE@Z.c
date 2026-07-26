/*
 * XREFs of ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1400578C0
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017FF00 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1401812C0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     McTemplateK0jqxqqt_EtwWriteTransfer @ 0x1400B1070 (McTemplateK0jqxqqt_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZDLd @ 0x1400B1128 (WPP_RECORDER_SF_qZDLd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _DEVICE_POWER_STATE a2,
        int a3,
        char a4)
{
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  unsigned int SetMiniport; // ebx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-E0h]
  char v15[8]; // [rsp+30h] [rbp-D0h]
  enum _DEVICE_POWER_STATE v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[248]; // [rsp+60h] [rbp-A0h] BYREF

  v16 = a2;
  memset(&v17[1], 0, 0xF7uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      52,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x80u) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        53,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    }
    return 0LL;
  }
  else
  {
    memset(&v17[112], 0, 136);
    *(_QWORD *)&v17[104] = &ndisIntReqGeneric;
    memset(v17, 0, 104);
    *(_DWORD *)&v17[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v17[168]);
    *(_DWORD *)v17 = 15466902;
    *(_DWORD *)&v17[8] = 0;
    *(_DWORD *)&v17[32] = a3;
    *(_DWORD *)&v17[48] = 4;
    *(_DWORD *)&v17[4] = a4 != 0;
    *(_QWORD *)&v17[40] = &v16;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v17, 0, 0LL);
    if ( SetMiniport && SetMiniport != -1073741637 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZDLd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          v11,
          v12,
          v14,
          (char)a1,
          (__int64)a1->pAdapterInstanceName,
          a3,
          a4,
          SetMiniport);
      if ( (byte_140125101 & 8) != 0 )
        McTemplateK0jqxqqt_EtwWriteTransfer(
          v9,
          v8,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          SetMiniport,
          a3,
          a4);
    }
    if ( a4 && SetMiniport != -1073741637 && SetMiniport )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v15 = SetMiniport;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x37u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1,
        *(_QWORD *)v15);
    }
    return SetMiniport;
  }
}
