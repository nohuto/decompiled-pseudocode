/*
 * XREFs of ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E9B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5C2C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E6328 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  char v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // xmm2_8
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  char v12; // al
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rdx
  int v14; // eax
  _BYTE *OidSourceHandle; // rax
  __int64 v16; // rdx
  int v17; // eax
  UCHAR Revision; // al
  __int64 v19; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *p_VPortParams; // rdx
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int64 v23; // rcx
  _NDIS_NIC_SWITCH_VPORT_PARAMETERS *v24; // rdx
  __int64 v25; // r8
  __int128 v26; // xmm1
  __m128i v28; // [rsp+50h] [rbp-98h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v29[2]; // [rsp+60h] [rbp-88h]
  __int128 v30; // [rsp+70h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = ndisCaptureIovOidContext((__int64)&v31, a1);
  v28 = *(__m128i *)v6;
  *(_OWORD *)v29 = *(_OWORD *)(v6 + 16);
  v30 = *(_OWORD *)(v6 + 32);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x40u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v1);
  v8 = *(_DWORD *)(v1 + 4);
  v9 = -3;
  if ( (v8 & 0xFFFFFFFD) != 0 && v8 != 1 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_48;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x23Cu )
  {
    if ( !v28.m128i_i8[0] )
      goto LABEL_48;
    if ( !v28.m128i_i8[1]
      && !ndisIovNicSwitchWithoutIovSupported(v29[1])
      && (!*((_QWORD *)&v30 + 1) || !v10 || (*(_BYTE *)(*((_QWORD *)&v30 + 1) + 8LL) & 3) != 3) )
    {
LABEL_14:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_47;
    }
    v11 = *(_DWORD *)(v1 + 4);
    if ( (v11 & v9) != 0 )
    {
      if ( v11 == 1 )
      {
        v5 = *(_QWORD *)(v1 + 40);
        if ( !v5 )
          goto LABEL_18;
        v12 = *(_BYTE *)(v5 + 1);
        if ( v12 == 1 )
        {
          *(_DWORD *)(v1 + 52) = 572;
        }
        else if ( v12 == 2 )
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
    VPortByVPortId = ndisIovFindVPortByVPortId(v7, *(_DWORD *)(v5 + 12));
    if ( VPortByVPortId )
    {
      v14 = *(_DWORD *)(v1 + 4);
      if ( (v14 & 0xFFFFFFFD) == 0 )
      {
        *((_DWORD *)a1 + 10) = 0;
        Revision = VPortByVPortId->VPortParams.Header.Revision;
        if ( Revision == 1 )
        {
          v19 = *(_QWORD *)(v1 + 40);
          p_VPortParams = &VPortByVPortId->VPortParams;
          v21 = 4LL;
          do
          {
            *(_OWORD *)v19 = *(_OWORD *)&p_VPortParams->Header.Type;
            *(_OWORD *)(v19 + 16) = *(_OWORD *)&p_VPortParams->VPortName.Length;
            *(_OWORD *)(v19 + 32) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
            *(_OWORD *)(v19 + 48) = *(_OWORD *)&p_VPortParams->VPortName.String[15];
            *(_OWORD *)(v19 + 64) = *(_OWORD *)&p_VPortParams->VPortName.String[23];
            *(_OWORD *)(v19 + 80) = *(_OWORD *)&p_VPortParams->VPortName.String[31];
            *(_OWORD *)(v19 + 96) = *(_OWORD *)&p_VPortParams->VPortName.String[39];
            v19 += 128LL;
            v22 = *(_OWORD *)&p_VPortParams->VPortName.String[47];
            p_VPortParams = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)p_VPortParams + 128);
            *(_OWORD *)(v19 - 16) = v22;
            --v21;
          }
          while ( v21 );
          *(_OWORD *)v19 = *(_OWORD *)&p_VPortParams->Header.Type;
          *(_OWORD *)(v19 + 16) = *(_OWORD *)&p_VPortParams->VPortName.Length;
          *(_OWORD *)(v19 + 32) = *(_OWORD *)&p_VPortParams->VPortName.String[7];
          *(_QWORD *)(v19 + 48) = *(_QWORD *)&p_VPortParams->VPortName.String[15];
          *(_DWORD *)(v19 + 56) = *(_DWORD *)&p_VPortParams->VPortName.String[19];
          *(_DWORD *)(v1 + 52) = 572;
        }
        else if ( Revision == 2 )
        {
          v23 = *(_QWORD *)(v1 + 40);
          v24 = &VPortByVPortId->VPortParams;
          v25 = 5LL;
          do
          {
            *(_OWORD *)v23 = *(_OWORD *)&v24->Header.Type;
            *(_OWORD *)(v23 + 16) = *(_OWORD *)&v24->VPortName.Length;
            *(_OWORD *)(v23 + 32) = *(_OWORD *)&v24->VPortName.String[7];
            *(_OWORD *)(v23 + 48) = *(_OWORD *)&v24->VPortName.String[15];
            *(_OWORD *)(v23 + 64) = *(_OWORD *)&v24->VPortName.String[23];
            *(_OWORD *)(v23 + 80) = *(_OWORD *)&v24->VPortName.String[31];
            *(_OWORD *)(v23 + 96) = *(_OWORD *)&v24->VPortName.String[39];
            v23 += 128LL;
            v26 = *(_OWORD *)&v24->VPortName.String[47];
            v24 = (_NDIS_NIC_SWITCH_VPORT_PARAMETERS *)((char *)v24 + 128);
            *(_OWORD *)(v23 - 16) = v26;
            --v25;
          }
          while ( v25 );
          *(_OWORD *)v23 = *(_OWORD *)&v24->Header.Type;
          *(_OWORD *)(v23 + 16) = *(_OWORD *)&v24->VPortName.Length;
          *(_OWORD *)(v23 + 32) = *(_OWORD *)&v24->VPortName.String[7];
          *(_OWORD *)(v23 + 48) = *(_OWORD *)&v24->VPortName.String[15];
          *(_OWORD *)(v23 + 64) = *(_OWORD *)&v24->VPortName.String[23];
          *(_OWORD *)(v23 + 80) = *(_OWORD *)&v24->VPortName.String[31];
          *(_QWORD *)(v23 + 96) = *(_QWORD *)&v24->VPortName.String[39];
          *(_DWORD *)(v23 + 104) = *(_DWORD *)&v24->VPortName.String[43];
          *(_DWORD *)(v1 + 52) = 748;
        }
        goto LABEL_47;
      }
      if ( v14 != 1 )
        goto LABEL_48;
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( !OidSourceHandle )
        goto LABEL_14;
      if ( *OidSourceHandle != 18 )
        goto LABEL_14;
      v4 = (char)OidSourceHandle;
      if ( *(_DWORD *)(v5 + 12) )
      {
        if ( *(_BYTE **)(v16 + 80) != OidSourceHandle )
          goto LABEL_14;
      }
      v17 = *(_DWORD *)(v5 + 4);
      if ( (v17 & 0xFFFF0000) != 0
        && ((v17 & 0x20000) == 0 || *(_WORD *)(v5 + 16) <= 0x200u)
        && ((v17 & 0x80000) == 0
         || (*(_DWORD *)(v16 + 64) & 3) == 0 && *(_DWORD *)(v5 + 544) == 1 && *(_DWORD *)(v16 + 656) != 1) )
      {
        *(_QWORD *)(v1 + 152) = v16;
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x41u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v4,
      v2,
      *((_DWORD *)a1 + 10));
  return v2;
}
