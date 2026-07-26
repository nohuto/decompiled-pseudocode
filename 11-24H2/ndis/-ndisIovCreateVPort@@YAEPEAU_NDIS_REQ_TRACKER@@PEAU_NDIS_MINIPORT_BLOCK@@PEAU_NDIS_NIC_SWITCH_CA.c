/*
 * XREFs of ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DDFA8
 * Callers:
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0740 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008C0C0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DE61C (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400DE9EC (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     WPP_RECORDER_SF_qDc @ 0x1400E3E84 (WPP_RECORDER_SF_qDc.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

char __fastcall ndisIovCreateVPort(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a3)
{
  struct _NDIS_OID_REQUEST *v3; // rdi
  __int64 v4; // rsi
  struct _NDIS_VF_BLOCK *v5; // r15
  struct _NDIS_MINIPORT_BLOCK *v7; // rbp
  char v9; // r12
  _BYTE *OidSourceHandle; // rax
  char *InformationBuffer; // rdi
  _LIST_ENTRY *SwitchBySwitchId; // r14
  unsigned __int16 v13; // dx
  bool v14; // zf
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 Pool2; // rax
  __int64 v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  unsigned __int8 *AllocatedVPortIndices; // r14
  size_t AllocatedVPortIndicesLength; // r13
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rax
  int v39; // r8d
  unsigned __int8 *v40; // rcx
  __int64 v41; // rax
  _BYTE *v42; // rdi
  int v43; // r8d
  __int64 v44; // r9
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v49; // [rsp+20h] [rbp-78h]
  char v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h]
  _BYTE *v52; // [rsp+40h] [rbp-58h]
  int *v53; // [rsp+48h] [rbp-50h]
  struct _NDIS_OID_REQUEST *v54; // [rsp+50h] [rbp-48h]
  int v55; // [rsp+A0h] [rbp+8h]
  struct _NDIS_PF_BLOCK *PFBlock; // [rsp+B8h] [rbp+20h]

  v3 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v4 = 0LL;
  PFBlock = 0LL;
  v5 = 0LL;
  v55 = 0;
  v7 = a2;
  v54 = v3;
  v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v50 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      52,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v50);
  }
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 572;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle(v3);
  v52 = OidSourceHandle;
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_51;
  }
  InformationBuffer = (char *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
  v53 = (int *)(InformationBuffer + 12);
  if ( *((_DWORD *)InformationBuffer + 3) )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_51;
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, *((_DWORD *)InformationBuffer + 2));
  if ( !SwitchBySwitchId
    || LODWORD(SwitchBySwitchId[3].Flink) == a3->MaxNumVPorts
    || *((_WORD *)InformationBuffer + 8) > 0x200u )
  {
    goto LABEL_8;
  }
  v13 = *((_WORD *)InformationBuffer + 266);
  if ( v13 == 0xFFFF )
  {
    PFBlock = v7->PFBlock;
    if ( !PFBlock )
      goto LABEL_8;
    v14 = *((_DWORD *)InformationBuffer + 136) == 2;
    goto LABEL_14;
  }
  VFByVFId = ndisIovFindVFByVFId(v7, v13);
  v5 = VFByVFId;
  if ( VFByVFId )
  {
    if ( v7->AllowMultipleVPortsPerVF || !*((_DWORD *)VFByVFId + 19) )
    {
      v14 = *((_DWORD *)InformationBuffer + 136) == 1;
LABEL_14:
      if ( v14 )
      {
        if ( (a3->NicSwitchCapabilities & 4) == 0 )
        {
          if ( *((_DWORD *)InformationBuffer + 134) != a3->MaxNumQueuePairsPerNonDefaultVPort )
            goto LABEL_8;
LABEL_27:
          Pool2 = ExAllocatePool2(64LL, 904LL, 1869169742LL);
          v4 = Pool2;
          if ( !Pool2 )
          {
LABEL_28:
            *((_DWORD *)a1 + 10) = -1073741670;
            goto LABEL_51;
          }
          *(_DWORD *)(Pool2 + 104) = 1;
          *(_QWORD *)(Pool2 + 72) = v7;
          *(_QWORD *)(Pool2 + 80) = v52;
          *(_QWORD *)(Pool2 + 88) = SwitchBySwitchId;
          if ( v5 )
            *(_DWORD *)(Pool2 + 64) |= 2u;
          else
            v5 = PFBlock;
          v20 = 5LL;
          *(_QWORD *)(Pool2 + 96) = v5;
          v21 = (_OWORD *)(Pool2 + 112);
          do
          {
            v22 = *((_OWORD *)InformationBuffer + 1);
            *v21 = *(_OWORD *)InformationBuffer;
            v23 = *((_OWORD *)InformationBuffer + 2);
            v21[1] = v22;
            v24 = *((_OWORD *)InformationBuffer + 3);
            v21[2] = v23;
            v25 = *((_OWORD *)InformationBuffer + 4);
            v21[3] = v24;
            v26 = *((_OWORD *)InformationBuffer + 5);
            v21[4] = v25;
            v27 = *((_OWORD *)InformationBuffer + 6);
            v21[5] = v26;
            v28 = *((_OWORD *)InformationBuffer + 7);
            InformationBuffer += 128;
            v21[6] = v27;
            v21 += 8;
            *(v21 - 1) = v28;
            --v20;
          }
          while ( v20 );
          v29 = *(_OWORD *)InformationBuffer;
          *(_QWORD *)(v4 + 896) = 0LL;
          v30 = *((_OWORD *)InformationBuffer + 1);
          *(_QWORD *)(v4 + 888) = 0LL;
          AllocatedVPortIndices = v7->AllocatedVPortIndices;
          AllocatedVPortIndicesLength = v7->AllocatedVPortIndicesLength;
          *v21 = v29;
          v33 = *((_OWORD *)InformationBuffer + 2);
          v21[1] = v30;
          v34 = *((_OWORD *)InformationBuffer + 3);
          v21[2] = v33;
          v35 = *((_OWORD *)InformationBuffer + 4);
          v21[3] = v34;
          v36 = *((_OWORD *)InformationBuffer + 5);
          v21[4] = v35;
          v37 = *((_OWORD *)InformationBuffer + 6);
          v21[5] = v36;
          v21[6] = v37;
          *(_QWORD *)(v4 + 880) = v4 + 872;
          *(_QWORD *)(v4 + 872) = v4 + 872;
          if ( AllocatedVPortIndices && (v38 = 0LL, (_DWORD)AllocatedVPortIndicesLength) )
          {
            v39 = 0;
            v40 = AllocatedVPortIndices;
            while ( *v40 == 0xFF )
            {
              v39 += 8;
              v38 = (unsigned int)(v38 + 1);
              ++v40;
              v55 = v39;
              if ( (unsigned int)v38 >= (unsigned int)AllocatedVPortIndicesLength )
                goto LABEL_39;
            }
            v44 = (unsigned int)v38;
            v45 = 1;
            v46 = AllocatedVPortIndices[v38];
            v47 = 0;
            while ( (v46 & v45) != 0 )
            {
              v45 *= 2;
              if ( (unsigned int)++v47 >= 8 )
                goto LABEL_39;
            }
            AllocatedVPortIndices[v44] = v45 | v46;
            v43 = v47 + v39;
          }
          else
          {
LABEL_39:
            v41 = ExAllocatePool2(66LL, (unsigned int)(AllocatedVPortIndicesLength + 64), 1869169742LL);
            v42 = (_BYTE *)v41;
            if ( !v41 )
              goto LABEL_28;
            memset((void *)(v41 + AllocatedVPortIndicesLength), 0, 0x40uLL);
            if ( AllocatedVPortIndices )
            {
              memmove(v42, AllocatedVPortIndices, AllocatedVPortIndicesLength);
              v42[AllocatedVPortIndicesLength] = 1;
              ExFreePoolWithTag(AllocatedVPortIndices, 0);
              v43 = v55;
            }
            else
            {
              *v42 = 3;
              v43 = 1;
            }
            v7->AllocatedVPortIndices = v42;
            v7->AllocatedVPortIndicesLength = AllocatedVPortIndicesLength + 64;
          }
          *(_DWORD *)(v4 + 124) = v43;
          *v53 = v43;
          *(_QWORD *)&v54->NdisReserved[80] = v4;
          *((_DWORD *)a1 + 10) = 0;
          v9 = 0;
          goto LABEL_51;
        }
        if ( *((_DWORD *)InformationBuffer + 134) <= a3->MaxNumQueuePairs
                                                   - LODWORD(SwitchBySwitchId[40].Blink)
                                                   - LODWORD(SwitchBySwitchId[6].Flink) )
          goto LABEL_27;
      }
LABEL_8:
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_51;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDc(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        v17,
        v18,
        v49,
        (char)v7,
        *((_WORD *)InformationBuffer + 266),
        ndisAllowMultipleVPortsPerVF);
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        26,
        53,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
        *((_WORD *)InformationBuffer + 266));
    }
  }
LABEL_51:
  if ( *((_DWORD *)a1 + 10) && v4 )
    ndisIovDeleteVPort((PVOID)v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v51) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x37u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v51);
  }
  return v9;
}
