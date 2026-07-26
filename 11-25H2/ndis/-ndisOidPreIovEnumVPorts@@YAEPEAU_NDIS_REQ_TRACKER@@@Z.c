/*
 * XREFs of ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E8410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E50AC (-ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E5BFC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E6328 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rsi
  struct _NDIS_REQ_TRACKER *v2; // rdi
  unsigned int Blink; // r15d
  _LIST_ENTRY *v4; // r12
  char v5; // r13
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // xmm2_8
  struct _NDIS_MINIPORT_BLOCK *v8; // r14
  int *v9; // rbx
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r10d
  PVOID InformationBuffer; // rsi
  struct _NDIS_OID_REQUEST *v16; // rcx
  _LIST_ENTRY *OidSourceHandle; // rax
  unsigned __int16 v18; // dx
  struct _NDIS_PF_BLOCK *PFBlock; // rsi
  _LIST_ENTRY *v20; // rbx
  struct _NDIS_VPORT_BLOCK *p_Blink; // rbx
  _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rax
  KIRQL v26; // dl
  struct _NDIS_VPORT_BLOCK *Flink; // rax
  _LIST_ENTRY *p_SwitchLink; // rcx
  _DWORD *v29; // rax
  struct _NDIS_VPORT_BLOCK *v30; // rsi
  unsigned int v31; // eax
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v32; // r14
  struct _NDIS_VPORT_BLOCK *v33; // rdx
  KIRQL v34; // dl
  char v35[8]; // [rsp+30h] [rbp-A9h]
  _LIST_ENTRY *VFByVFId; // [rsp+40h] [rbp-99h]
  struct _NDIS_PF_BLOCK *v37; // [rsp+48h] [rbp-91h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+50h] [rbp-89h]
  _NDIS_OPEN_BLOCK *v39; // [rsp+58h] [rbp-81h]
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v40; // [rsp+60h] [rbp-79h]
  __m128i v41; // [rsp+70h] [rbp-69h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v42[2]; // [rsp+80h] [rbp-59h]
  __int128 v43; // [rsp+90h] [rbp-49h]
  char v44[128]; // [rsp+B0h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+148h] [rbp+6Fh] BYREF
  struct _NDIS_OID_REQUEST *v47; // [rsp+150h] [rbp+77h]
  unsigned int v48; // [rsp+158h] [rbp+7Fh]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v47 = v1;
  v2 = a1;
  v39 = 0LL;
  SwitchBySwitchId = 0LL;
  Blink = 0;
  VFByVFId = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  NewIrql = 0;
  v5 = 1;
  v6 = ndisCaptureIovOidContext((__int64)v44, a1);
  v41 = *(__m128i *)v6;
  *(_OWORD *)v42 = *(_OWORD *)(v6 + 16);
  v43 = *(_OWORD *)(v6 + 32);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  v8 = v7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Eu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v2,
      v7);
  v9 = (int *)((char *)v2 + 40);
  v1->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v10 = (_DWORD *)*((_QWORD *)v2 + 4);
  if ( v10[1] != 12 )
    goto LABEL_17;
  *v9 = 0;
  if ( v10[12] < 0x1Cu )
  {
    v11 = -1073676268;
LABEL_8:
    v10[17] = 28;
    *v9 = v11;
    *(_DWORD *)(*((_QWORD *)v2 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v2 + 4) + 64LL) = 0;
    goto LABEL_9;
  }
  if ( v10[13] < 0x1Cu )
  {
    v11 = -1073676266;
    goto LABEL_8;
  }
  if ( !v41.m128i_i8[0] )
  {
    v5 = 0;
    goto LABEL_18;
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(v42[1])
    && (!*((_QWORD *)&v43 + 1) || !v12 || (*(_BYTE *)(*((_QWORD *)&v43 + 1) + 8LL) & 3) != 3) )
  {
    v5 = 1;
LABEL_17:
    *v9 = -1073741637;
    goto LABEL_18;
  }
  InformationBuffer = v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v16 = v47;
  *(_DWORD *)(*((_QWORD *)v2 + 4) + 60LL) = v13;
  *(_DWORD *)(*((_QWORD *)v2 + 4) + 64LL) = 28;
  OidSourceHandle = (_LIST_ENTRY *)ndisGetOidSourceHandle(v16);
  if ( OidSourceHandle )
  {
    if ( LOBYTE(OidSourceHandle->Flink) == 18 )
      v4 = OidSourceHandle;
    v39 = (_NDIS_OPEN_BLOCK *)v4;
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 2) != 0 )
  {
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, *((_DWORD *)InformationBuffer + 2));
    if ( !SwitchBySwitchId )
    {
      *v9 = -1073741811;
      goto LABEL_9;
    }
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 1) == 0 )
  {
    PFBlock = 0LL;
LABEL_35:
    v20 = 0LL;
    goto LABEL_36;
  }
  v18 = *((_WORD *)InformationBuffer + 6);
  if ( v18 == 0xFFFF )
  {
    PFBlock = v7->PFBlock;
    v37 = PFBlock;
    if ( !PFBlock )
    {
LABEL_31:
      *((_DWORD *)v2 + 10) = -1073741811;
      goto LABEL_9;
    }
    goto LABEL_35;
  }
  VFByVFId = ndisIovFindVFByVFId(v7, v18);
  v20 = VFByVFId;
  if ( !VFByVFId )
    goto LABEL_31;
  PFBlock = 0LL;
LABEL_36:
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
  if ( v4 )
  {
    if ( PFBlock )
    {
      p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
    }
    else if ( v20 )
    {
      p_Blink = (struct _NDIS_VPORT_BLOCK *)&v20[5];
    }
    else
    {
      if ( !SwitchBySwitchId )
      {
        Blink = (unsigned int)v4[51].Blink;
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&v4[52];
        goto LABEL_39;
      }
      p_Blink = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
    }
    Flink = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
    if ( (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink != p_Blink )
    {
      v22 = VFByVFId;
      do
      {
        if ( VFByVFId || (p_SwitchLink = &Flink->FunctionLink, PFBlock) )
          p_SwitchLink = &Flink->SwitchLink;
        if ( p_SwitchLink->Flink == v4 )
          ++Blink;
        Flink = (struct _NDIS_VPORT_BLOCK *)Flink->AdapterLink.Flink;
      }
      while ( Flink != p_Blink );
      v2 = a1;
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  if ( PFBlock )
  {
    Blink = *((_DWORD *)PFBlock + 7);
    p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
  }
  else
  {
    if ( !v20 )
    {
      v22 = VFByVFId;
      if ( SwitchBySwitchId )
      {
        Blink = (unsigned int)SwitchBySwitchId[3].Flink;
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
      }
      else
      {
        Blink = v7->NumActiveVPorts;
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&v7->VPortList;
      }
      goto LABEL_40;
    }
    Blink = HIDWORD(v20[4].Blink);
    p_Blink = (struct _NDIS_VPORT_BLOCK *)&v20[5];
  }
LABEL_39:
  v22 = VFByVFId;
LABEL_40:
  v23 = *((_QWORD *)v2 + 4);
  v24 = 576 * Blink + 28;
  v48 = v24;
  *(_DWORD *)(v23 + 68) = v24;
  v25 = *((_QWORD *)v2 + 4);
  if ( v24 > *(_DWORD *)(v25 + 52) )
  {
    v26 = NewIrql;
    *((_DWORD *)v2 + 10) = -1073676266;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v26);
    goto LABEL_9;
  }
  v29 = *(_DWORD **)(v25 + 40);
  *v29 = 1835392;
  v29[4] = 28;
  v29[5] = Blink;
  v29[6] = 576;
  v30 = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
  v40 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)(v29 + 7);
  v31 = 0;
  LODWORD(v47) = 0;
  if ( v30 == p_Blink )
    goto LABEL_79;
  v32 = v40;
  while ( v31 < Blink )
  {
    if ( v22 || v37 )
    {
      v33 = (struct _NDIS_VPORT_BLOCK *)((char *)v30 - 48);
LABEL_74:
      v30 = (struct _NDIS_VPORT_BLOCK *)v30->AdapterLink.Flink;
      if ( !v39 )
        goto LABEL_76;
      goto LABEL_75;
    }
    if ( SwitchBySwitchId )
    {
      v33 = (struct _NDIS_VPORT_BLOCK *)((char *)v30 - 32);
      goto LABEL_74;
    }
    if ( !v39 )
    {
      v33 = v30;
      v30 = (struct _NDIS_VPORT_BLOCK *)v30->AdapterLink.Flink;
LABEL_76:
      ndisIovCopyVPortInfo(v32, v33);
      v32 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)((char *)v32 + 576);
      v31 = (_DWORD)v47 + 1;
      LODWORD(v47) = (_DWORD)v47 + 1;
      goto LABEL_77;
    }
    v33 = (struct _NDIS_VPORT_BLOCK *)((char *)v30 - 16);
    v30 = (struct _NDIS_VPORT_BLOCK *)v30->AdapterLink.Flink;
LABEL_75:
    if ( v39 == v33->Open )
      goto LABEL_76;
LABEL_77:
    v22 = VFByVFId;
    if ( v30 == p_Blink )
      break;
  }
  v2 = a1;
  v8 = v7;
  v24 = v48;
LABEL_79:
  v34 = NewIrql;
  v8->MiniportThread = 0LL;
  KeReleaseSpinLock(&v8->Lock, v34);
  *((_DWORD *)v2 + 10) = 0;
  *(_DWORD *)(*((_QWORD *)v2 + 4) + 60LL) = v24;
LABEL_9:
  v5 = 1;
LABEL_18:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v35 = *((_DWORD *)v2 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      *(_QWORD *)v35);
  }
  return v5;
}
