/*
 * XREFs of ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2970
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400DEA1C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  char v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // xmm2_8
  int v9; // eax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  char v13; // al
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rdx
  int v15; // eax
  _BYTE *OidSourceHandle; // rax
  __int64 v17; // rdx
  int v18; // eax
  UCHAR Revision; // al
  __int64 v20; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *p_VPortParams; // rdx
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *v25; // rdx
  __int64 v26; // r8
  __int128 v27; // xmm1
  __m128i v29; // [rsp+50h] [rbp-98h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v30[2]; // [rsp+60h] [rbp-88h]
  __int128 v31; // [rsp+70h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = ndisCaptureIovOidContext((__int64)&v32, a1);
  v29 = *(__m128i *)v6;
  *(_OWORD *)v30 = *(_OWORD *)(v6 + 16);
  v31 = *(_OWORD *)(v6 + 32);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      64,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      v1);
  }
  v9 = *(_DWORD *)(v1 + 4);
  v10 = -3;
  if ( (v9 & 0xFFFFFFFD) != 0 && v9 != 1 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_48;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x23Cu )
  {
    if ( !v29.m128i_i8[0] )
      goto LABEL_48;
    if ( !v29.m128i_i8[1]
      && !ndisIovNicSwitchWithoutIovSupported(v30[1])
      && (!*((_QWORD *)&v31 + 1) || !v11 || (*(_BYTE *)(*((_QWORD *)&v31 + 1) + 8LL) & 3) != 3) )
    {
LABEL_14:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_47;
    }
    v12 = *(_DWORD *)(v1 + 4);
    if ( (v12 & v10) != 0 )
    {
      if ( v12 == 1 )
      {
        v5 = *(_QWORD *)(v1 + 40);
        if ( !v5 )
          goto LABEL_18;
        v13 = *(_BYTE *)(v5 + 1);
        if ( v13 == 1 )
        {
          *(_DWORD *)(v1 + 52) = 572;
        }
        else if ( v13 == 2 )
        {
          *(_DWORD *)(v1 + 52) = 748;
        }
      }
    }
    else
    {
      v5 = *(_QWORD *)(v1 + 40);
      *(_DWORD *)(v1 + 52) = 0;
      if ( !v5 )
        goto LABEL_18;
    }
    VPortByVPortId = ndisIovFindVPortByVPortId(v8, *(_DWORD *)(v5 + 12));
    if ( VPortByVPortId )
    {
      v15 = *(_DWORD *)(v1 + 4);
      if ( (v15 & 0xFFFFFFFD) == 0 )
      {
        *((_DWORD *)a1 + 10) = 0;
        Revision = VPortByVPortId->VPortParams.Header.Revision;
        if ( Revision == 1 )
        {
          v20 = *(_QWORD *)(v1 + 40);
          p_VPortParams = &VPortByVPortId->VPortParams;
          v22 = 4LL;
          do
          {
            *(_OWORD *)v20 = *(_OWORD *)&p_VPortParams->Header.Type;
            *(_OWORD *)(v20 + 16) = *(_OWORD *)&p_VPortParams->VPortName.Length;
            *(_OWORD *)(v20 + 32) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
            *(_OWORD *)(v20 + 48) = *(_OWORD *)&p_VPortParams->VPortName.String[15];
            *(_OWORD *)(v20 + 64) = *(_OWORD *)&p_VPortParams->VPortName.String[23];
            *(_OWORD *)(v20 + 80) = *(_OWORD *)&p_VPortParams->VPortName.String[31];
            *(_OWORD *)(v20 + 96) = *(_OWORD *)&p_VPortParams->VPortName.String[39];
            v20 += 128LL;
            v23 = *(_OWORD *)&p_VPortParams->VPortName.String[47];
            p_VPortParams = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)p_VPortParams + 128);
            *(_OWORD *)(v20 - 16) = v23;
            --v22;
          }
          while ( v22 );
          *(_OWORD *)v20 = *(_OWORD *)&p_VPortParams->Header.Type;
          *(_OWORD *)(v20 + 16) = *(_OWORD *)&p_VPortParams->VPortName.Length;
          *(_OWORD *)(v20 + 32) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
          *(_QWORD *)(v20 + 48) = *(_QWORD *)&p_VPortParams->VPortName.String[15];
          *(_DWORD *)(v20 + 56) = *(_DWORD *)&p_VPortParams->VPortName.String[19];
          *(_DWORD *)(v1 + 52) = 572;
        }
        else if ( Revision == 2 )
        {
          v24 = *(_QWORD *)(v1 + 40);
          v25 = &VPortByVPortId->VPortParams;
          v26 = 5LL;
          do
          {
            *(_OWORD *)v24 = *(_OWORD *)&v25->Header.Type;
            *(_OWORD *)(v24 + 16) = *(_OWORD *)&v25->VPortName.Length;
            *(_OWORD *)(v24 + 32) = *(_OWORD *)&v25->VPortName.String[7];
            *(_OWORD *)(v24 + 48) = *(_OWORD *)&v25->VPortName.String[15];
            *(_OWORD *)(v24 + 64) = *(_OWORD *)&v25->VPortName.String[23];
            *(_OWORD *)(v24 + 80) = *(_OWORD *)&v25->VPortName.String[31];
            *(_OWORD *)(v24 + 96) = *(_OWORD *)&v25->VPortName.String[39];
            v24 += 128LL;
            v27 = *(_OWORD *)&v25->VPortName.String[47];
            v25 = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)v25 + 128);
            *(_OWORD *)(v24 - 16) = v27;
            --v26;
          }
          while ( v26 );
          *(_OWORD *)v24 = *(_OWORD *)&v25->Header.Type;
          *(_OWORD *)(v24 + 16) = *(_OWORD *)&v25->VPortName.Length;
          *(_OWORD *)(v24 + 32) = *(_OWORD *)&v25->VPortName.String[7];
          *(_OWORD *)(v24 + 48) = *(_OWORD *)&v25->VPortName.String[15];
          *(_OWORD *)(v24 + 64) = *(_OWORD *)&v25->VPortName.String[23];
          *(_OWORD *)(v24 + 80) = *(_OWORD *)&v25->VPortName.String[31];
          *(_QWORD *)(v24 + 96) = *(_QWORD *)&v25->VPortName.String[39];
          *(_DWORD *)(v24 + 104) = *(_DWORD *)&v25->VPortName.String[43];
          *(_DWORD *)(v1 + 52) = 748;
        }
        goto LABEL_47;
      }
      if ( v15 != 1 )
        goto LABEL_48;
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( !OidSourceHandle )
        goto LABEL_14;
      if ( *OidSourceHandle != 18 )
        goto LABEL_14;
      v4 = (char)OidSourceHandle;
      if ( *(_DWORD *)(v5 + 12) )
      {
        if ( *(_BYTE **)(v17 + 80) != OidSourceHandle )
          goto LABEL_14;
      }
      v18 = *(_DWORD *)(v5 + 4);
      if ( (v18 & 0xFFFF0000) != 0
        && ((v18 & 0x20000) == 0 || *(_WORD *)(v5 + 16) <= 0x200u)
        && ((v18 & 0x80000) == 0
         || (*(_DWORD *)(v17 + 64) & 3) == 0 && *(_DWORD *)(v5 + 544) == 1 && *(_DWORD *)(v17 + 656) != 1) )
      {
        *(_QWORD *)(v1 + 152) = v17;
        goto LABEL_48;
      }
    }
LABEL_18:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_47;
  }
  *(_DWORD *)(v1 + 56) = 572;
  *((_DWORD *)a1 + 10) = -1073676268;
LABEL_47:
  v2 = 1;
LABEL_48:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x41u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      v4,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
