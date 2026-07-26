/*
 * XREFs of ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF550
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DE87C (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DEF20 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateNicSwitch(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  struct _NDIS_NIC_SWITCH_BLOCK *v2; // rsi
  struct _NDIS_PF_BLOCK *v3; // r14
  struct _NDIS_VPORT_BLOCK *v4; // rdi
  __int64 v6; // rax
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // xmm2_8
  struct _NDIS_NIC_SWITCH_PARAMETERS *v9; // r12
  int v10; // eax
  __m128i v11; // [rsp+40h] [rbp-59h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v12[2]; // [rsp+50h] [rbp-49h]
  _BYTE v13[112]; // [rsp+80h] [rbp-19h] BYREF
  struct _NDIS_NIC_SWITCH_BLOCK *v14; // [rsp+100h] [rbp+67h] BYREF
  struct _NDIS_PF_BLOCK *v15; // [rsp+108h] [rbp+6Fh] BYREF
  struct _NDIS_VPORT_BLOCK *v16; // [rsp+110h] [rbp+77h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = ndisCaptureIovOidContext((__int64)v13, a1);
  v11 = *(__m128i *)v6;
  *(_OWORD *)v12 = *(_OWORD *)(v6 + 16);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      16,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      v1);
  }
  if ( v11.m128i_i8[0] )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v12[1])
      && ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) != &ndisIntReqGeneric
      && !*((_DWORD *)a1 + 10) )
    {
      v9 = *(struct _NDIS_NIC_SWITCH_PARAMETERS **)(v1 + 40);
      v10 = ndisIovInitializeNicSwitch(v8, v9, &v14, &v15, &v16);
      v4 = v16;
      v3 = v15;
      v2 = v14;
      *((_DWORD *)a1 + 10) = v10;
      if ( !v10 )
        *((_DWORD *)a1 + 10) = ndisIovFinalizeNicSwitch(v8, v9, v2, v3, v4);
    }
  }
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      17,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      v1);
  }
}
