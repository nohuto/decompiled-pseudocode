/*
 * XREFs of ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002F700
 * Callers:
 *     ndisWMIDispatch @ 0x14002EAB0 (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x140094D50 (NdisWdfQueryAllData.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ndisQueryGuidData @ 0x14002D4C0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x14002D9E0 (ndisQueryGuidDataSize.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x140073BD0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x14008C3F0 (ndisWmiGuidIsAdapterSpecific.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        ULONG a5,
        unsigned int *a6)
{
  _NDIS_GUID *pNdisGuidMap; // rdi
  struct _NDIS_MINIPORT_BLOCK *v10; // rbp
  int GuidDataSize; // ebp
  GUID *p_Guid; // rdx
  unsigned int i; // ecx
  bool v14; // zf
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned __int16 *v19; // rsi
  unsigned int v20; // edx
  unsigned int v21; // r13d
  unsigned int v22; // ecx
  ULONG v23; // r15d
  struct _NDIS_GUID *v24; // r9
  ULONG v25; // edi
  ULONG v26; // r12d
  int v27; // r9d
  ULONG v28; // eax
  ULONG v29; // r13d
  _LIST_ENTRY *Flink; // rsi
  struct _NDIS_CO_VC_PTR_BLOCK *v32; // rdi
  unsigned int v33; // ebp
  unsigned int v34; // r13d
  unsigned __int16 *v35; // rcx
  ULONG v36; // r12d
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rsi
  ULONG v40; // ecx
  LARGE_INTEGER v41; // rax
  ULONG v42; // edx
  struct _NDIS_MINIPORT_BLOCK *v43; // rax
  char v44[8]; // [rsp+30h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v45; // [rsp+30h] [rbp-78h]
  char v46; // [rsp+40h] [rbp-68h]
  unsigned int v47; // [rsp+44h] [rbp-64h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v49; // [rsp+50h] [rbp-58h]
  int v50; // [rsp+58h] [rbp-50h]
  struct _NDIS_MINIPORT_BLOCK *v51; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 *v52; // [rsp+68h] [rbp-40h]
  unsigned int *v53; // [rsp+70h] [rbp-38h]
  __int64 v54; // [rsp+78h] [rbp-30h]

  v47 = 0;
  v49 = 0LL;
  pNdisGuidMap = a2;
  v51 = 0LL;
  v10 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      34,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a6 = 0;
  if ( a5 < 0x38 )
  {
    GuidDataSize = -1073741789;
    *a6 = 4;
    goto LABEL_35;
  }
  if ( pNdisGuidMap )
  {
LABEL_18:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v51, 0, MPREF_WMI_QUERYALL);
      v10 = v51;
      v49 = v51;
    }
    if ( !(unsigned __int8)ndisWmiGuidIsAdapterSpecific(a3) )
    {
      if ( (a1->Flags & 0x20000) != 0 )
      {
        v16 = a1->VcCount + 1;
        v46 = 0;
        a4->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
        v50 = v16;
        v17 = (unsigned int)(8 * v16 + 72);
        a4->OffsetInstanceNameOffsets = v17;
        v53 = (ULONG *)((char *)&a4->WnodeHeader.BufferSize + v17);
        v18 = (v17 + 4 * v16 + 7) & 0xFFFFFFF8;
        v19 = (unsigned __int16 *)((char *)a4 + v18);
        v52 = v19;
        v49 = v51;
        GuidDataSize = ndisQueryGuidDataSize((int *)&v47, a1, pNdisGuidMap, 0LL, a3, v51);
        if ( GuidDataSize < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_33;
          v27 = 40;
          goto LABEL_61;
        }
        v21 = (v47 + 7) & 0xFFFFFFF8;
        v22 = a5;
        v23 = v18 + v21 + ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8);
        if ( a5 >= v23 )
        {
          *v53 = v18;
          *v19 = a1->pAdapterInstanceName->Length;
          memmove(v19 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
          v24 = pNdisGuidMap;
          v25 = v47;
          v26 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v18;
          GuidDataSize = ndisQueryGuidData(
                           (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v26),
                           v47,
                           a1,
                           v24,
                           0LL,
                           a3,
                           v49);
          if ( GuidDataSize < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_33;
            v27 = 39;
            goto LABEL_61;
          }
          v22 = a5;
          a4->FixedInstanceSize = v26;
          v18 = v21 + v26;
          a4[1].WnodeHeader.BufferSize = v25;
          v52 = (unsigned __int16 *)((char *)a4 + v18);
        }
        v28 = v50;
        v29 = 1;
        v48 = 1;
        if ( v50 == 1 )
        {
          if ( v22 < v23 )
          {
            a4->WnodeHeader.Flags |= 0x20u;
            a4->DataBlockOffset = v23;
            v23 = 56;
            a4->WnodeHeader.BufferSize = 56;
          }
          else
          {
            a4->WnodeHeader.BufferSize = v23;
            a4->InstanceCount = 1;
          }
          GuidDataSize = 0;
          *a6 = v23;
        }
        else
        {
          Flink = a1->WmiEnabledVcs.Flink;
          if ( Flink == &a1->WmiEnabledVcs )
            goto LABEL_54;
          while ( v29 < v28 )
          {
            v32 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
            if ( ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
            {
              if ( v32->VcInstanceName.Buffer )
              {
                GuidDataSize = ndisQueryGuidDataSize(
                                 (int *)&v47,
                                 a1,
                                 0LL,
                                 (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20],
                                 a3,
                                 v49);
                if ( GuidDataSize >= 0 )
                {
                  v33 = v47;
                  v34 = (v47 + 7) & 0xFFFFFFF8;
                  v23 += v34 + ((v32->VcInstanceName.Length + 9) & 0xFFFFFFF8);
                  if ( a5 >= v23 )
                  {
                    v54 = v48;
                    v53[v48] = v18;
                    v35 = v52;
                    *v52 = v32->VcInstanceName.Length;
                    memmove(v35 + 1, v32->VcInstanceName.Buffer, v32->VcInstanceName.Length);
                    v36 = ((v32->VcInstanceName.Length + 9) & 0xFFFFFFF8) + v18;
                    GuidDataSize = ndisQueryGuidData(
                                     (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v36),
                                     v33,
                                     a1,
                                     0LL,
                                     (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20],
                                     a3,
                                     v49);
                    if ( GuidDataSize < 0 )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v37) = 2;
                        WPP_RECORDER_SF_qq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v37,
                          18,
                          41,
                          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
                          (char)a1,
                          (char)v32);
                      }
                      ndisDereferenceVcPtr(v32);
                      v29 = v48;
                      break;
                    }
                    v38 = v54;
                    *(&a4[1].WnodeHeader.BufferSize + 2 * v54) = v47;
                    *(&a4->FixedInstanceSize + 2 * v38) = v36;
                    v18 = v34 + v36;
                    ++v48;
                    v52 = (unsigned __int16 *)((char *)a4 + v18);
                  }
                  else
                  {
                    a4->WnodeHeader.Flags |= 0x20u;
                    GuidDataSize = 0;
                    a4->WnodeHeader.BufferSize = 56;
                    a4->DataBlockOffset = v23;
                    v46 = 1;
                    *a6 = 56;
                  }
                }
              }
              ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]);
            }
            Flink = Flink->Flink;
            v29 = v48;
            if ( Flink == &a1->WmiEnabledVcs )
              break;
            v28 = v50;
          }
          if ( !v46 )
          {
LABEL_54:
            GuidDataSize = 0;
            a4->WnodeHeader.BufferSize = v23;
            a4->InstanceCount = v29;
            *a6 = v23;
          }
        }
        goto LABEL_33;
      }
      v10 = v51;
      v49 = v51;
    }
    GuidDataSize = ndisQueryGuidDataSize((int *)&v47, a1, pNdisGuidMap, 0LL, a3, v10);
    if ( GuidDataSize < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v27 = 36;
      goto LABEL_61;
    }
    v39 = (v47 + 3) & 0xFFFFFFFC;
    v20 = a1->pAdapterInstanceName->Length + 2;
    v40 = v20 + v39 + 76;
    if ( v40 < 0x48 || v40 < (unsigned int)v39 || v40 < v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 37;
        goto LABEL_61;
      }
    }
    else
    {
      if ( a5 < v40 )
      {
        a4->WnodeHeader.Flags |= 0x20u;
        a4->WnodeHeader.BufferSize = 56;
        GuidDataSize = 0;
        a4->DataBlockOffset = v40;
        *a6 = 56;
        goto LABEL_33;
      }
      v41.QuadPart = MEMORY[0xFFFFF78000000014];
      v42 = v47;
      a4->WnodeHeader.Flags |= 0x10u;
      a4->WnodeHeader.TimeStamp = v41;
      a4->OffsetInstanceNameOffsets = v39 + 72;
      v43 = v51;
      v45 = v51;
      a4->WnodeHeader.BufferSize = v40;
      a4->InstanceCount = 1;
      a4->DataBlockOffset = 72;
      a4->FixedInstanceSize = v42;
      v49 = v43;
      GuidDataSize = ndisQueryGuidData(
                       (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a4[1].WnodeHeader.HistoricalContext,
                       v42,
                       a1,
                       pNdisGuidMap,
                       0LL,
                       a3,
                       v45);
      if ( GuidDataSize >= 0 )
      {
        *(ULONG *)((char *)&a4->WnodeHeader.BufferSize + a4->OffsetInstanceNameOffsets) = v39 + 76;
        *(_WORD *)((char *)&a4[1].WnodeHeader.Linkage + v39) = a1->pAdapterInstanceName->Length;
        memmove(
          (char *)&a4[1].WnodeHeader.Linkage + (unsigned int)v39 + 2,
          a1->pAdapterInstanceName->Buffer,
          a1->pAdapterInstanceName->Length);
        GuidDataSize = 0;
        *a6 = a4->WnodeHeader.BufferSize;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 38;
LABEL_61:
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          18,
          v27,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
    }
LABEL_33:
    if ( v49 )
      ndisDereferenceMiniport(v49, 0x60u);
    goto LABEL_35;
  }
  pNdisGuidMap = a1->pNdisGuidMap;
  p_Guid = &a4->WnodeHeader.Guid;
  if ( pNdisGuidMap )
  {
    for ( i = 0; i < a1->cNdisGuidMap; ++pNdisGuidMap )
    {
      if ( a4 == (struct tagWNODE_ALL_DATA *)-24LL )
      {
        if ( (pNdisGuidMap->Flags & 2) != 0 )
        {
          v14 = pNdisGuidMap->Oid == 0;
LABEL_13:
          if ( v14 )
            goto LABEL_18;
        }
      }
      else if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
      {
        v14 = *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)a4->WnodeHeader.Guid.Data4;
        goto LABEL_13;
      }
      ++i;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(p_Guid) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_Guid,
      18,
      35,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  GuidDataSize = -1073741811;
LABEL_35:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v44 = GuidDataSize;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x2Au,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v44);
  }
  return (unsigned int)GuidDataSize;
}
