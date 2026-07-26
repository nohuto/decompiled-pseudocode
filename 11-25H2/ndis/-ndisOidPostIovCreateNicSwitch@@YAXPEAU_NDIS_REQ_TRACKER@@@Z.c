/*
 * XREFs of ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E5A8C (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E6130 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E6328 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateNicSwitch(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  struct _NDIS_NIC_SWITCH_BLOCK *v2; // rsi
  struct _NDIS_PF_BLOCK *v3; // r14
  struct _NDIS_VPORT_BLOCK *v4; // rdi
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // xmm2_8
  struct _NDIS_NIC_SWITCH_PARAMETERS *v8; // r12
  int v9; // eax
  __m128i v10; // [rsp+40h] [rbp-59h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v11[2]; // [rsp+50h] [rbp-49h]
  _BYTE v12[112]; // [rsp+80h] [rbp-19h] BYREF
  struct _NDIS_NIC_SWITCH_BLOCK *v13; // [rsp+100h] [rbp+67h] BYREF
  struct _NDIS_PF_BLOCK *v14; // [rsp+108h] [rbp+6Fh] BYREF
  struct _NDIS_VPORT_BLOCK *v15; // [rsp+110h] [rbp+77h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = ndisCaptureIovOidContext((__int64)v12, a1);
  v10 = *(__m128i *)v6;
  *(_OWORD *)v11 = *(_OWORD *)(v6 + 16);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x10u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v1);
  if ( v10.m128i_i8[0] )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v11[1])
      && ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) != &ndisIntReqGeneric
      && !*((_DWORD *)a1 + 10) )
    {
      v8 = *(struct _NDIS_NIC_SWITCH_PARAMETERS **)(v1 + 40);
      v9 = ndisIovInitializeNicSwitch(v7, v8, &v13, &v14, &v15);
      v4 = v15;
      v3 = v14;
      v2 = v13;
      *((_DWORD *)a1 + 10) = v9;
      if ( !v9 )
        *((_DWORD *)a1 + 10) = ndisIovFinalizeNicSwitch(v7, v8, v2, v3, v4);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x11u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v1);
}
