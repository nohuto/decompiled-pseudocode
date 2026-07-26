/*
 * XREFs of ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400099A0
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_Dq @ 0x14004A7F0 (WPP_RECORDER_SF_Dq.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisOidTranslateBetweenOids(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // ebx
  int v6; // edx
  int v7; // r8d
  __int64 Pool2; // rax
  int SetMiniport; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[248]; // [rsp+50h] [rbp-B0h] BYREF

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  memset(&v16[1], 0, 0xF7uLL);
  v15[0] = 0LL;
  if ( Oid == 131334 )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_Dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          v7,
          205,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          6,
          (char)a3);
      }
      memset(&v16[112], 0, 136);
      memset(v16, 0, 104);
      *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
      *(_DWORD *)&v16[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v16[168]);
      *(_DWORD *)&v16[88] |= 0x100000u;
      *(_DWORD *)v16 = 15466902;
      *(_DWORD *)&v16[32] = 131332;
      *(_QWORD *)&v16[4] = 2LL;
      *(_QWORD *)&v16[40] = v15;
      *(_DWORD *)&v16[48] = 8;
      Pool2 = ExAllocatePool2(64LL, 64LL, 1903313998LL);
      *(_QWORD *)&a3->NdisReserved[72] = Pool2;
      if ( Pool2 )
      {
        SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v16, 0, 0LL);
        *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = SetMiniport;
        if ( !SetMiniport )
        {
          *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL) = v15[0];
          memset(v16, 0, 104);
          *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
          memset(&v16[112], 0, 136);
          *(_DWORD *)&v16[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
          EtwActivityIdControl(3u, (LPGUID)&v16[168]);
          *(_DWORD *)&v16[88] |= 0x100000u;
          *(_QWORD *)&v16[40] = v15;
          *(_DWORD *)v16 = 15466902;
          *(_DWORD *)&v16[32] = 131333;
          *(_QWORD *)&v16[4] = 2LL;
          *(_DWORD *)&v16[48] = 8;
          v10 = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v16, 0, 0LL);
          *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v10;
          if ( !v10 )
          {
            *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL) = v15[0];
            *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 40LL) = *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL)
                                                                 + *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL);
            memset(v16, 0, 104);
            *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
            memset(&v16[112], 0, 136);
            *(_DWORD *)&v16[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
            EtwActivityIdControl(3u, (LPGUID)&v16[168]);
            *(_DWORD *)&v16[88] |= 0x100000u;
            *(_QWORD *)&v16[40] = v15;
            *(_DWORD *)v16 = 15466902;
            *(_DWORD *)&v16[32] = 131331;
            *(_QWORD *)&v16[4] = 2LL;
            *(_DWORD *)&v16[48] = 8;
            v11 = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v16, 0, 0LL);
            *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v11;
            if ( !v11 )
              *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 48LL) = v15[0];
          }
        }
      }
    }
  }
  else if ( Oid == 131611 && a1->MajorNdisVersion < 6u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        v7,
        204,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        27,
        (char)a3);
    }
    memset(&v16[112], 0, 136);
    memset(v16, 0, 104);
    *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v16[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v16[168]);
    *(_DWORD *)&v16[88] |= 0x100080u;
    *(_DWORD *)v16 = 15466902;
    *(_DWORD *)&v16[32] = 131332;
    *(_QWORD *)&v16[4] = 2LL;
    *(_QWORD *)&v16[40] = v15;
    *(_DWORD *)&v16[48] = 8;
    v12 = ExAllocatePool2(64LL, 64LL, 1903313998LL);
    *(_QWORD *)&a3->NdisReserved[72] = v12;
    if ( v12 )
    {
      v13 = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v16, 0, 0LL);
      *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v13;
      if ( !v13 )
      {
        *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL) = v15[0];
        memset(v16, 0, 104);
        *(_QWORD *)&v16[104] = &ndisIntReqGeneric;
        memset(&v16[112], 0, 136);
        *(_DWORD *)&v16[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
        EtwActivityIdControl(3u, (LPGUID)&v16[168]);
        *(_DWORD *)&v16[88] |= 0x100000u;
        *(_QWORD *)&v16[40] = v15;
        *(_DWORD *)v16 = 15466902;
        *(_DWORD *)&v16[32] = 131333;
        *(_QWORD *)&v16[4] = 2LL;
        *(_DWORD *)&v16[48] = 8;
        v14 = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v16, 0, 0LL);
        *(_DWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 56LL) = v14;
        if ( !v14 )
        {
          *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL) = v15[0];
          *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 40LL) = *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 24LL)
                                                               + *(_QWORD *)(*(_QWORD *)&a3->NdisReserved[72] + 32LL);
        }
      }
    }
  }
}
