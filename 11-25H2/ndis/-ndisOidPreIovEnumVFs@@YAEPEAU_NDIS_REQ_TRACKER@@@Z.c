/*
 * XREFs of ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E80C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1400E4EE4 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumVFs(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rax
  unsigned int Blink; // esi
  _LIST_ENTRY *v3; // r13
  char v5; // r12
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // xmm2_8
  struct _NDIS_OID_REQUEST *v8; // r8
  int *v9; // rbx
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  _BYTE *OidSourceHandle; // rcx
  _BYTE *v14; // rax
  _BYTE *v15; // rcx
  _LIST_ENTRY *p_VFList; // r12
  _LIST_ENTRY *Flink; // rdx
  bool v18; // zf
  unsigned int v19; // ecx
  unsigned int v20; // r13d
  __int64 v21; // rax
  KIRQL v22; // dl
  _DWORD *v23; // rax
  _LIST_ENTRY *v24; // r14
  unsigned int v25; // eax
  struct _NDIS_NIC_SWITCH_VF_INFO *v26; // r13
  struct _NDIS_VF_BLOCK *v27; // rdx
  KIRQL v28; // dl
  __int64 v29; // rax
  char v31[8]; // [rsp+30h] [rbp-89h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+40h] [rbp-79h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v33; // [rsp+48h] [rbp-71h]
  __m128i v34; // [rsp+50h] [rbp-69h]
  __int128 v35; // [rsp+60h] [rbp-59h]
  __int128 v36; // [rsp+70h] [rbp-49h]
  char v37[128]; // [rsp+90h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+120h] [rbp+67h] BYREF
  struct _NDIS_OID_REQUEST *v39; // [rsp+128h] [rbp+6Fh]
  unsigned int v40; // [rsp+130h] [rbp+77h]
  _BYTE *v41; // [rsp+138h] [rbp+7Fh]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  Blink = 0;
  v41 = 0LL;
  v3 = 0LL;
  v39 = v1;
  SwitchBySwitchId = 0LL;
  NewIrql = 0;
  v5 = 1;
  v6 = ndisCaptureIovOidContext((__int64)v37, a1);
  v34 = *(__m128i *)v6;
  v35 = *(_OWORD *)(v6 + 16);
  v36 = *(_OWORD *)(v6 + 32);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x30u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v7);
  v8 = v39;
  v9 = (int *)((char *)a1 + 40);
  v39->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v10 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( v10[1] != 12 )
    goto LABEL_47;
  *v9 = 0;
  if ( v10[12] < 0x18u )
  {
    v11 = -1073676268;
LABEL_8:
    v10[17] = 24;
    *v9 = v11;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
    goto LABEL_48;
  }
  if ( v10[13] < 0x18u )
  {
    v11 = -1073676266;
    goto LABEL_8;
  }
  if ( !v34.m128i_i8[0] )
  {
    v5 = 0;
    goto LABEL_48;
  }
  if ( *((_QWORD *)&v36 + 1) && *((_QWORD *)&v35 + 1) && (*(_BYTE *)(*((_QWORD *)&v36 + 1) + 8LL) & 3) == 3 )
  {
    v10[15] = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 24;
    OidSourceHandle = ndisGetOidSourceHandle(v8);
    if ( OidSourceHandle )
    {
      v14 = v41;
      if ( *OidSourceHandle == 18 )
        v14 = OidSourceHandle;
      v41 = v14;
    }
    if ( (*(_DWORD *)(v12 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, *(_DWORD *)(v12 + 8)), (v3 = SwitchBySwitchId) != 0LL) )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
      v15 = v41;
      if ( v41 )
      {
        p_VFList = (_LIST_ENTRY *)(v41 + 808);
        if ( v3 )
        {
          Flink = p_VFList->Flink;
          if ( p_VFList->Flink != p_VFList )
          {
            do
            {
              v18 = Flink[3].Flink == v3;
              v19 = Blink + 1;
              Flink = Flink->Flink;
              if ( !v18 )
                v19 = Blink;
              Blink = v19;
            }
            while ( Flink != p_VFList );
            v15 = v41;
          }
        }
        else
        {
          Blink = *((_DWORD *)v41 + 200);
        }
      }
      else
      {
        if ( v3 )
          Blink = (unsigned int)v3[4].Blink;
        else
          Blink = v7->NumAllocatedVFs;
        p_VFList = &v7->VFList;
      }
      v20 = 1632 * Blink + 24;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v20;
      v21 = *((_QWORD *)a1 + 4);
      v40 = v20;
      if ( v20 <= *(_DWORD *)(v21 + 52) )
      {
        v23 = *(_DWORD **)(v21 + 40);
        *v23 = 1573248;
        v23[3] = 24;
        v23[4] = Blink;
        v23[5] = 1632;
        v24 = p_VFList->Flink;
        v33 = (struct _NDIS_NIC_SWITCH_VF_INFO *)(v23 + 6);
        v25 = 0;
        LODWORD(v39) = 0;
        if ( v24 != p_VFList )
        {
          v26 = v33;
          do
          {
            if ( v25 >= Blink )
              break;
            v27 = (struct _NDIS_VF_BLOCK *)&v24[-1];
            if ( !v15 )
              v27 = (struct _NDIS_VF_BLOCK *)v24;
            v24 = v24->Flink;
            if ( !SwitchBySwitchId || *((_LIST_ENTRY **)v27 + 8) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v26, v27);
              v26 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v26 + 1632);
              v15 = v41;
              v25 = (_DWORD)v39 + 1;
              LODWORD(v39) = (_DWORD)v39 + 1;
            }
          }
          while ( v24 != p_VFList );
          v20 = v40;
          v9 = (int *)((char *)a1 + 40);
        }
        v28 = NewIrql;
        v7->MiniportThread = 0LL;
        KeReleaseSpinLock(&v7->Lock, v28);
        v29 = *((_QWORD *)a1 + 4);
        *v9 = 0;
        *(_DWORD *)(v29 + 60) = v20;
      }
      else
      {
        v22 = NewIrql;
        *v9 = -1073676266;
        v7->MiniportThread = 0LL;
        KeReleaseSpinLock(&v7->Lock, v22);
      }
      v5 = 1;
    }
    else
    {
      *v9 = -1073741811;
    }
  }
  else
  {
LABEL_47:
    *v9 = -1073741637;
  }
LABEL_48:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v31 = *v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x31u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      *(_QWORD *)v31);
  }
  return v5;
}
