/*
 * XREFs of ndisIfGetMiniportStatistics @ 0x14015BA20
 * Callers:
 *     ndisIfQueryFilterObject @ 0x14015AA30 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x14015B230 (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000EB80 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14005DD00 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int SetMiniport; // esi
  _QWORD *v7; // r15
  int v8; // edx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _DWORD *v18; // r12
  __int64 v19; // r13
  _QWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[248]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v22[10]; // [rsp+160h] [rbp+60h] BYREF

  SetMiniport = 0;
  memset(v21, 0, sizeof(v21));
  v20[0] = 0LL;
  v7 = a2;
  memset(v22, 0, 152);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
    memset(&v21[112], 0, 136);
    *(_QWORD *)&v21[104] = &ndisIntReqNsi;
    memset(v21, 0, 104);
    *(_DWORD *)&v21[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v21[168]);
    *(_DWORD *)v21 = 15466902;
    *(_DWORD *)&v21[32] = 0;
    *(_QWORD *)&v21[4] = 2LL;
    *(_QWORD *)&v21[40] = 0LL;
    *(_DWORD *)&v21[48] = 0;
    if ( !a3 )
      *(_DWORD *)&v21[88] |= 0x100000u;
    if ( a1->MajorNdisVersion < 6u )
    {
      v18 = &unk_1400FE900;
      v19 = 18LL;
      do
      {
        switch ( *v18 )
        {
          case 0x20202:
            *(_DWORD *)&v21[32] = 131586;
            goto LABEL_18;
          case 0x20208:
            *(_DWORD *)&v21[32] = 131592;
            goto LABEL_18;
          case 0x20219:
            v20[0] = 0LL;
            *(_QWORD *)&v21[40] = v20;
            *v7 = 0LL;
            *(_DWORD *)&v21[32] = 131591;
            *(_DWORD *)&v21[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3) )
              *v7 = v20[0];
            v20[0] = 0LL;
            *(_QWORD *)&v21[40] = v20;
            *(_DWORD *)&v21[32] = 131593;
            *(_DWORD *)&v21[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3) )
              *v7 += v20[0];
            *(_DWORD *)&v21[32] = 131595;
            goto LABEL_29;
          case 0x2021A:
            *v7 = 0LL;
            *(_QWORD *)&v21[40] = v20;
            v20[0] = 0LL;
            *(_DWORD *)&v21[32] = 131585;
            *(_DWORD *)&v21[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3) )
              *v7 = v20[0];
            v20[0] = 0LL;
            *(_QWORD *)&v21[40] = v20;
            *(_DWORD *)&v21[32] = 131587;
            *(_DWORD *)&v21[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3) )
              *v7 += v20[0];
            *(_DWORD *)&v21[32] = 131589;
            goto LABEL_29;
          case 0x2021B:
            v20[0] = 0LL;
            *(_QWORD *)&v21[40] = v20;
            *v7 = 0LL;
            *(_DWORD *)&v21[32] = 131332;
            *(_DWORD *)&v21[48] = 8;
            if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3) )
              *v7 = v20[0];
            *(_DWORD *)&v21[32] = 131333;
LABEL_29:
            v20[0] = 0LL;
            *(_QWORD *)&v21[40] = v20;
            *(_DWORD *)&v21[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3);
            if ( !SetMiniport )
              *v7 += v20[0];
            break;
          case 0x2021C:
            v20[0] = 0LL;
            *v7 = 0LL;
            break;
          default:
            *(_DWORD *)&v21[32] = *v18;
LABEL_18:
            *v7 = 0LL;
            *(_QWORD *)&v21[40] = v20;
            v20[0] = 0LL;
            *(_DWORD *)&v21[48] = 8;
            SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3);
            if ( !SetMiniport )
              *v7 = v20[0];
            break;
        }
        ++v7;
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    else
    {
      *(_DWORD *)&v21[32] = 131334;
      *(_QWORD *)&v21[40] = v22;
      *(_DWORD *)&v21[48] = 152;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xBu,
          0xBu,
          (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
          (char)v21,
          a1);
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0, a3);
      if ( !SetMiniport )
      {
        v9 = *(_OWORD *)((char *)&v22[1] + 8);
        *a2 = *(_OWORD *)((char *)v22 + 8);
        v10 = *(_OWORD *)((char *)&v22[2] + 8);
        a2[1] = v9;
        v11 = *(_OWORD *)((char *)&v22[3] + 8);
        a2[2] = v10;
        v12 = *(_OWORD *)((char *)&v22[4] + 8);
        a2[3] = v11;
        v13 = *(_OWORD *)((char *)&v22[5] + 8);
        a2[4] = v12;
        v14 = *(_OWORD *)((char *)&v22[6] + 8);
        a2[5] = v13;
        v15 = *(_OWORD *)((char *)&v22[7] + 8);
        a2[6] = v14;
        v16 = *(_OWORD *)((char *)&v22[8] + 8);
        a2[7] = v15;
        a2[8] = v16;
      }
    }
    ndisDereferenceMiniportForNsi(a1, 3u, 0x3Bu);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
