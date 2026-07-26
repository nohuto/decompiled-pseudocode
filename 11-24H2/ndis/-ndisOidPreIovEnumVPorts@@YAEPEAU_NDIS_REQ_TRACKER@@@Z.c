/*
 * XREFs of ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1200
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008C0C0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DDE9C (-ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rsi
  struct _NDIS_REQ_TRACKER *v2; // rdi
  unsigned int Blink; // r15d
  _LIST_ENTRY *v4; // r12
  char v5; // r13
  __int64 v6; // rax
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // xmm2_8
  struct _NDIS_MINIPORT_BLOCK *v9; // r14
  int *v10; // rbx
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r10d
  PVOID InformationBuffer; // rsi
  struct _NDIS_OID_REQUEST *v17; // rcx
  _LIST_ENTRY *OidSourceHandle; // rax
  unsigned __int16 v19; // dx
  struct _NDIS_PF_BLOCK *PFBlock; // rsi
  _LIST_ENTRY *v21; // rbx
  struct _NDIS_VPORT_BLOCK *p_Blink; // rbx
  _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r12d
  __int64 v26; // rax
  KIRQL v27; // dl
  struct _NDIS_VPORT_BLOCK *Flink; // rax
  _LIST_ENTRY *p_SwitchLink; // rcx
  _DWORD *v30; // rax
  struct _NDIS_VPORT_BLOCK *v31; // rsi
  unsigned int v32; // eax
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v33; // r14
  struct _NDIS_VPORT_BLOCK *v34; // rdx
  KIRQL v35; // dl
  char v36[8]; // [rsp+30h] [rbp-A9h]
  _LIST_ENTRY *VFByVFId; // [rsp+40h] [rbp-99h]
  struct _NDIS_PF_BLOCK *v38; // [rsp+48h] [rbp-91h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+50h] [rbp-89h]
  _NDIS_OPEN_BLOCK *v40; // [rsp+58h] [rbp-81h]
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v41; // [rsp+60h] [rbp-79h]
  __m128i v42; // [rsp+70h] [rbp-69h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v43[2]; // [rsp+80h] [rbp-59h]
  __int128 v44; // [rsp+90h] [rbp-49h]
  char v45[128]; // [rsp+B0h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+148h] [rbp+6Fh] BYREF
  struct _NDIS_OID_REQUEST *v48; // [rsp+150h] [rbp+77h]
  unsigned int v49; // [rsp+158h] [rbp+7Fh]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v48 = v1;
  v2 = a1;
  v40 = 0LL;
  SwitchBySwitchId = 0LL;
  Blink = 0;
  VFByVFId = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  NewIrql = 0;
  v5 = 1;
  v6 = ndisCaptureIovOidContext((__int64)v45, a1);
  v42 = *(__m128i *)v6;
  *(_OWORD *)v43 = *(_OWORD *)(v6 + 16);
  v44 = *(_OWORD *)(v6 + 32);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  v9 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      62,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v2,
      (char)v8);
  }
  v10 = (int *)((char *)v2 + 40);
  v1->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v11 = (_DWORD *)*((_QWORD *)v2 + 4);
  if ( v11[1] != 12 )
    goto LABEL_17;
  *v10 = 0;
  if ( v11[12] < 0x1Cu )
  {
    v12 = -1073676268;
LABEL_8:
    v11[17] = 28;
    *v10 = v12;
    *(_DWORD *)(*((_QWORD *)v2 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v2 + 4) + 64LL) = 0;
    goto LABEL_9;
  }
  if ( v11[13] < 0x1Cu )
  {
    v12 = -1073676266;
    goto LABEL_8;
  }
  if ( !v42.m128i_i8[0] )
  {
    v5 = 0;
    goto LABEL_18;
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(v43[1])
    && (!*((_QWORD *)&v44 + 1) || !v13 || (*(_BYTE *)(*((_QWORD *)&v44 + 1) + 8LL) & 3) != 3) )
  {
    v5 = 1;
LABEL_17:
    *v10 = -1073741637;
    goto LABEL_18;
  }
  InformationBuffer = v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v17 = v48;
  *(_DWORD *)(*((_QWORD *)v2 + 4) + 60LL) = v14;
  *(_DWORD *)(*((_QWORD *)v2 + 4) + 64LL) = 28;
  OidSourceHandle = (_LIST_ENTRY *)ndisGetOidSourceHandle(v17);
  if ( OidSourceHandle )
  {
    if ( LOBYTE(OidSourceHandle->Flink) == 18 )
      v4 = OidSourceHandle;
    v40 = (_NDIS_OPEN_BLOCK *)v4;
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 2) != 0 )
  {
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v8, *((_DWORD *)InformationBuffer + 2));
    if ( !SwitchBySwitchId )
    {
      *v10 = -1073741811;
      goto LABEL_9;
    }
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 1) == 0 )
  {
    PFBlock = 0LL;
LABEL_35:
    v21 = 0LL;
    goto LABEL_36;
  }
  v19 = *((_WORD *)InformationBuffer + 6);
  if ( v19 == 0xFFFF )
  {
    PFBlock = v8->PFBlock;
    v38 = PFBlock;
    if ( !PFBlock )
    {
LABEL_31:
      *((_DWORD *)v2 + 10) = -1073741811;
      goto LABEL_9;
    }
    goto LABEL_35;
  }
  VFByVFId = ndisIovFindVFByVFId(v8, v19);
  v21 = VFByVFId;
  if ( !VFByVFId )
    goto LABEL_31;
  PFBlock = 0LL;
LABEL_36:
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
  if ( v4 )
  {
    if ( PFBlock )
    {
      p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
    }
    else if ( v21 )
    {
      p_Blink = (struct _NDIS_VPORT_BLOCK *)&v21[5];
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
      v23 = VFByVFId;
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
    if ( !v21 )
    {
      v23 = VFByVFId;
      if ( SwitchBySwitchId )
      {
        Blink = (unsigned int)SwitchBySwitchId[3].Flink;
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
      }
      else
      {
        Blink = v8->NumActiveVPorts;
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&v8->VPortList;
      }
      goto LABEL_40;
    }
    Blink = HIDWORD(v21[4].Blink);
    p_Blink = (struct _NDIS_VPORT_BLOCK *)&v21[5];
  }
LABEL_39:
  v23 = VFByVFId;
LABEL_40:
  v24 = *((_QWORD *)v2 + 4);
  v25 = 576 * Blink + 28;
  v49 = v25;
  *(_DWORD *)(v24 + 68) = v25;
  v26 = *((_QWORD *)v2 + 4);
  if ( v25 > *(_DWORD *)(v26 + 52) )
  {
    v27 = NewIrql;
    *((_DWORD *)v2 + 10) = -1073676266;
    v8->MiniportThread = 0LL;
    KeReleaseSpinLock(&v8->Lock, v27);
    goto LABEL_9;
  }
  v30 = *(_DWORD **)(v26 + 40);
  *v30 = 1835392;
  v30[4] = 28;
  v30[5] = Blink;
  v30[6] = 576;
  v31 = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
  v41 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)(v30 + 7);
  v32 = 0;
  LODWORD(v48) = 0;
  if ( v31 == p_Blink )
    goto LABEL_79;
  v33 = v41;
  while ( v32 < Blink )
  {
    if ( v23 || v38 )
    {
      v34 = (struct _NDIS_VPORT_BLOCK *)((char *)v31 - 48);
LABEL_74:
      v31 = (struct _NDIS_VPORT_BLOCK *)v31->AdapterLink.Flink;
      if ( !v40 )
        goto LABEL_76;
      goto LABEL_75;
    }
    if ( SwitchBySwitchId )
    {
      v34 = (struct _NDIS_VPORT_BLOCK *)((char *)v31 - 32);
      goto LABEL_74;
    }
    if ( !v40 )
    {
      v34 = v31;
      v31 = (struct _NDIS_VPORT_BLOCK *)v31->AdapterLink.Flink;
LABEL_76:
      ndisIovCopyVPortInfo(v33, v34);
      v33 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)((char *)v33 + 576);
      v32 = (_DWORD)v48 + 1;
      LODWORD(v48) = (_DWORD)v48 + 1;
      goto LABEL_77;
    }
    v34 = (struct _NDIS_VPORT_BLOCK *)((char *)v31 - 16);
    v31 = (struct _NDIS_VPORT_BLOCK *)v31->AdapterLink.Flink;
LABEL_75:
    if ( v40 == v34->Open )
      goto LABEL_76;
LABEL_77:
    v23 = VFByVFId;
    if ( v31 == p_Blink )
      break;
  }
  v2 = a1;
  v9 = v8;
  v25 = v49;
LABEL_79:
  v35 = NewIrql;
  v9->MiniportThread = 0LL;
  KeReleaseSpinLock(&v9->Lock, v35);
  *((_DWORD *)v2 + 10) = 0;
  *(_DWORD *)(*((_QWORD *)v2 + 4) + 60LL) = v25;
LABEL_9:
  v5 = 1;
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v36 = *((_DWORD *)v2 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v9,
      *(_QWORD *)v36);
  }
  return v5;
}
