/*
 * XREFs of ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002C670
 * Callers:
 *     ndisWMIDispatch @ 0x14002BA20 (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x14009E8B0 (NdisWdfQueryAllData.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ndisQueryGuidData @ 0x140029FB0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x14002A950 (ndisQueryGuidDataSize.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14002D480 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x14008F770 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x140097BA0 (ndisWmiGuidIsAdapterSpecific.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D7C00 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        unsigned int a5,
        unsigned int *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  struct _NDIS_GUID *v9; // rsi
  unsigned int *v11; // r12
  unsigned int v12; // r13d
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int v14; // edx
  int GuidDataSize; // esi
  __int64 v16; // r15
  ULONG v17; // ecx
  int v19; // edx
  LARGE_INTEGER v20; // rax
  ULONG v21; // edx
  struct _NDIS_GUID *v22; // r9
  int v23; // r9d
  ULONG BufferSize; // eax
  ULONG VcCount; // edx
  struct _NDIS_GUID *v26; // r8
  ULONG v27; // ecx
  unsigned int v28; // r15d
  int v29; // eax
  unsigned __int16 *v30; // r10
  ULONG v31; // r15d
  ULONG v32; // ecx
  ULONG v33; // r15d
  _LIST_ENTRY *p_WmiEnabledVcs; // rdx
  _LIST_ENTRY *i; // rax
  struct _NDIS_CO_VC_PTR_BLOCK *v36; // rax
  struct _NDIS_CO_VC_PTR_BLOCK *v37; // rdx
  int v38; // eax
  ULONG v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int16 *v44; // r10
  int v45; // esi
  ULONG v46; // eax
  char v47[8]; // [rsp+30h] [rbp-78h]
  unsigned int v48; // [rsp+40h] [rbp-68h] BYREF
  ULONG v49; // [rsp+44h] [rbp-64h]
  ULONG v50; // [rsp+48h] [rbp-60h]
  unsigned int v51; // [rsp+4Ch] [rbp-5Ch]
  struct _NDIS_CO_VC_PTR_BLOCK *v52; // [rsp+50h] [rbp-58h]
  _LIST_ENTRY *v53; // [rsp+58h] [rbp-50h]
  unsigned __int16 *v54; // [rsp+60h] [rbp-48h]
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+68h] [rbp-40h] BYREF
  unsigned int *v56; // [rsp+70h] [rbp-38h]
  struct _NDIS_GUID *v57; // [rsp+B8h] [rbp+10h] BYREF

  v57 = a2;
  v48 = 0;
  v7 = 0LL;
  v55 = 0LL;
  v9 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  v11 = a6;
  v12 = a5;
  *a6 = 0;
  if ( v12 < 0x38 )
  {
    GuidDataSize = -1073741789;
    *v11 = 4;
    goto LABEL_16;
  }
  if ( !v9 )
  {
    if ( (int)ndisWmiGetGuid(&v57, a1, &a4->WnodeHeader.Guid, 0) < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v19,
          18,
          35,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      GuidDataSize = -1073741811;
      goto LABEL_16;
    }
    v9 = v57;
  }
  BindPaths = a1->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v55, 0, MPREF_WMI_QUERYALL);
    v7 = v55;
  }
  if ( (unsigned __int8)ndisWmiGuidIsAdapterSpecific(a3) || (a1->Flags & 0x20000) == 0 )
  {
    GuidDataSize = ndisQueryGuidDataSize((int *)&v48, a1, v9, 0LL, a3, v7);
    if ( GuidDataSize < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v23 = 36;
      goto LABEL_24;
    }
    v16 = (v48 + 3) & 0xFFFFFFFC;
    v14 = a1->pAdapterInstanceName->Length + 2;
    v17 = v14 + v16 + 76;
    if ( v17 < 0x48 || v17 < (unsigned int)v16 || v17 < v14 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v23 = 37;
      goto LABEL_24;
    }
    if ( v12 < v17 )
    {
      a4->WnodeHeader.Flags |= 0x20u;
      a4->WnodeHeader.BufferSize = 56;
      GuidDataSize = 0;
      a4->DataBlockOffset = v17;
      *v11 = 56;
      goto LABEL_14;
    }
    v20.QuadPart = MEMORY[0xFFFFF78000000014];
    v21 = v48;
    v7 = v55;
    v22 = v57;
    a4->WnodeHeader.Flags |= 0x10u;
    a4->WnodeHeader.TimeStamp = v20;
    a4->WnodeHeader.BufferSize = v17;
    a4->OffsetInstanceNameOffsets = v16 + 72;
    a4->InstanceCount = 1;
    a4->DataBlockOffset = 72;
    a4->FixedInstanceSize = v21;
    GuidDataSize = ndisQueryGuidData(
                     (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a4[1].WnodeHeader.HistoricalContext,
                     v21,
                     a1,
                     v22,
                     0LL,
                     a3,
                     v7);
    if ( GuidDataSize >= 0 )
    {
      *(ULONG *)((char *)&a4->WnodeHeader.BufferSize + a4->OffsetInstanceNameOffsets) = v16 + 76;
      *(_WORD *)((char *)&a4[1].WnodeHeader.Linkage + v16) = a1->pAdapterInstanceName->Length;
      memmove(
        (char *)&a4[1].WnodeHeader.Linkage + (unsigned int)v16 + 2,
        a1->pAdapterInstanceName->Buffer,
        a1->pAdapterInstanceName->Length);
      BufferSize = a4->WnodeHeader.BufferSize;
      GuidDataSize = 0;
LABEL_46:
      *v11 = BufferSize;
      goto LABEL_14;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v23 = 38;
LABEL_24:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      18,
      v23,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
    goto LABEL_14;
  }
  VcCount = a1->VcCount;
  LOBYTE(a5) = 0;
  ++VcCount;
  v7 = v55;
  v26 = v57;
  v27 = 8 * VcCount + 72;
  a4->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
  v49 = VcCount;
  v56 = (ULONG *)((char *)&a4->WnodeHeader.BufferSize + v27);
  v28 = (v27 + 4 * VcCount + 7) & 0xFFFFFFF8;
  a4->OffsetInstanceNameOffsets = v27;
  v54 = (unsigned __int16 *)((char *)a4 + v28);
  LODWORD(a6) = v28;
  GuidDataSize = ndisQueryGuidDataSize((int *)&v48, a1, v26, 0LL, a3, v7);
  if ( GuidDataSize < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v23 = 40;
    goto LABEL_24;
  }
  v29 = a1->pAdapterInstanceName->Length + 9;
  v51 = (v48 + 7) & 0xFFFFFFF8;
  BufferSize = v28 + v51 + (v29 & 0xFFFFFFF8);
  v50 = BufferSize;
  if ( v12 >= BufferSize )
  {
    v30 = v54;
    *v56 = v28;
    *v30 = a1->pAdapterInstanceName->Length;
    memmove(v30 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
    v31 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v28;
    GuidDataSize = ndisQueryGuidData(
                     (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v31),
                     v48,
                     a1,
                     v57,
                     0LL,
                     a3,
                     v7);
    if ( GuidDataSize < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v23 = 39;
      goto LABEL_24;
    }
    a4[1].WnodeHeader.BufferSize = v48;
    a4->FixedInstanceSize = v31;
    LODWORD(a6) = v51 + v31;
    v54 = (unsigned __int16 *)((char *)a4 + v51 + v31);
    BufferSize = v50;
  }
  v32 = v49;
  v33 = 1;
  if ( v49 == 1 )
  {
    if ( v12 < BufferSize )
    {
      a4->WnodeHeader.Flags |= 0x20u;
      a4->DataBlockOffset = BufferSize;
      BufferSize = 56;
      a4->WnodeHeader.BufferSize = 56;
    }
    else
    {
      a4->WnodeHeader.BufferSize = BufferSize;
      a4->InstanceCount = 1;
    }
    GuidDataSize = 0;
    goto LABEL_46;
  }
  p_WmiEnabledVcs = &a1->WmiEnabledVcs;
  for ( i = a1->WmiEnabledVcs.Flink; ; i = v53->Flink )
  {
    v53 = i;
    if ( i == p_WmiEnabledVcs || v33 >= v32 )
      break;
    v52 = (struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20];
    if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20]) )
      goto LABEL_58;
    v36 = v52;
    if ( v52->VcInstanceName.Buffer )
    {
      GuidDataSize = ndisQueryGuidDataSize((int *)&v48, a1, 0LL, v52, a3, v7);
      if ( GuidDataSize >= 0 )
      {
        v37 = v52;
        v38 = v52->VcInstanceName.Length + 9;
        v51 = (v48 + 7) & 0xFFFFFFF8;
        v39 = v51 + (v38 & 0xFFFFFFF8) + v50;
        v50 = v39;
        if ( v12 < v39 )
        {
          a4->WnodeHeader.Flags |= 0x20u;
          GuidDataSize = 0;
          a4->DataBlockOffset = v39;
          a4->WnodeHeader.BufferSize = 56;
          *v11 = 56;
          LOBYTE(a5) = 1;
          ndisDereferenceVcPtr(v37);
          goto LABEL_58;
        }
        v44 = v54;
        v45 = (int)a6;
        v56[v33] = (unsigned int)a6;
        *v44 = v37->VcInstanceName.Length;
        memmove(v44 + 1, v37->VcInstanceName.Buffer, v37->VcInstanceName.Length);
        LODWORD(a6) = ((v52->VcInstanceName.Length + 9) & 0xFFFFFFF8) + v45;
        GuidDataSize = ndisQueryGuidData(
                         (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + (unsigned int)a6),
                         v48,
                         a1,
                         0LL,
                         v52,
                         a3,
                         v7);
        if ( GuidDataSize < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x29u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1,
              v52);
          ndisDereferenceVcPtr(v52);
          break;
        }
        v40 = (int)a6;
        v41 = v48;
        v42 = v33;
        *(&a4->FixedInstanceSize + 2 * v33) = (unsigned int)a6;
        v43 = v51 + v40;
        LODWORD(a6) = v43;
        v54 = (unsigned __int16 *)((char *)a4 + v43);
        ++v33;
        *(&a4[1].WnodeHeader.BufferSize + 2 * v42) = v41;
      }
      v36 = v52;
    }
    ndisDereferenceVcPtr(v36);
LABEL_58:
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    v32 = v49;
  }
  if ( !(_BYTE)a5 )
  {
    v46 = v50;
    GuidDataSize = 0;
    a4->WnodeHeader.BufferSize = v50;
    a4->InstanceCount = v33;
    *v11 = v46;
  }
LABEL_14:
  if ( v7 )
    ndisDereferenceMiniport(v7, 0x60u);
LABEL_16:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v47 = GuidDataSize;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x2Au,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v47);
  }
  return (unsigned int)GuidDataSize;
}
