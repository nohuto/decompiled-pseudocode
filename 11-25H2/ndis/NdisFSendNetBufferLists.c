/*
 * XREFs of NdisFSendNetBufferLists @ 0x14001FCC0
 * Callers:
 *     ?SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400AAAC0 (-SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     NdisFSendNetBufferListsComplete @ 0x1400207A0 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031F80 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblDrop @ 0x14003AAA0 (PktMonClientNblDrop.c)
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003C590 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x14003CA30 (--$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140044000 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140044330 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     NdisAllocateNetBufferListContext @ 0x14005F890 (NdisAllocateNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14008F880 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x140096000 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400AAB20 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  char *v4; // rsi
  __int64 v5; // rcx
  ULONG v6; // r12d
  NDIS_PORT_NUMBER v7; // edi
  PNET_BUFFER_LIST Alignment; // r15
  unsigned __int64 v9; // rdx
  ULONG v10; // ecx
  char v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  _SLIST_HEADER *v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  _SLIST_HEADER *v17; // r12
  unsigned __int64 Region; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int8 *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned __int64 v23; // r14
  _QWORD *v24; // rcx
  void (__fastcall *v25)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rbx
  int v30; // r12d
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r13
  NDIS_HANDLE v34; // rcx
  PNET_BUFFER_LIST *v35; // rcx
  _QWORD *v36; // rax
  int v37; // eax
  struct _NET_BUFFER_LIST *v38; // rdi
  int v39; // r9d
  struct _NET_BUFFER_LIST *v40; // r14
  _SLIST_HEADER *v41; // r13
  char v42; // al
  unsigned __int64 v43; // rax
  PNET_BUFFER_LIST v44; // rdi
  char v45; // r13
  __int64 v46; // rax
  int v47; // edi
  bool v48; // zf
  __int64 v49; // rdx
  int v50; // r8d
  struct _NET_BUFFER_LIST *v51; // rdi
  unsigned __int64 v52; // rcx
  struct _NET_BUFFER *FirstNetBuffer; // r13
  int v54; // r8d
  struct _NDIS_OBJECT_HEADER *v55; // r9
  void *v56; // rax
  void (*v57)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rcx
  unsigned __int64 v58; // rdi
  NDIS_HANDLE v59; // r8
  unsigned int Flags; // eax
  unsigned int v61; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // r14
  ULONG v63; // r13d
  _SLIST_HEADER *v64; // rax
  char v65[8]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v66; // [rsp+40h] [rbp-C0h] BYREF
  char v67; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v68[6]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-B8h]
  ULONG SendCompleteFlags[2]; // [rsp+50h] [rbp-B0h]
  _SLIST_HEADER *v71; // [rsp+58h] [rbp-A8h]
  struct _NET_BUFFER_LIST *v72; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *p_Alignment; // [rsp+68h] [rbp-98h]
  __int16 v74; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+72h] [rbp-8Eh]
  __int16 v76; // [rsp+76h] [rbp-8Ah]
  PNET_BUFFER_LIST v77; // [rsp+78h] [rbp-88h]
  int v78; // [rsp+80h] [rbp-80h]
  int v79; // [rsp+84h] [rbp-7Ch]
  int v80; // [rsp+88h] [rbp-78h]
  int v81; // [rsp+8Ch] [rbp-74h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  unsigned __int64 v83; // [rsp+98h] [rbp-68h]
  _QWORD v84[56]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+270h] [rbp+170h]
  PNET_BUFFER_LIST v87; // [rsp+278h] [rbp+178h]

  v87 = NetBufferList;
  v4 = (char *)NdisFilterHandle;
  v5 = *((_QWORD *)NdisFilterHandle + 57);
  v6 = SendFlags;
  v7 = PortNumber;
  Alignment = NetBufferList;
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !v5 )
    goto LABEL_2;
  switch ( *(_BYTE *)v5 )
  {
    case 5:
      LOBYTE(v37) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v5, 0x400u) != 0;
      break;
    case 0x11:
      LOBYTE(v37) = (*(_DWORD *)(v5 + 3688) & 0x1000) != 0;
      break;
    case 0x12:
      v37 = *(_DWORD *)(v5 + 224) >> 31;
      break;
    default:
      goto LABEL_2;
  }
  if ( (_BYTE)v37 )
  {
    v69 = *((_QWORD *)v4 + 57);
    v72 = 0LL;
    p_Alignment = &v72;
    v38 = 0LL;
    memset(&v84[1], 0, 0x178uLL);
    v84[0] = Alignment;
    v40 = Alignment;
    v41 = (_SLIST_HEADER *)v84;
    if ( Alignment )
    {
      v58 = v69;
      do
      {
        if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
        {
          TrackNblContextVerifierFailure(Alignment, v58);
          v41->Alignment = Alignment->Link.Alignment;
          Alignment->Link.Alignment = 0LL;
          *p_Alignment = Alignment;
          p_Alignment = &Alignment->Link.Alignment;
          Alignment = (PNET_BUFFER_LIST)v41->Alignment;
        }
        else
        {
          v41 = (_SLIST_HEADER *)Alignment;
          *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = v58;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
      }
      while ( Alignment );
      v38 = v72;
      v40 = (struct _NET_BUFFER_LIST *)v84[0];
    }
    v87 = v40;
    p_Alignment = &v72;
    Alignment = v40;
    v72 = 0LL;
    if ( !v38 )
    {
LABEL_120:
      v7 = PortNumber;
      goto LABEL_2;
    }
    if ( byte_1401278B0 && (*((_DWORD *)v4 + 210) & 2) != 0 )
      PktMonClientNblDrop((_DWORD)v4 + 784, (_DWORD)v38, *((_DWORD *)v4 + 209), v39);
    v42 = *v4;
    if ( *v4 == 5 )
    {
      v59 = (NDIS_HANDLE)*((_QWORD *)v4 + 57);
    }
    else
    {
      if ( v42 != 17 )
        goto LABEL_80;
      v59 = (NDIS_HANDLE)*((_QWORD *)v4 + 321);
    }
    if ( v59 )
    {
      if ( *(_BYTE *)v59 != 5 )
      {
        if ( *(_BYTE *)v59 == 17 )
        {
          v55 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v59 + 324);
          v56 = (void *)*((_QWORD *)v59 + 322);
          v57 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v59 + 327);
          goto LABEL_119;
        }
LABEL_80:
        NblContextVerifierBugcheckInternalError((ULONG_PTR)v4, (ULONG_PTR)v38);
      }
      v55 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v59 + 61);
      v56 = (void *)*((_QWORD *)v59 + 59);
      v57 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v59 + 58);
    }
    else
    {
      if ( v42 != 17 )
        goto LABEL_80;
      v55 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v4 + 301);
      v59 = v4;
      v56 = (void *)*((_QWORD *)v4 + 299);
      v57 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v4 + 304);
    }
LABEL_119:
    ndisInvokeNextSendCompleteHandler(v38, v6 & 1, (struct _NDIS_OBJECT_HEADER *)v59, v55, v56, v57);
    if ( !v40 )
      return;
    goto LABEL_120;
  }
LABEL_2:
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v4, 0x200u) )
  {
    ndisNblVerifyTxIndication(Alignment, v7, v6, (const struct _NDIS_OBJECT_HEADER *)v4);
    v44 = Alignment;
    if ( Alignment )
    {
      v45 = byte_140126F70;
      do
      {
        v44->Scratch = MmBadPointer;
        Flags = v44->Flags;
        v44->ChildRefCount = -892679478;
        if ( v45 )
        {
          v45 = 0;
          v61 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v45 = 1;
          v61 = Flags | 0xF0000;
        }
        byte_140126F70 = v45;
        v44->Flags = v61;
        for ( i = v44->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        v44 = (PNET_BUFFER_LIST)v44->Link.Alignment;
      }
      while ( v44 );
    }
  }
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_31;
  v9 = *((_QWORD *)v4 + 81);
  v10 = ndisNblTrackerEpoch;
  v11 = v6 & 1;
  v12 = *((_QWORD *)v4 + 56);
  v13 = 0LL;
  v83 = v9;
  v14 = 0LL;
  SendCompleteFlags[0] = ndisNblTrackerEpoch;
  v69 = 0LL;
  v71 = 0LL;
  v67 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)Alignment, v9, 0x90u, (void *)v12, v6 & 1);
    v10 = SendCompleteFlags[0];
    v14 = 0LL;
  }
  v15 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v12 & 1) != 0 )
  {
    v16 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v15 = (2LL * v10) ^ (v12 ^ (2LL * v10)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v16 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_QWORD *)SendCompleteFlags = v16;
  if ( Alignment )
  {
    v17 = (_SLIST_HEADER *)Alignment;
    while ( 1 )
    {
      Region = v17[22].Region;
      v19 = v83;
      while ( v17[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_86;
        }
        else if ( !v17[7].Region )
        {
          v43 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v19 & 1) != 0 )
            v43 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          v17[7].Region = v43;
        }
        v20 = (unsigned __int8 *)v17[7].Region;
        if ( v20 )
        {
          LODWORD(v9) = *v20;
          if ( (unsigned __int8)(v9 - 17) <= 1u || (_BYTE)v9 == 5 )
          {
            if ( v20 != (unsigned __int8 *)v16 || v17[1].Region )
            {
              ++v13;
              v21 = v15;
            }
            else
            {
              v14 = (_SLIST_HEADER *)((char *)v14 + 1);
              v21 = 24LL;
              v71 = v14;
              ++v13;
            }
            goto LABEL_18;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v65 = *v20;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v17,
              *(_QWORD *)v65);
LABEL_155:
            v14 = v71;
            v16 = *(_QWORD *)SendCompleteFlags;
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            27,
            11,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)v17);
          goto LABEL_155;
        }
LABEL_86:
        v21 = v15 | 4;
LABEL_18:
        v17[22].Region = v21;
        v17 = (_SLIST_HEADER *)v17->Alignment;
        if ( !v17 )
          break;
      }
      Alignment = v87;
      v9 = v69 - v13;
      v69 -= v13;
      if ( (Region & 1) == 0 || !v9 )
        goto LABEL_24;
      if ( v11 || v67 )
      {
        v9 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v11 )
          goto LABEL_50;
        goto LABEL_23;
      }
      v67 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v11 = 1;
        v9 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_23:
        v22 = (_QWORD *)(*(_QWORD *)v9 + (KeGetPcr()->Prcb.Number << 12));
        *v22 += v69;
        goto LABEL_24;
      }
      v11 = 0;
      v9 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_50:
      _InterlockedAdd64((volatile signed __int64 *)(v9 + 8), v69);
LABEL_24:
      v14 = v71;
      v16 = *(_QWORD *)SendCompleteFlags;
      v69 = v13;
      if ( !v17 )
      {
        v4 = (char *)NdisFilterHandle;
        v6 = SendFlags;
        break;
      }
    }
  }
  v23 = v13 - (_QWORD)v14;
  if ( (v15 & 1) == 0 || !v23 )
    goto LABEL_31;
  if ( !v11 && !v67 )
  {
    if ( KeGetCurrentIrql() != 2 )
    {
      v9 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      goto LABEL_46;
    }
    v9 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_30:
    v24 = (_QWORD *)(*(_QWORD *)v9 + (KeGetPcr()->Prcb.Number << 12));
    *v24 += v23;
    goto LABEL_31;
  }
  v9 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
  if ( v11 )
    goto LABEL_30;
LABEL_46:
  _InterlockedAdd64((volatile signed __int64 *)(v9 + 8), v23);
LABEL_31:
  if ( byte_1401278B0 )
  {
    v46 = *((_QWORD *)v4 + 109);
    if ( v46 )
    {
      if ( (*(_DWORD *)(v46 + 56) & 1) != 0 )
      {
        v47 = *((_DWORD *)v4 + 220);
        v48 = (Alignment->NblFlags & 0x8000) == 0;
        v75 = 0;
        v76 = 0;
        v81 = 0;
        if ( v48 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v49 = *((_QWORD *)v4 + 108);
            v74 = 40;
            v77 = Alignment;
            v78 = 1;
            v79 = v47;
            v80 = 2;
            v82 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
              xmmword_1401278D0,
              v49,
              &v74,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  v25 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)v4 + 78);
  if ( v25 != ndisFilterSendNetBufferLists )
  {
    v34 = v4;
    goto LABEL_54;
  }
  v26 = *((_QWORD *)v4 + 57);
  v27 = *((_QWORD *)v4 + 4);
  if ( *(_BYTE *)v26 != 5
    || !FILTER_TEST_FLAG(*((const struct _NDIS_FILTER_BLOCK **)v4 + 57), 0x8000u)
    || *(_DWORD *)(v26 + 336)
    || (!*(_BYTE *)(v27 + 91) || *(_WORD *)(v27 + 1820) <= 1u && !*(_BYTE *)(v27 + 1999))
    && (v6 & 2) == 0
    && (*(_DWORD *)(v27 + 120) & 0x4000) == 0 )
  {
    v28 = 0;
    goto LABEL_36;
  }
  v28 = 0;
  v51 = Alignment;
  v71 = 0LL;
  SendCompleteFlags[0] = 0;
  v68[0] = 0;
  v66 = 0;
  do
  {
    v48 = (v51->Flags & 0x800) == 0;
    v52 = v51->Link.Alignment;
    v69 = v51->Link.Alignment;
    if ( !v48 )
    {
      v66 = 0;
      goto LABEL_116;
    }
    FirstNetBuffer = v51->FirstNetBuffer;
    do
    {
      ndisFIsLoopbackNetBuffer((struct _NDIS_FILTER_BLOCK *)v26, FirstNetBuffer, v51, v68, &v66);
      if ( v68[0] == 1 )
      {
        v68[0] = 0;
        ndisFDoLoopbackNetBufferList((struct _NDIS_FILTER_BLOCK *)v26, FirstNetBuffer, v51, PortNumber, v6);
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    if ( v66 != 1 )
    {
      v52 = v69;
LABEL_116:
      v71 = (_SLIST_HEADER *)v51;
      goto LABEL_117;
    }
    v66 = 0;
    if ( Alignment == v51 )
      Alignment = (PNET_BUFFER_LIST)v69;
    else
      v71->Alignment = v69;
    v63 = SendCompleteFlags[0];
    v51->Link.Alignment = 0LL;
    v51->Status = 0;
    if ( (v6 & 1) != 0 )
    {
      v63 |= 1u;
      SendCompleteFlags[0] = v63;
    }
    NdisFSendNetBufferListsComplete((NDIS_HANDLE)v26, v51, v63);
    v52 = v69;
LABEL_117:
    v51 = (struct _NET_BUFFER_LIST *)v52;
  }
  while ( v52 );
  v4 = (char *)NdisFilterHandle;
LABEL_36:
  if ( !Alignment )
    return;
  LODWORD(v25) = KeGetPcr()->Prcb.Number;
  v29 = *((_QWORD *)v4 + 53) + 96LL * (_QWORD)v25;
  if ( (v6 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v29 + 16) )
  {
    v31 = *((_QWORD *)v4 + 57);
    v32 = *((_QWORD *)v4 + 55);
    v33 = *((_QWORD *)v4 + 54);
    v86 = v32;
    if ( *(_BYTE *)v31 != 17 )
    {
      if ( (v6 & 1) != 0 || (v48 = KeGetCurrentIrql() == 2, v32 = v86, v48) )
      {
        ndisInvokeIterativeDatapath<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
          (int)Alignment,
          v9,
          PortNumber,
          v6,
          (struct _NDIS_FILTER_BLOCK *)v31,
          v32,
          v33);
      }
      else if ( (int)ndisExpandDataPathStack<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
                       (_DWORD)Alignment,
                       PortNumber,
                       v50,
                       v6,
                       v31,
                       v86,
                       v33) < 0 )
      {
        if ( byte_1401278B0 && (*(_DWORD *)(v31 + 840) & 2) != 0 )
          PktMonClientNblDropNdis(v31 + 784, (_DWORD)Alignment, v54, 2, -1073741670, -536866812);
        NdisSetStatusInNblChain(Alignment, -1073741670);
        v64 = (_SLIST_HEADER *)Alignment;
        do
        {
          v64 = (_SLIST_HEADER *)v64->Alignment;
          ++v28;
        }
        while ( v64 );
        _InterlockedAdd((volatile signed __int32 *)(v31 + 296), v28);
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v31, Alignment, 1u);
      }
      return;
    }
    v34 = (NDIS_HANDLE)*((_QWORD *)v4 + 55);
    v25 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)v4 + 54);
LABEL_54:
    v25(v34, Alignment, PortNumber, v6);
    return;
  }
  v30 = v6 | 1;
  if ( !*(_QWORD *)v29 )
  {
    *(_QWORD *)v29 = Alignment;
    goto LABEL_41;
  }
  v35 = *(PNET_BUFFER_LIST **)(v29 + 8);
  if ( PortNumber == *((_DWORD *)v35 + 35) && v30 == *((_DWORD *)v35 + 33) && (v30 & 0x34) == 0 )
  {
    v36 = *v35;
    if ( *v35 )
    {
      do
      {
        v35 = (PNET_BUFFER_LIST *)v36;
        v36 = (_QWORD *)*v36;
      }
      while ( v36 );
    }
    *v35 = Alignment;
  }
  else
  {
    v35[14] = Alignment;
LABEL_41:
    *(_QWORD *)(v29 + 8) = Alignment;
    Alignment->Scratch = 0LL;
    Alignment->ChildRefCount = v30;
    Alignment->Status = PortNumber;
  }
}
