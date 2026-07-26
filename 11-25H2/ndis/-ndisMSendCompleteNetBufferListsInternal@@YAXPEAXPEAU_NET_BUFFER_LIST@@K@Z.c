/*
 * XREFs of ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400324C0
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140031E30 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140032C90 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x140032CE0 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(_DWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  struct _NET_BUFFER_LIST *v3; // rbx
  unsigned int Number; // edi
  unsigned int v5; // r12d
  struct _NDIS_OPEN_BLOCK *v6; // rsi
  struct _NDIS_OPEN_BLOCK *v7; // r13
  unsigned __int64 v8; // r15
  _QWORD *p_Alignment; // r14
  unsigned __int8 *v10; // r9
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v12; // rdi
  _SLIST_HEADER *Alignment; // rdx
  unsigned int v14; // r8d
  _QWORD *Region; // rcx
  int i; // eax
  _QWORD *v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  char v22; // r13
  unsigned __int64 NblTracker; // r12
  unsigned int v24; // r13d
  __int64 v25; // r14
  __int64 v26; // r8
  unsigned __int64 v27; // rbx
  _QWORD *v28; // r12
  unsigned __int64 v29; // rdi
  unsigned __int8 *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-39h]
  __int64 v39; // [rsp+40h] [rbp-29h]
  __int64 v40; // [rsp+48h] [rbp-21h]
  unsigned __int64 v41; // [rsp+48h] [rbp-21h]
  struct _NET_BUFFER_LIST *v42; // [rsp+50h] [rbp-19h]
  struct _NDIS_OPEN_BLOCK *v43; // [rsp+58h] [rbp-11h]
  struct _NDIS_OPEN_BLOCK *v44; // [rsp+60h] [rbp-9h]
  __int64 v45; // [rsp+68h] [rbp-1h] BYREF
  __int64 v46; // [rsp+70h] [rbp+7h]
  int v47; // [rsp+78h] [rbp+Fh]
  struct _NET_BUFFER_LIST *v48; // [rsp+D0h] [rbp+67h]
  char v49; // [rsp+D0h] [rbp+67h]
  KIRQL v50; // [rsp+D8h] [rbp+6Fh]
  unsigned int v52; // [rsp+E8h] [rbp+7Fh]
  unsigned __int8 *v53; // [rsp+E8h] [rbp+7Fh]

  v3 = a2;
  LODWORD(a2) = a1[12];
  Number = -1;
  v43 = 0LL;
  v5 = a3;
  v44 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  v7 = 0LL;
  v48 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  p_Alignment = 0LL;
  v46 = 0LL;
  v10 = 0LL;
  v47 = -1;
  if ( (_DWORD)a2 || a1[20] )
  {
    HIDWORD(v46) = a1[20];
    v20 = *((_QWORD *)a1 + 5);
    LODWORD(v46) = (_DWORD)a2;
    v45 = v20;
    if ( !v20 )
    {
      Number = v47;
      v45 = *((_QWORD *)a1 + 5);
    }
  }
  v50 = 2;
  if ( (v46 & 0x280) != 0 || (v46 & 0x20000000000LL) != 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v50 = KfRaiseIrql(2u);
      v10 = 0LL;
    }
    if ( (v46 & 0x200) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v3;
      v14 = 0;
      if ( v3 )
      {
        do
        {
          Region = (_QWORD *)Alignment->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          v14 += i;
        }
        while ( Alignment );
      }
      Number = KeGetPcr()->Prcb.Number;
      LODWORD(a2) = ndisPcwOffsetToPerCpuData;
      v47 = Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v45 + ndisPcwPerCpuDataStride * Number + 72) += v14;
    }
  }
  if ( v3 )
  {
    do
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v3->SourceHandle;
      v12 = (struct _NET_BUFFER_LIST *)v3->Link.Alignment;
      v3->Link.Alignment = 0LL;
      if ( SourceHandle == v6 )
      {
        *p_Alignment = v3;
        p_Alignment = &v3->Link.Alignment;
      }
      else if ( SourceHandle == v7 )
      {
        *(_QWORD *)v10 = v3;
        v48 = v3;
      }
      else if ( v6 )
      {
        if ( v7 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v3, v5, (struct NDIS_PCW_CONTEXT *)&v45);
        }
        else
        {
          v7 = SourceHandle;
          v42 = v3;
          v48 = v3;
        }
      }
      else
      {
        v6 = SourceHandle;
        v8 = (unsigned __int64)v3;
        p_Alignment = &v3->Link.Alignment;
      }
      v10 = (unsigned __int8 *)v48;
      v3 = v12;
    }
    while ( v12 );
    Number = v47;
    v44 = v7;
    v43 = v6;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v21 = ndisNblTrackerEpoch;
    v22 = v5;
    NblTracker = (unsigned __int64)v6->NblTracker;
    v24 = v22 & 1;
    v52 = ndisNblTrackerEpoch;
    v25 = 0LL;
    v40 = 0LL;
    v26 = 0LL;
    v39 = 0LL;
    v49 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v8, 0LL, 0x95u, (void *)NblTracker, v24);
      v21 = v52;
      v26 = 0LL;
    }
    v27 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (NblTracker & 1) != 0 )
    {
      v10 = *(unsigned __int8 **)((NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v27 = (2LL * v21) ^ (NblTracker ^ (2LL * v21)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v10 = (unsigned __int8 *)(NblTracker & 0xFFFFFFFFFFFFFFFDuLL);
    }
    v53 = v10;
    v28 = (_QWORD *)v8;
    if ( v8 )
    {
      while ( 1 )
      {
        v29 = v28[45];
        while ( v28[45] == v29 )
        {
          if ( v29 )
          {
            if ( (v29 & 4) != 0 )
              goto LABEL_86;
          }
          else if ( !v28[15] )
          {
            v28[15] = 0LL;
          }
          v30 = (unsigned __int8 *)v28[15];
          if ( v30 )
          {
            LODWORD(a2) = *v30;
            if ( (unsigned __int8)((_BYTE)a2 - 17) <= 1u || (_BYTE)a2 == 5 )
            {
              if ( v30 != v10 || v28[3] )
              {
                ++v25;
                v31 = v27;
              }
              else
              {
                ++v26;
                v31 = 24LL;
                v39 = v26;
                ++v25;
              }
              goto LABEL_55;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v38) = *v30;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)v28,
                v38);
LABEL_103:
              v26 = v39;
              v10 = v53;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)a2,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)v28);
            goto LABEL_103;
          }
LABEL_86:
          v31 = v27 | 4;
LABEL_55:
          v28[45] = v31;
          v28 = (_QWORD *)*v28;
          if ( !v28 )
            break;
        }
        a2 = (struct _NET_BUFFER_LIST *)(v40 - v25);
        v41 = v40 - v25;
        if ( (v29 & 1) == 0 || !a2 )
          goto LABEL_61;
        if ( (_BYTE)v24 || v49 )
        {
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !(_BYTE)v24 )
            goto LABEL_77;
          goto LABEL_60;
        }
        v49 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v24) = 1;
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_60:
          v32 = (_QWORD *)(a2->Link.Alignment + (KeGetPcr()->Prcb.Number << 12));
          *v32 += v41;
          goto LABEL_61;
        }
        LOBYTE(v24) = 0;
        a2 = (struct _NET_BUFFER_LIST *)(16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_77:
        _InterlockedAdd64((volatile signed __int64 *)&a2->FirstNetBuffer, v41);
LABEL_61:
        v26 = v39;
        v10 = v53;
        v40 = v25;
        if ( !v28 )
        {
          Number = v47;
          v6 = v43;
          break;
        }
      }
    }
    v33 = v25 - v26;
    if ( (v27 & 1) == 0 || !v33 )
    {
LABEL_73:
      v5 = a3;
      goto LABEL_13;
    }
    if ( (_BYTE)v24 || v49 )
    {
      v34 = 16 * ((v27 >> 1) & 1) + (v27 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v24 )
        goto LABEL_69;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v34 = 16 * ((v27 >> 1) & 1) + (v27 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_69:
        _InterlockedAdd64((volatile signed __int64 *)(v34 + 8), v33);
LABEL_72:
        Number = v47;
        goto LABEL_73;
      }
      v34 = 16 * ((v27 >> 1) & 1) + (v27 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v35 = (_QWORD *)(*(_QWORD *)v34 + (KeGetPcr()->Prcb.Number << 12));
    *v35 += v33;
    goto LABEL_72;
  }
LABEL_13:
  if ( byte_1401278B0 )
  {
    v17 = (_QWORD *)v8;
    if ( v8 )
    {
      do
      {
        v17[31] = 0LL;
        v17 = (_QWORD *)*v17;
      }
      while ( v17 );
    }
  }
  if ( (v46 & 0x80u) != 0LL )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v45 + ndisPcwPerCpuDataStride * Number + 56);
  }
  if ( (v46 & 0x20000000000LL) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v45 + ndisPcwPerCpuDataStride * Number + 376) = __rdtsc();
    ((void (__fastcall *)(void *, unsigned __int64, _QWORD, unsigned __int8 *))v6->ProtSendNetBufferListsComplete)(
      v6->SendCompleteNetBufferListsContext,
      v8,
      v5,
      v10);
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v18 = v45 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v19 = __rdtsc();
    *(_QWORD *)(v18 + 176) += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - *(_QWORD *)(v18 + 376);
    *(_QWORD *)(v18 + 376) = 0LL;
  }
  else
  {
    ((void (__fastcall *)(void *, unsigned __int64, _QWORD, unsigned __int8 *))v6->ProtSendNetBufferListsComplete)(
      v6->SendCompleteNetBufferListsContext,
      v8,
      v5,
      v10);
  }
  if ( v44 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(v42, 0LL, (unsigned __int64)v44->NblTracker, 0x95u, v5 & 1);
    if ( byte_1401278B0 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v42);
    if ( (v46 & 0x80u) != 0LL )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v45 + ndisPcwPerCpuDataStride * Number + 56);
    }
    if ( (v46 & 0x20000000000LL) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v45 + ndisPcwPerCpuDataStride * Number + 376) = __rdtsc();
    }
    v44->ProtSendNetBufferListsComplete(v44->SendCompleteNetBufferListsContext, v42, v5);
    if ( (v46 & 0x20000000000LL) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      v36 = v45 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v37 = __rdtsc();
      *(_QWORD *)(v36 + 176) += (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37) - *(_QWORD *)(v36 + 376);
      *(_QWORD *)(v36 + 376) = 0LL;
    }
  }
  if ( v50 != 2 )
    KeLowerIrql(v50);
}
