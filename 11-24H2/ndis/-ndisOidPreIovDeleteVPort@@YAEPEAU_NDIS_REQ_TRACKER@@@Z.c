/*
 * XREFs of ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400DEA1C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovDeleteVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // xmm2_8
  char v6; // bl
  __int64 v7; // rcx
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  _NDIS_OPEN_BLOCK *v9; // rbp
  unsigned int v10; // edx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  __m128i v13; // [rsp+40h] [rbp-98h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v14[2]; // [rsp+50h] [rbp-88h]
  __int128 v15; // [rsp+60h] [rbp-78h]
  __int64 v16; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v16, a1);
  v13 = *(__m128i *)v3;
  *(_OWORD *)v14 = *(_OWORD *)(v3 + 16);
  v15 = *(_OWORD *)(v3 + 32);
  v5 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v3, 8).m128i_u64[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      60,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  v6 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_20;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_21;
  }
  if ( !v13.m128i_i8[0] )
    goto LABEL_7;
  if ( (v13.m128i_i8[1]
     || ndisIovNicSwitchWithoutIovSupported(v14[1])
     || *((_QWORD *)&v15 + 1) && v7 && (*(_BYTE *)(*((_QWORD *)&v15 + 1) + 8LL) & 3) == 3)
    && (OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1),
        (v9 = OidSourceHandle) != 0LL)
    && OidSourceHandle->Header.Type == 18
    && (v10 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) != 0 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v5, v10);
    if ( VPortByVPortId && VPortByVPortId->Open == v9 )
    {
      *(_QWORD *)(v1 + 152) = VPortByVPortId;
LABEL_7:
      v6 = 0;
      goto LABEL_21;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
  }
  else
  {
LABEL_20:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Du,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v6,
      *((_DWORD *)a1 + 10));
  return v6;
}
