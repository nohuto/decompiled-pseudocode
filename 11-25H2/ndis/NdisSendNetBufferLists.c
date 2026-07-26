/*
 * XREFs of NdisSendNetBufferLists @ 0x140031410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14002F320 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140031E30 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031F80 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003BF50 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140044230 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140047C40 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004CD70 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisAllocateNetBufferListContext @ 0x14005F890 (NdisAllocateNetBufferListContext.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x140062630 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x140062930 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14008F880 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x140096000 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400AAB20 (TrackNblContextVerifierFailure.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  ULONG_PTR v4; // rsi
  char *v5; // r14
  int v6; // r15d
  int v7; // ebp
  ULONG v8; // r13d
  NDIS_PORT_NUMBER v9; // ebx
  int v11; // edi
  ULONG_PTR v12; // rcx
  KIRQL v13; // r10
  unsigned int Number; // r14d
  unsigned int v15; // r8d
  PNET_BUFFER_LIST i; // rcx
  $B65189E6CB673822A4686F56170125EF *FirstNetBuffer; // rax
  int j; // edx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r11
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  struct NDIS_NBL_TRACKER_HANDLE__ *v27; // rsi
  PNET_BUFFER_LIST Alignment; // rdi
  unsigned __int64 v29; // rbx
  unsigned __int8 *SourceHandle; // rax
  unsigned __int8 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  struct _NET_BUFFER_LIST *v37; // rax
  struct _NET_BUFFER_LIST *v38; // r10
  char v39; // al
  __int64 v40; // rcx
  KIRQL CurrentIrql; // al
  int v42; // edi
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  struct _NDIS_OBJECT_HEADER *v47; // r9
  struct _NDIS_OBJECT_HEADER *v48; // r8
  void *v49; // rax
  void (*v50)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rcx
  PNET_BUFFER_LIST v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rdi
  char v54; // di
  __int64 v55; // [rsp+30h] [rbp-248h]
  char v56; // [rsp+40h] [rbp-238h]
  KIRQL v57; // [rsp+40h] [rbp-238h]
  KIRQL v58; // [rsp+41h] [rbp-237h]
  char v59; // [rsp+44h] [rbp-234h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-230h]
  ULONG_PTR BugCheckParameter4a; // [rsp+48h] [rbp-230h]
  ULONG_PTR BugCheckParameter4b; // [rsp+48h] [rbp-230h]
  __int64 v63; // [rsp+50h] [rbp-228h]
  unsigned __int64 v64; // [rsp+50h] [rbp-228h]
  unsigned int v65; // [rsp+58h] [rbp-220h]
  unsigned __int64 v66; // [rsp+58h] [rbp-220h]
  __int64 v67; // [rsp+60h] [rbp-218h]
  ULONG_PTR v68; // [rsp+68h] [rbp-210h]
  __int64 v69; // [rsp+68h] [rbp-210h]
  unsigned __int64 v70; // [rsp+68h] [rbp-210h]
  __int64 v71; // [rsp+70h] [rbp-208h]
  int v72; // [rsp+78h] [rbp-200h]
  struct _NET_BUFFER_LIST *v73; // [rsp+80h] [rbp-1F8h] BYREF
  PNET_BUFFER_LIST v74; // [rsp+88h] [rbp-1F0h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v75; // [rsp+90h] [rbp-1E8h]
  ULONG_PTR v76; // [rsp+98h] [rbp-1E0h]
  _BYTE v77[12]; // [rsp+A0h] [rbp-1D8h] BYREF
  char v78; // [rsp+ACh] [rbp-1CCh]
  _QWORD v79[55]; // [rsp+C0h] [rbp-1B8h] BYREF
  struct _NET_BUFFER_LIST *v80; // [rsp+280h] [rbp+8h] BYREF
  NDIS_PORT_NUMBER v81; // [rsp+290h] [rbp+18h]
  ULONG v82; // [rsp+298h] [rbp+20h]

  v82 = SendFlags;
  v81 = PortNumber;
  v80 = (struct _NET_BUFFER_LIST *)NdisBindingHandle;
  v4 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = (char *)NdisBindingHandle;
  v6 = 0;
  v76 = v4;
  LOBYTE(v7) = 0;
  v58 = 2;
  v8 = SendFlags;
  v67 = 0LL;
  v9 = PortNumber;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v6 = *(_DWORD *)(v4 + 48);
    v7 = *(_DWORD *)(v4 + 80);
    v67 = *(_QWORD *)(v4 + 40);
    if ( !v67 )
      v67 = *(_QWORD *)(v4 + 40);
  }
  v11 = *(_DWORD *)(v4 + 2668);
  v72 = v11;
  if ( v11 )
  {
    if ( v11 != 1 && v11 != 3 )
      goto LABEL_6;
    v12 = v4;
  }
  else
  {
    v12 = *(_QWORD *)(v4 + 2568);
  }
  v68 = v12;
  if ( v12 && ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 )
  {
    if ( *(_BYTE *)v12 == 5 )
    {
      if ( !FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v12, 1024) )
        goto LABEL_6;
    }
    else if ( *(_BYTE *)v12 == 17 )
    {
      if ( (*(_DWORD *)(v12 + 3688) & 0x1000) == 0 )
        goto LABEL_6;
    }
    else if ( *(_BYTE *)v12 != 18 || *(int *)(v12 + 224) >= 0 )
    {
      goto LABEL_6;
    }
    BugCheckParameter4b = 0LL;
    v73 = 0LL;
    v74 = (PNET_BUFFER_LIST)&v73;
    memset(&v79[1], 0, 0x178uLL);
    v37 = NetBufferLists;
    v79[0] = NetBufferLists;
    if ( NetBufferLists )
    {
      v51 = (PNET_BUFFER_LIST)v79;
      do
      {
        if ( NdisAllocateNetBufferListContext(NetBufferLists, 8u, 0, 0x6376444Eu) )
        {
          TrackNblContextVerifierFailure(NetBufferLists, v68);
          v51->Link.Alignment = NetBufferLists->Link.Alignment;
          NetBufferLists->Link.Alignment = 0LL;
          v74->Link.Alignment = (unsigned __int64)NetBufferLists;
          v74 = NetBufferLists;
          NetBufferLists = (PNET_BUFFER_LIST)v51->Link.Alignment;
        }
        else
        {
          v51 = NetBufferLists;
          *(_QWORD *)&NetBufferLists->Context->ContextData[NetBufferLists->Context->Offset] = v68;
          NetBufferLists = (PNET_BUFFER_LIST)NetBufferLists->Link.Alignment;
        }
      }
      while ( NetBufferLists );
      v38 = v73;
      v11 = v72;
      v9 = v81;
      v37 = (struct _NET_BUFFER_LIST *)v79[0];
      BugCheckParameter4b = (ULONG_PTR)v73;
    }
    else
    {
      v38 = 0LL;
    }
    v73 = 0LL;
    NetBufferLists = v37;
    v74 = (PNET_BUFFER_LIST)&v73;
    if ( v38 )
    {
      if ( byte_1401278B0 && (*(_DWORD *)(v4 + 5872) & 2) != 0 )
      {
        PktMonClientNblDropNdis(v4 + 5816, (_DWORD)v38, PortNumber, 2, -1073741670, -536866800);
        v38 = (struct _NET_BUFFER_LIST *)BugCheckParameter4b;
      }
      v39 = *(_BYTE *)v4;
      if ( *(_BYTE *)v4 == 5 )
      {
        v52 = *(_QWORD *)(v4 + 456);
      }
      else
      {
        if ( v39 != 17 )
          goto LABEL_76;
        v52 = *(_QWORD *)(v4 + 2568);
      }
      if ( v52 )
      {
        if ( *(_BYTE *)v52 != 5 )
        {
          if ( *(_BYTE *)v52 == 17 )
          {
            v47 = *(struct _NDIS_OBJECT_HEADER **)(v52 + 2592);
            v48 = (struct _NDIS_OBJECT_HEADER *)v52;
            v49 = *(void **)(v52 + 2576);
            v50 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v52 + 2616);
            goto LABEL_133;
          }
LABEL_76:
          NblContextVerifierBugcheckInternalError(v4, (ULONG_PTR)v38);
        }
        v47 = *(struct _NDIS_OBJECT_HEADER **)(v52 + 488);
        v48 = (struct _NDIS_OBJECT_HEADER *)v52;
        v49 = *(void **)(v52 + 472);
        v50 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v52 + 464);
      }
      else
      {
        if ( v39 != 17 )
          goto LABEL_76;
        v47 = *(struct _NDIS_OBJECT_HEADER **)(v4 + 2408);
        v48 = (struct _NDIS_OBJECT_HEADER *)v4;
        v49 = *(void **)(v4 + 2392);
        v50 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v4 + 2432);
      }
LABEL_133:
      ndisInvokeNextSendCompleteHandler(v38, v8 & 1, v48, v47, v49, v50);
      if ( !v79[0] )
        return;
    }
  }
LABEL_6:
  if ( (*((_DWORD *)v5 + 56) & 1) != 0 )
  {
    ndisNblVerifyTxIndication(NetBufferLists, v9, v8, (const struct _NDIS_OBJECT_HEADER *)v5);
    ndisNblPoisonScratchFields(NetBufferLists);
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v20 = 0LL;
    *(_QWORD *)&PortNumber = *(_QWORD *)(v4 + 2560);
    v21 = 0LL;
    v22 = ndisNblTrackerEpoch;
    v23 = v8 & 1;
    v75 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v5 + 73);
    v59 = v8 & 1;
    BugCheckParameter4 = *(_QWORD *)&PortNumber;
    v65 = ndisNblTrackerEpoch;
    v63 = 0LL;
    v69 = 0LL;
    v71 = 0LL;
    v56 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        (unsigned __int64)NetBufferLists,
        (unsigned __int64)v75,
        0x8Fu,
        *(void **)&PortNumber,
        v23);
      v20 = 0LL;
      *(_QWORD *)&PortNumber = BugCheckParameter4;
      v21 = 0LL;
      LOBYTE(v23) = v8 & 1;
      v22 = v65;
    }
    v24 = *(_QWORD *)&PortNumber & 0xFFFFFFFFFFFFFFFDuLL;
    v66 = *(_QWORD *)&PortNumber & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (PortNumber & 1) != 0 )
    {
      BugCheckParameter4a = *(_QWORD *)((*(_QWORD *)&PortNumber & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v25 = v22;
      v26 = BugCheckParameter4a;
      v24 = (2 * v25) ^ (*(_QWORD *)&PortNumber ^ (2 * v25)) & 0xFFFFFFFFFFFFFFFDuLL;
      v66 = v24;
    }
    else
    {
      v26 = *(_QWORD *)&PortNumber & 0xFFFFFFFFFFFFFFFDuLL;
      BugCheckParameter4a = *(_QWORD *)&PortNumber & 0xFFFFFFFFFFFFFFFDuLL;
    }
    if ( NetBufferLists )
    {
      v27 = v75;
      Alignment = NetBufferLists;
      while ( 1 )
      {
        v29 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v29 )
        {
          if ( v29 )
          {
            if ( (v29 & 4) != 0 )
              goto LABEL_107;
          }
          else if ( !Alignment->SourceHandle )
          {
            v45 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( ((unsigned __int8)v27 & 1) != 0 )
              v45 = *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            Alignment->SourceHandle = (void *)v45;
          }
          SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v31 = *SourceHandle;
            if ( *SourceHandle == 17 || v31 == 5 || v31 == 18 )
            {
              if ( SourceHandle != (unsigned __int8 *)v26 || Alignment->ParentNetBufferList )
              {
                ++v20;
                v32 = v24;
                v63 = v20;
              }
              else
              {
                ++v21;
                v32 = 24LL;
                ++v20;
                v71 = v21;
                v63 = v20;
              }
              goto LABEL_49;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v55) = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)Alignment,
                v55);
LABEL_112:
              v24 = v66;
              v20 = v63;
              v21 = v71;
              v26 = BugCheckParameter4a;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)Alignment);
            goto LABEL_112;
          }
LABEL_107:
          v32 = v24 | 4;
LABEL_49:
          *(_QWORD *)&PortNumber = Alignment;
          Alignment->NetBufferListInfo[27] = (void *)v32;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v33 = v69 - v20;
        LOBYTE(v23) = v59;
        v70 = v69 - v20;
        if ( (v29 & 1) == 0 || !v33 )
          goto LABEL_55;
        if ( v59 || v56 )
        {
          v34 = 16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v59 )
            goto LABEL_82;
          goto LABEL_54;
        }
        v56 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v20 = v63;
        v33 = v70;
        if ( CurrentIrql == 2 )
        {
          LOBYTE(v23) = 1;
          v59 = 1;
          v34 = 16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_54:
          v35 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v35 + *(_QWORD *)v34) += v33;
          goto LABEL_55;
        }
        LOBYTE(v23) = 0;
        v59 = 0;
        v34 = 16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_82:
        _InterlockedAdd64((volatile signed __int64 *)(v34 + 8), v33);
LABEL_55:
        v24 = v66;
        v21 = v71;
        v26 = BugCheckParameter4a;
        v69 = v20;
        if ( !Alignment )
        {
          v11 = v72;
          v4 = v76;
          v5 = (char *)v80;
          v8 = v82;
          v9 = v81;
          break;
        }
      }
    }
    v36 = v20 - v21;
    v64 = v36;
    if ( (v24 & 1) == 0 || !v36 )
      goto LABEL_9;
    if ( (_BYTE)v23 || v56 )
    {
      *(_QWORD *)&PortNumber = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v23 )
        goto LABEL_63;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v36 = v64;
        *(_QWORD *)&PortNumber = 16 * ((v66 >> 1) & 1) + (v66 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_63:
        _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)&PortNumber + 8LL), v36);
        goto LABEL_9;
      }
      *(_QWORD *)&PortNumber = 16 * ((v66 >> 1) & 1) + (v66 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v40 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v40 + **(_QWORD **)&PortNumber) += v64;
  }
LABEL_9:
  if ( byte_1401278B0 )
  {
    v46 = *((_QWORD *)v5 + 126);
    if ( v46 )
    {
      if ( (*(_DWORD *)(v46 + 56) & 1) != 0 )
        PktMonClientNblLogNdis(v5 + 984, NetBufferLists, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  if ( (v6 & 0x200140) == 0 && (v7 & 0x40) == 0 )
  {
    Number = -1;
  }
  else
  {
    if ( (v8 & 1) != 0 )
    {
      v13 = 2;
    }
    else
    {
      v13 = KfRaiseIrql(2u);
      v58 = v13;
    }
    if ( (v6 & 0x40) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwPerCpuDataStride * Number + v67 + ndisPcwOffsetToPerCpuData + 48);
    }
    else
    {
      Number = -1;
    }
    if ( !v13 && (v6 & 0x200000) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwPerCpuDataStride * Number + v67 + ndisPcwOffsetToPerCpuData + 200);
    }
    if ( (v6 & 0x400100) != 0 )
    {
      v15 = 0;
      for ( i = NetBufferLists; i; v15 += j )
      {
        FirstNetBuffer = ($B65189E6CB673822A4686F56170125EF *)i->FirstNetBuffer;
        for ( j = 0; FirstNetBuffer; ++j )
          FirstNetBuffer = ($B65189E6CB673822A4686F56170125EF *)FirstNetBuffer->Link.Alignment;
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      }
      if ( (v6 & 0x100) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v67 + ndisPcwOffsetToPerCpuData + 64) += v15;
      }
      if ( !v13 && (v6 & 0x400000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v67 + ndisPcwOffsetToPerCpuData + 208) += v15;
      }
    }
    if ( (v7 & 0x40) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      v19 = v67;
      *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v67 + ndisPcwOffsetToPerCpuData + 352) = __rdtsc();
      goto LABEL_90;
    }
    if ( v13 != 2 )
      KeLowerIrql(v13);
  }
  v19 = v67;
LABEL_90:
  if ( v11 )
  {
    v42 = v11 - 1;
    if ( v42 )
    {
      if ( v42 == 1 )
        ndisMSendNetBufferListsToPackets((struct _NDIS_MINIPORT_BLOCK *)v4, NetBufferLists, v9, v8);
      else
        ndisMFakeSendNetBufferLists((struct _NDIS_OBJECT_HEADER *)v4, NetBufferLists, v9, v8);
    }
    else
    {
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)v4, NetBufferLists, v9, v8, 0);
    }
  }
  else
  {
    v53 = *(_QWORD *)(v4 + 2568);
    v80 = NetBufferLists;
    if ( *(_BYTE *)v53 == 5
      && FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v53, 0x8000)
      && !*(_DWORD *)(v53 + 336)
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v8 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v53, NetBufferLists, v9, v8, &v80);
      NetBufferLists = v80;
    }
    if ( NetBufferLists )
    {
      v57 = 2;
      LOBYTE(v80) = 0;
      if ( *(_QWORD *)(v4 + 2552) == v4 )
      {
        NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v77, (struct _NDIS_MINIPORT_BLOCK *)v4);
        v54 = 1;
        if ( v78 < 0 )
        {
          if ( (v8 & 1) == 0 )
          {
            v57 = KfRaiseIrql(2u);
            LOBYTE(v80) = 1;
          }
          ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v77, 7u);
        }
      }
      else
      {
        v54 = 0;
        NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v77, (struct _NDIS_MINIPORT_BLOCK *)v4);
      }
      ndisInvokeNextSendHandler(
        NetBufferLists,
        v9,
        v8,
        *(struct _NDIS_OBJECT_HEADER **)(v4 + 2568),
        *(void **)(v4 + 2552),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 2648));
      if ( v54 )
      {
        if ( v78 < 0 )
          ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v77, 7u, 0x14uLL);
        if ( (_BYTE)v80 && v57 != 2 )
          KeLowerIrql(v57);
      }
    }
  }
  if ( (v7 & 0x40) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v43 = v19 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v44 = __rdtsc();
    *(_QWORD *)(v43 + 152) += (((unsigned __int64)HIDWORD(v44) << 32) | (unsigned int)v44) - *(_QWORD *)(v43 + 352);
    *(_QWORD *)(v43 + 352) = 0LL;
    if ( v58 != 2 )
      KeLowerIrql(v58);
  }
}
