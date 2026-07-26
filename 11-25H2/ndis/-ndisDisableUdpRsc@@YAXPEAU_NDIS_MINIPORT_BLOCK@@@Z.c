/*
 * XREFs of ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014B868
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140160A60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z @ 0x1400C8DE8 (-ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisDisableUdpRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  unsigned __int8 *p_UdpRscDisallowed; // rax
  __int64 v4; // r8
  int v5; // edx
  int v6; // eax
  int v7; // [rsp+28h] [rbp-D8h]
  char v8[4]; // [rsp+30h] [rbp-D0h]
  struct _NDIS_OID_REQUEST v9; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v10; // [rsp+140h] [rbp+40h] BYREF
  __int128 v11; // [rsp+150h] [rbp+50h]
  int v12; // [rsp+160h] [rbp+60h]

  Offload = a1->Offload;
  p_UdpRscDisallowed = &Offload->UdpRscDisallowed;
  if ( !Offload || *p_UdpRscDisallowed )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = *p_UdpRscDisallowed;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        6u,
        0xCu,
        (struct _GUID *)&WPP_2699d686e5dd360a3025d50bb4c62d6f_Traceguids,
        (char)Offload,
        *(_DWORD *)v8);
    }
  }
  else
  {
    *p_UdpRscDisallowed = 1;
    if ( ndisIsUdpRscEnabled(&a1->Offload->MiniportCurrentConfig)
      || ndisIsUdpRscEnabled((const struct _NDIS_OFFLOAD *)(v4 + 228)) )
    {
      *(_BYTE *)(v4 + 7) = 1;
      v12 = 0x10000;
      v10 = 0LL;
      LODWORD(v10) = 2360960;
      v11 = 0LL;
      LODWORD(v11) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
      memset(&v9, 0, 0xF8uLL);
      *(_DWORD *)&v9.NdisReserved[16] |= 8u;
      *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v9.NdisReserved[96]);
      v9.PortNumber = 0;
      v9.DATA.QUERY_INFORMATION.InformationBuffer = &v10;
      v9.Header = (NDIS_OBJECT_HEADER)15466902;
      v9.DATA.QUERY_INFORMATION.Oid = -67042804;
      v9.RequestType = NdisRequestSetInformation;
      v9.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
      v6 = ndisQuerySetMiniport(a1, 0LL, &v9, 0, 0LL);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v7 = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          6u,
          0xAu,
          (struct _GUID *)&WPP_2699d686e5dd360a3025d50bb4c62d6f_Traceguids,
          v7);
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        6,
        11,
        (struct _GUID *)&WPP_2699d686e5dd360a3025d50bb4c62d6f_Traceguids);
    }
  }
}
