/*
 * XREFs of ndisIfGetMiniportStatistics @ 0x140150D30
 * Callers:
 *     ndisIfQueryFilterObject @ 0x14014FD60 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x140150540 (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x140013B40 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400804B0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int SetMiniport; // esi
  _QWORD *v7; // r15
  int v8; // edx
  int v9; // edx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _DWORD *v19; // r12
  __int64 v20; // r13
  _QWORD v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[248]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v23[10]; // [rsp+160h] [rbp+60h] BYREF

  SetMiniport = 0;
  memset(v22, 0, sizeof(v22));
  v21[0] = 0LL;
  v7 = a2;
  memset(v23, 0, 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  a2[5] = 0LL;
  a2[6] = 0LL;
  a2[7] = 0LL;
  a2[8] = 0LL;
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi(a1, 3u, 0x3Bu) )
  {
    memset(&v22[112], 0, 136);
    *(_QWORD *)&v22[104] = &ndisIntReqNsi;
    memset(v22, 0, 104);
    *(_DWORD *)&v22[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v22[168]);
    *(_DWORD *)v22 = 15466902;
    *(_DWORD *)&v22[32] = 0;
    *(_QWORD *)&v22[4] = 2LL;
    *(_QWORD *)&v22[40] = 0LL;
    *(_DWORD *)&v22[48] = 0;
    if ( !a3 )
      *(_DWORD *)&v22[88] |= 0x100000u;
    if ( a1->MajorNdisVersion < 6u )
    {
      v19 = &unk_1400F5560;
      v20 = 18LL;
      do
      {
        switch ( *v19 )
        {
          case 0x20202:
            *(_DWORD *)&v22[32] = 131586;
            goto LABEL_18;
          case 0x20208:
            *(_DWORD *)&v22[32] = 131592;
            goto LABEL_18;
          case 0x20219:
            v21[0] = 0LL;
            *(_QWORD *)&v22[40] = v21;
            *v7 = 0LL;
            *(_DWORD *)&v22[32] = 131591;
            *(_DWORD *)&v22[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3) )
              *v7 = v21[0];
            v21[0] = 0LL;
            *(_QWORD *)&v22[40] = v21;
            *(_DWORD *)&v22[32] = 131593;
            *(_DWORD *)&v22[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3) )
              *v7 += v21[0];
            *(_DWORD *)&v22[32] = 131595;
            goto LABEL_29;
          case 0x2021A:
            *v7 = 0LL;
            *(_QWORD *)&v22[40] = v21;
            v21[0] = 0LL;
            *(_DWORD *)&v22[32] = 131585;
            *(_DWORD *)&v22[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3) )
              *v7 = v21[0];
            v21[0] = 0LL;
            *(_QWORD *)&v22[40] = v21;
            *(_DWORD *)&v22[32] = 131587;
            *(_DWORD *)&v22[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3) )
              *v7 += v21[0];
            *(_DWORD *)&v22[32] = 131589;
            goto LABEL_29;
          case 0x2021B:
            v21[0] = 0LL;
            *(_QWORD *)&v22[40] = v21;
            *v7 = 0LL;
            *(_DWORD *)&v22[32] = 131332;
            *(_DWORD *)&v22[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3) )
              *v7 = v21[0];
            *(_DWORD *)&v22[32] = 131333;
LABEL_29:
            v21[0] = 0LL;
            *(_QWORD *)&v22[40] = v21;
            *(_DWORD *)&v22[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3);
            if ( !SetMiniport )
              *v7 += v21[0];
            break;
          case 0x2021C:
            v21[0] = 0LL;
            *v7 = 0LL;
            break;
          default:
            *(_DWORD *)&v22[32] = *v19;
LABEL_18:
            *v7 = 0LL;
            *(_QWORD *)&v22[40] = v21;
            v21[0] = 0LL;
            *(_DWORD *)&v22[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3);
            if ( !SetMiniport )
              *v7 = v21[0];
            break;
        }
        ++v7;
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    else
    {
      *(_DWORD *)&v22[32] = 131334;
      *(_QWORD *)&v22[40] = v23;
      *(_DWORD *)&v22[48] = 152;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          11,
          11,
          (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
          (char)v22,
          (char)a1);
      }
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0, a3);
      if ( !SetMiniport )
      {
        v10 = *(_OWORD *)((char *)&v23[1] + 8);
        *a2 = *(_OWORD *)((char *)v23 + 8);
        v11 = *(_OWORD *)((char *)&v23[2] + 8);
        a2[1] = v10;
        v12 = *(_OWORD *)((char *)&v23[3] + 8);
        a2[2] = v11;
        v13 = *(_OWORD *)((char *)&v23[4] + 8);
        a2[3] = v12;
        v14 = *(_OWORD *)((char *)&v23[5] + 8);
        a2[4] = v13;
        v15 = *(_OWORD *)((char *)&v23[6] + 8);
        a2[5] = v14;
        v16 = *(_OWORD *)((char *)&v23[7] + 8);
        a2[6] = v15;
        v17 = *(_OWORD *)((char *)&v23[8] + 8);
        a2[7] = v16;
        a2[8] = v17;
      }
    }
    ndisDereferenceMiniportForNsi(a1, 3u, 0x3Bu);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      SetMiniport);
  return 0LL;
}
