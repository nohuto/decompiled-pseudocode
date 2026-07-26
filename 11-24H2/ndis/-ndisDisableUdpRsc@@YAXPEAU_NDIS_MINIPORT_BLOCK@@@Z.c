/*
 * XREFs of ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401409A8
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1401541F0 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z @ 0x1400C1BB8 (-ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisDisableUdpRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v3; // edx
  _NDIS_MINIPORT_OFFLOAD *Offload; // r8
  int v5; // r9d
  __int64 v6; // r8
  int v7; // ecx
  unsigned __int8 *p_UdpRscDisallowed; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // edx
  char v12; // cl
  struct _NDIS_OID_REQUEST v13; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+140h] [rbp+40h] BYREF
  __int128 v15; // [rsp+150h] [rbp+50h]
  int v16; // [rsp+160h] [rbp+60h]

  IsEnabledDeviceUsageNoInline = Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline();
  Offload = a1->Offload;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !Offload )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v5 = 10;
      goto LABEL_5;
    }
    if ( Offload->UdpRscDisallowed )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          6u,
          0xDu,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          (char)a1,
          (char)Offload,
          Offload->UdpRscDisallowed);
    }
    else
    {
      Offload->UdpRscDisallowed = 1;
      if ( ndisIsUdpRscEnabled(&Offload->MiniportCurrentConfig)
        || ndisIsUdpRscEnabled((const struct _NDIS_OFFLOAD *)(v6 + 228)) )
      {
        *(_BYTE *)(v6 + 7) = 1;
        v16 = 0x10000;
        v14 = 0LL;
        LODWORD(v14) = 2360960;
        v15 = 0LL;
        LODWORD(v15) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
        memset(&v13, 0, 0xF8uLL);
        *(_DWORD *)&v13.NdisReserved[16] |= 8u;
        *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v13.NdisReserved[96]);
        v13.PortNumber = 0;
        v13.DATA.QUERY_INFORMATION.InformationBuffer = &v14;
        v13.Header = (NDIS_OBJECT_HEADER)15466902;
        v13.DATA.QUERY_INFORMATION.Oid = -67042804;
        v13.RequestType = NdisRequestSetInformation;
        v13.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
        v7 = ndisQuerySetMiniport(a1, 0LL, &v13, 0, 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            6u,
            0xBu,
            (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
            (char)a1,
            v7);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 12;
LABEL_5:
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          6,
          v5,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          (char)a1);
      }
    }
  }
  else
  {
    p_UdpRscDisallowed = &Offload->UdpRscDisallowed;
    if ( !Offload || *p_UdpRscDisallowed )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          6u,
          0x10u,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          (char)Offload,
          *p_UdpRscDisallowed);
    }
    else
    {
      *p_UdpRscDisallowed = 1;
      if ( ndisIsUdpRscEnabled(&a1->Offload->MiniportCurrentConfig)
        || ndisIsUdpRscEnabled((const struct _NDIS_OFFLOAD *)(v9 + 228)) )
      {
        *(_BYTE *)(v9 + 7) = 1;
        v16 = 0x10000;
        v14 = 0LL;
        LODWORD(v14) = 2360960;
        v15 = 0LL;
        LODWORD(v15) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
        memset(&v13, 0, 0xF8uLL);
        *(_DWORD *)&v13.NdisReserved[16] |= 8u;
        *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v13.NdisReserved[96]);
        v13.PortNumber = 0;
        v13.DATA.QUERY_INFORMATION.InformationBuffer = &v14;
        v13.Header = (NDIS_OBJECT_HEADER)15466902;
        v13.DATA.QUERY_INFORMATION.Oid = -67042804;
        v13.RequestType = NdisRequestSetInformation;
        v13.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
        v12 = ndisQuerySetMiniport(a1, 0LL, &v13, 0, 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v11,
            6,
            14,
            (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
            v12);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          6,
          15,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids);
      }
    }
  }
}
