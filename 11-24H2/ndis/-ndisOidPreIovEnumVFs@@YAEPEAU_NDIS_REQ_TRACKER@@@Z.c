/*
 * XREFs of ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008C0C0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1400DDCD4 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumVFs(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rax
  unsigned int Blink; // esi
  _LIST_ENTRY *v3; // r13
  char v5; // r12
  __int64 v6; // rax
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // xmm2_8
  struct _NDIS_OID_REQUEST *v9; // r8
  int *v10; // rbx
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _BYTE *OidSourceHandle; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  _LIST_ENTRY *p_VFList; // r12
  _LIST_ENTRY *Flink; // rdx
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  __int64 v22; // rax
  KIRQL v23; // dl
  _DWORD *v24; // rax
  _LIST_ENTRY *v25; // r14
  unsigned int v26; // eax
  struct _NDIS_NIC_SWITCH_VF_INFO *v27; // r13
  struct _NDIS_VF_BLOCK *v28; // rdx
  KIRQL v29; // dl
  __int64 v30; // rax
  char v32[8]; // [rsp+30h] [rbp-89h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+40h] [rbp-79h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v34; // [rsp+48h] [rbp-71h]
  __m128i v35; // [rsp+50h] [rbp-69h]
  __int128 v36; // [rsp+60h] [rbp-59h]
  __int128 v37; // [rsp+70h] [rbp-49h]
  char v38[128]; // [rsp+90h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+120h] [rbp+67h] BYREF
  struct _NDIS_OID_REQUEST *v40; // [rsp+128h] [rbp+6Fh]
  unsigned int v41; // [rsp+130h] [rbp+77h]
  _BYTE *v42; // [rsp+138h] [rbp+7Fh]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  Blink = 0;
  v42 = 0LL;
  v3 = 0LL;
  v40 = v1;
  SwitchBySwitchId = 0LL;
  NewIrql = 0;
  v5 = 1;
  v6 = ndisCaptureIovOidContext((__int64)v38, a1);
  v35 = *(__m128i *)v6;
  v36 = *(_OWORD *)(v6 + 16);
  v37 = *(_OWORD *)(v6 + 32);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      26,
      48,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      (char)v8);
  }
  v9 = v40;
  v10 = (int *)((char *)a1 + 40);
  v40->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v11 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( v11[1] != 12 )
    goto LABEL_47;
  *v10 = 0;
  if ( v11[12] < 0x18u )
  {
    v12 = -1073676268;
LABEL_8:
    v11[17] = 24;
    *v10 = v12;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
    goto LABEL_48;
  }
  if ( v11[13] < 0x18u )
  {
    v12 = -1073676266;
    goto LABEL_8;
  }
  if ( !v35.m128i_i8[0] )
  {
    v5 = 0;
    goto LABEL_48;
  }
  if ( *((_QWORD *)&v37 + 1) && *((_QWORD *)&v36 + 1) && (*(_BYTE *)(*((_QWORD *)&v37 + 1) + 8LL) & 3) == 3 )
  {
    v11[15] = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 24;
    OidSourceHandle = ndisGetOidSourceHandle(v9);
    if ( OidSourceHandle )
    {
      v15 = v42;
      if ( *OidSourceHandle == 18 )
        v15 = OidSourceHandle;
      v42 = v15;
    }
    if ( (*(_DWORD *)(v13 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v8, *(_DWORD *)(v13 + 8)), (v3 = SwitchBySwitchId) != 0LL) )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
      v16 = v42;
      if ( v42 )
      {
        p_VFList = (_LIST_ENTRY *)(v42 + 808);
        if ( v3 )
        {
          Flink = p_VFList->Flink;
          if ( p_VFList->Flink != p_VFList )
          {
            do
            {
              v19 = Flink[3].Flink == v3;
              v20 = Blink + 1;
              Flink = Flink->Flink;
              if ( !v19 )
                v20 = Blink;
              Blink = v20;
            }
            while ( Flink != p_VFList );
            v16 = v42;
          }
        }
        else
        {
          Blink = *((_DWORD *)v42 + 200);
        }
      }
      else
      {
        if ( v3 )
          Blink = (unsigned int)v3[4].Blink;
        else
          Blink = v8->NumAllocatedVFs;
        p_VFList = &v8->VFList;
      }
      v21 = 1632 * Blink + 24;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v21;
      v22 = *((_QWORD *)a1 + 4);
      v41 = v21;
      if ( v21 <= *(_DWORD *)(v22 + 52) )
      {
        v24 = *(_DWORD **)(v22 + 40);
        *v24 = 1573248;
        v24[3] = 24;
        v24[4] = Blink;
        v24[5] = 1632;
        v25 = p_VFList->Flink;
        v34 = (struct _NDIS_NIC_SWITCH_VF_INFO *)(v24 + 6);
        v26 = 0;
        LODWORD(v40) = 0;
        if ( v25 != p_VFList )
        {
          v27 = v34;
          do
          {
            if ( v26 >= Blink )
              break;
            v28 = (struct _NDIS_VF_BLOCK *)&v25[-1];
            if ( !v16 )
              v28 = (struct _NDIS_VF_BLOCK *)v25;
            v25 = v25->Flink;
            if ( !SwitchBySwitchId || *((_LIST_ENTRY **)v28 + 8) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v27, v28);
              v27 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v27 + 1632);
              v16 = v42;
              v26 = (_DWORD)v40 + 1;
              LODWORD(v40) = (_DWORD)v40 + 1;
            }
          }
          while ( v25 != p_VFList );
          v21 = v41;
          v10 = (int *)((char *)a1 + 40);
        }
        v29 = NewIrql;
        v8->MiniportThread = 0LL;
        KeReleaseSpinLock(&v8->Lock, v29);
        v30 = *((_QWORD *)a1 + 4);
        *v10 = 0;
        *(_DWORD *)(v30 + 60) = v21;
      }
      else
      {
        v23 = NewIrql;
        *v10 = -1073676266;
        v8->MiniportThread = 0LL;
        KeReleaseSpinLock(&v8->Lock, v23);
      }
      v5 = 1;
    }
    else
    {
      *v10 = -1073741811;
    }
  }
  else
  {
LABEL_47:
    *v10 = -1073741637;
  }
LABEL_48:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v32 = *v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x31u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      *(_QWORD *)v32);
  }
  return v5;
}
