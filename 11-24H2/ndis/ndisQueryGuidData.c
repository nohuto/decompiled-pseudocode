/*
 * XREFs of ndisQueryGuidData @ 0x14002D4C0
 * Callers:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002E290 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002F700 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14002D480 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1400309A0 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILITIES@@@Z @ 0x1400B5E9C (-ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILI.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@@@Z @ 0x1401405CC (-ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@.c)
 *     ?ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140167480 (-ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisQueryGuidData(
        struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *a1,
        unsigned int a2,
        struct _NDIS_MINIPORT_BLOCK *a3,
        struct _NDIS_GUID *a4,
        struct _NDIS_CO_VC_PTR_BLOCK *a5,
        struct _GUID *a6,
        struct _NDIS_MINIPORT_BLOCK *a7)
{
  char v8; // r15
  size_t v10; // rsi
  struct _NDIS_GUID *v11; // rdi
  unsigned int Flags; // eax
  NTSTATUS v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  unsigned int PnPFlags; // ecx
  unsigned __int16 Length; // ax
  __int64 v26; // rax
  struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *p_WakeOnPattern; // r12
  int v28; // edx
  __int64 v29; // rax
  struct _NDIS_MINIPORT_BLOCK *v30; // rcx
  unsigned int SetMiniport; // eax
  unsigned int v32; // r15d
  bool v33; // zf
  unsigned int v34; // eax
  wchar_t *Buffer; // rdx
  size_t v36; // r8
  char v37[8]; // [rsp+30h] [rbp-D0h]
  struct _NDIS_GUID *v38; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h]
  _STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[248]; // [rsp+90h] [rbp-70h] BYREF

  v8 = (char)a7;
  v10 = a2;
  v40 = a5;
  v11 = a4;
  v38 = a4;
  memset(v43, 0, sizeof(v43));
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      18,
      30,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a3,
      (char)a7);
  }
  if ( !(_DWORD)v10 )
  {
    v13 = 0;
    goto LABEL_31;
  }
  memset(a1, 0, v10);
  if ( !v11 )
  {
    ndisWmiGetGuid(&v38, a3, a6, 0);
    v11 = v38;
    if ( !v38 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v28,
          (_DWORD)v38 + 18,
          (_DWORD)v38 + 31,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a3);
      }
      v13 = -1073741811;
      goto LABEL_31;
    }
  }
  Flags = v11->Flags;
  if ( (Flags & 0x20000000) != 0 )
  {
    v13 = 0;
    v14 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v14 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( !v14 )
    {
      *(_WORD *)&a1->Header.Type = a3->MiniportName.Length;
      memmove(&a1->Header.Size, a3->MiniportName.Buffer, a3->MiniportName.Length);
      goto LABEL_31;
    }
    v15 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
      v15 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
    if ( !v15 )
    {
      *((_QWORD *)&v41 + 1) = a3->NetLuid.Value;
      DWORD1(v41) = a3->IfIndex;
      Length = a3->MiniportName.Length;
      LODWORD(v41) = 1573124;
      *(_OWORD *)&a1->Header.Type = v41;
      LOWORD(a1->PMARPOffload) = Length;
      memmove((char *)&a1->PMARPOffload + 2, a3->MiniportName.Buffer, a3->MiniportName.Length);
      goto LABEL_31;
    }
    v16 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
      v16 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
    if ( v16 )
    {
      v17 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v17 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( v17 )
      {
        v18 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v18 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( v18 )
        {
          v19 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
          if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
            v19 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
          if ( v19 )
          {
            v20 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
            if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
              v20 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
            if ( v20 )
            {
              v21 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
              if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
                v21 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
              if ( v21 )
              {
                v23 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
                if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                  v23 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
                if ( v23 )
                {
                  v26 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
                  if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                    v26 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
                  if ( v26 )
                  {
                    if ( !a5 )
                      goto LABEL_70;
                    v29 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
                    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                      v29 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
                    if ( v29 )
LABEL_70:
                      v13 = -1073741811;
                  }
                  else
                  {
                    ndisNDKWmiGetAdapterCapabilities(a3, v10, (struct _NDIS_WMI_NDK_CAPABILITIES *)a1);
                  }
                }
                else
                {
                  a1->Header.Type = ndisNDKCheckIfEnabledOnMiniport(a3);
                }
              }
              else
              {
                a1->Header.Type = ndisIsRssEnabledForMiniport(a3);
              }
            }
            else
            {
              ndisWmiQueryPMActiveCapabilities(a3, a1);
            }
          }
          else
          {
            a1->Header = (NDIS_OBJECT_HEADER)1835392;
            a1->WakeOnPattern = a3->PMAdminConfig.Value & 3;
            a1->WakeOnMagicPacket = (a3->PMAdminConfig.Value >> 2) & 3;
            a1->DeviceSleepOnDisconnect = (a3->PMAdminConfig.Value >> 4) & 3;
            a1->PMARPOffload = (a3->PMAdminConfig.Value >> 6) & 3;
            a1->PMNSOffload = (a3->PMAdminConfig.Value >> 8) & 3;
            a1->PMWiFiRekeyOffload = (a3->PMAdminConfig.Value >> 10) & 3;
          }
          goto LABEL_31;
        }
        if ( (a3->PnPFlags & 0x4000001) == 0x4000001
          && (unsigned int)(a3->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
        {
          a1->Header.Type = BYTE1(a3->PnPCapabilities) & 1;
          goto LABEL_31;
        }
      }
      else
      {
        PnPFlags = a3->PnPFlags;
        if ( (PnPFlags & 0x4000001) == 0x4000001 && !a3->AoAc )
        {
          a1->Header.Type = (PnPFlags & 0x40) != 0;
          goto LABEL_31;
        }
      }
    }
    else if ( (a3->PnPFlags & 0x8001) == 1 && !a3->AoAc )
    {
      a1->Header.Type = (a3->PnPCapabilities & 8) == 0;
      goto LABEL_31;
    }
LABEL_36:
    v13 = -1073741808;
    goto LABEL_31;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    v13 = 0;
    goto LABEL_31;
  }
  if ( (Flags & 1) == 0 )
    goto LABEL_36;
  if ( (Flags & 0x10) != 0 )
  {
    LODWORD(v10) = v10 - 4;
    p_WakeOnPattern = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a1->WakeOnPattern;
  }
  else if ( (Flags & 0xC) != 0 )
  {
    LODWORD(v10) = v10 - 2;
    p_WakeOnPattern = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a1->Header.Size;
    if ( (Flags & 4) != 0 )
      LODWORD(v10) = ((unsigned int)v10 >> 1) + 1;
  }
  else
  {
    p_WakeOnPattern = a1;
  }
  memset(&v43[112], 0, 136);
  *(_QWORD *)&v43[104] = &ndisIntReqWmi;
  memset(v43, 0, 104);
  *(_DWORD *)&v43[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v43[168]);
  v13 = 0;
  *(_DWORD *)v43 = 15466902;
  *(_DWORD *)&v43[32] = v11->Oid;
  *(_QWORD *)&v43[4] = 2LL;
  *(_QWORD *)&v43[40] = p_WakeOnPattern;
  *(_DWORD *)&v43[48] = v10;
  if ( v40 || (v30 = a7) == 0LL )
    v30 = a3;
  SetMiniport = ndisQuerySetMiniport(v30, v40, (struct _NDIS_OID_REQUEST *)v43, 0, 0LL);
  v32 = SetMiniport;
  if ( SetMiniport )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v37 = SetMiniport;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x20u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a7,
        *(_QWORD *)v37);
    }
    if ( (v11->Flags & 0x200) != 0 )
    {
      if ( (v32 & 0xC0010000) == 0xC0010000 )
        v32 = (unsigned __int16)v32 | 0xC0230000;
      goto LABEL_84;
    }
    if ( v32 == 259
      || v32 == -2147483643
      || (v13 = -1073741823, v32 == -1073741823)
      || v32 == -1073741670
      || v32 == -1073741637 )
    {
LABEL_84:
      v13 = v32;
      v8 = (char)a7;
      goto LABEL_31;
    }
    if ( v32 == -1073676266 )
    {
      v8 = (char)a7;
      v13 = -1073741789;
    }
    else if ( v32 == -1073676268 )
    {
      v8 = (char)a7;
      v13 = -1073741306;
    }
    else
    {
      v33 = v32 == -1073676267;
      v8 = (char)a7;
      if ( v33 )
        v13 = -1073741811;
    }
  }
  else
  {
    v34 = v11->Flags;
    if ( (v34 & 0x10) != 0 )
    {
      a1->Header = (NDIS_OBJECT_HEADER)((unsigned int)v10 / v11->Size);
    }
    else if ( (v34 & 8) != 0 )
    {
      *(_WORD *)&a1->Header.Type = v10;
    }
    else if ( (v34 & 4) != 0 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)p_WakeOnPattern);
      v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v13 >= 0 )
      {
        Buffer = UnicodeString.Buffer;
        v36 = UnicodeString.Length;
        *(_WORD *)&a1->Header.Type = UnicodeString.Length;
        memmove(p_WakeOnPattern, Buffer, v36);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    v8 = (char)a7;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x21u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a3,
      v8,
      v13);
  return (unsigned int)v13;
}
