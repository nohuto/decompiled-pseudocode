/*
 * XREFs of ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002B200
 * Callers:
 *     ndisWMIDispatch @ 0x14002BA20 (ndisWMIDispatch.c)
 *     NdisWdfQuerySingleInstance @ 0x1400888C0 (NdisWdfQuerySingleInstance.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ndisQueryGuidData @ 0x140029FB0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x14002A950 (ndisQueryGuidDataSize.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x14008F770 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D7C00 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r13
  struct _NDIS_GUID *pNdisGuidMap; // rbx
  struct _NDIS_MINIPORT_BLOCK *v8; // rbp
  wchar_t *v9; // rdx
  unsigned int *v10; // r14
  struct _NDIS_CO_VC_PTR_BLOCK *v11; // r12
  __int64 OffsetInstanceName; // rax
  int GuidDataSize; // esi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *p_Guid; // rdi
  unsigned int j; // ecx
  bool v18; // zf
  KIRQL v19; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v21; // bp
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edx
  unsigned __int8 k; // cl
  _BYTE *v26; // rdx
  char v27; // al
  ULONG v28; // ebp
  ULONG v29; // edx
  struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *v30; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v32; // rbx
  unsigned int v33; // edx
  _LIST_ENTRY *i; // rdi
  int v35; // eax
  char v36[8]; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v37; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v38; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v41; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v41 = 0;
  v6 = 0LL;
  v38 = 0LL;
  pNdisGuidMap = a2;
  v8 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      43,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v10 = a5;
  v11 = 0LL;
  *a5 = 0;
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_17;
  OffsetInstanceName = a3->OffsetInstanceName;
  v9 = (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName + 2);
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  GuidDataSize = 0;
  String2.Buffer = v9;
  String2.MaximumLength = *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength < 0x30u || !v9 || v9[5] != 58 )
  {
    if ( !RtlEqualUnicodeString(v8->pAdapterInstanceName, &String2, 1u) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v9,
          18,
          12,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)v8);
      }
      goto LABEL_10;
    }
LABEL_11:
    if ( GuidDataSize >= 0 )
      goto LABEL_19;
    goto LABEL_12;
  }
  for ( i = v8->WmiEnabledVcs.Flink; ; i = i->Flink )
  {
    if ( i == &v8->WmiEnabledVcs )
    {
      LOBYTE(v8) = (_BYTE)a1;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)v9,
          0x12u,
          0xBu,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1,
          &String2.Length);
        GuidDataSize = -1073741162;
LABEL_12:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v9,
            18,
            44,
            (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
            (char)v8);
        }
        goto LABEL_14;
      }
LABEL_10:
      GuidDataSize = -1073741162;
      goto LABEL_12;
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)&i[-2].Blink, &String2, 1u) )
      break;
  }
  if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20]) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        18,
        10,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    GuidDataSize = -1073741823;
  }
  v10 = a5;
  if ( GuidDataSize < 0 )
  {
    v8 = a1;
    goto LABEL_11;
  }
  v11 = (struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20];
  v8 = a1;
LABEL_19:
  if ( !v11 )
  {
LABEL_17:
    BindPaths = v8->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v38, 0, MPREF_WMI_QUERYONE);
      v6 = v38;
    }
  }
  p_Guid = &a3->WnodeHeader.Guid;
  if ( pNdisGuidMap )
  {
LABEL_29:
    GuidDataSize = ndisQueryGuidDataSize((int *)&v41, v8, pNdisGuidMap, v11, &a3->WnodeHeader.Guid, v6);
    if ( GuidDataSize >= 0 )
    {
      v28 = v41 + a3->DataBlockOffset;
      if ( v28 < v41 )
      {
        GuidDataSize = -1073741823;
      }
      else if ( v42 < v28 )
      {
        if ( v42 >= 0x38 )
        {
          a3->WnodeHeader.Flags |= 0x20u;
          v35 = 56;
          a3->WnodeHeader.BufferSize = 56;
          GuidDataSize = 0;
          a3->OffsetInstanceName = v28;
        }
        else
        {
          GuidDataSize = -1073741789;
          v35 = 4;
        }
        *v10 = v35;
      }
      else
      {
        v29 = v41;
        v30 = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a3 + a3->DataBlockOffset);
        v6 = v38;
        v37 = v38;
        a3->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
        a3->WnodeHeader.BufferSize = v28;
        a3->SizeDataBlock = v29;
        GuidDataSize = ndisQueryGuidData(v30, v29, a1, pNdisGuidMap, v11, &a3->WnodeHeader.Guid, v37);
        if ( GuidDataSize < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v9,
              18,
              47,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a1);
          }
        }
        else
        {
          *v10 = v28;
          GuidDataSize = 0;
        }
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        18,
        46,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)v8);
    }
  }
  else
  {
    pNdisGuidMap = v8->pNdisGuidMap;
    if ( pNdisGuidMap )
    {
      for ( j = 0; j < v8->cNdisGuidMap; ++j )
      {
        if ( a3 == (struct tagWNODE_SINGLE_INSTANCE *)-24LL )
        {
          if ( (pNdisGuidMap->Flags & 2) == 0 )
            goto LABEL_26;
          v18 = pNdisGuidMap->Oid == 0;
        }
        else
        {
          v9 = (wchar_t *)(*(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&p_Guid->Data1);
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
            v9 = (wchar_t *)(*(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->WnodeHeader.Guid.Data4);
          v18 = v9 == 0LL;
        }
        if ( v18 )
          goto LABEL_29;
LABEL_26:
        ++pNdisGuidMap;
      }
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        18,
        45,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)v8);
    }
    GuidDataSize = -1073741811;
  }
  if ( v11 )
    ndisDereferenceVcPtr(v11);
  if ( v6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        20,
        25,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)v6);
    }
    v19 = KeAcquireSpinLockRaiseToDpc(&v6->Ref.SpinLock);
    RefCountTracker = (ULONG_PTR)v6->RefCountTracker;
    v21 = v19;
    if ( !RefCountTracker || RefCountTracker - 2 <= 1 )
      goto LABEL_44;
    if ( RefCountTracker == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(RefCountTracker + 2) <= 0x61u )
      ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x61uLL);
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( *(_BYTE *)(RefCountTracker + 1) != 1 )
        goto LABEL_44;
      v32 = RefCountTracker + 6216;
      v33 = *(_DWORD *)(RefCountTracker + 6272);
      if ( v33 >> 17 < 0x3FFE && (unsigned __int16)v33 >> 1 == (v33 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 6216));
        *(_DWORD *)(v32 + 56) &= 0x10001u;
        goto LABEL_44;
      }
      if ( (unsigned __int16)v33 >> 1 || (v33 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 6216), 0);
        goto LABEL_44;
      }
    }
    else
    {
      v22 = *(_QWORD *)(RefCountTracker + 8);
      if ( v22 )
      {
        for ( k = 0; ; ++k )
        {
          if ( k >= *(_BYTE *)(RefCountTracker + 3) )
            goto LABEL_43;
          v26 = (_BYTE *)(v22 + 2LL * k);
          if ( *v26 == 97 )
          {
            v27 = v26[1];
            if ( v27 )
              break;
          }
        }
        v26[1] = v27 - 1;
        goto LABEL_44;
      }
LABEL_43:
      if ( _bittestandreset((signed __int32 *)(RefCountTracker + 28), 1u) )
      {
LABEL_44:
        v23 = v6->Ref.ReferenceCount - 1;
        v6->Ref.ReferenceCount = v23;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v36 = v6->Ref.ReferenceCount;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xEu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)v6,
            *(_QWORD *)v36);
        }
        KeReleaseSpinLock(&v6->Ref.SpinLock, v21);
        if ( !v23 )
        {
          RemoveReadyEvent = v6->RemoveReadyEvent;
          if ( RemoveReadyEvent )
            KeSetEvent(RemoveReadyEvent, 0, 0);
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v24,
            20,
            26,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            (char)v6);
        }
        goto LABEL_14;
      }
    }
    ndisReportRefcountImbalance(RefCountTracker, 0x61u);
  }
LABEL_14:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v36 = GuidDataSize;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x30u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v36);
  }
  return (unsigned int)GuidDataSize;
}
