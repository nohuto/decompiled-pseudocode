/*
 * XREFs of ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x140032CE0
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400324C0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct NDIS_PCW_CONTEXT *a4)
{
  _NET_BUFFER_LIST *v6; // r14
  unsigned int v7; // r15d
  unsigned int *v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int *v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _SLIST_HEADER *v13; // rax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  unsigned int v15; // r8d
  __int64 v16; // r12
  __int64 v17; // r9
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r10
  _SLIST_HEADER *Alignment; // r12
  unsigned __int64 Region; // rdi
  unsigned __int8 *v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  _QWORD *v26; // rcx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rcx
  KIRQL CurrentIrql; // al
  __int64 v31; // [rsp+30h] [rbp-68h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+50h] [rbp-48h]
  char v36; // [rsp+A0h] [rbp+8h]
  char v38; // [rsp+B8h] [rbp+20h]

  v6 = a2;
  v7 = a3;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = a1->NblTracker;
    v15 = a3 & 1;
    v16 = ndisNblTrackerEpoch;
    v17 = 0LL;
    v18 = 0LL;
    v38 = v15;
    v33 = 0LL;
    v32 = 0LL;
    v36 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)a2, 0LL, 0x95u, NblTracker, v15);
      LOBYTE(v15) = v38;
      v17 = 0LL;
    }
    v19 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v20 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v19 = (2 * v16) ^ ((unsigned __int64)NblTracker ^ (2 * v16)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v35 = v20;
    Alignment = (_SLIST_HEADER *)v6;
    if ( v6 )
    {
      while ( 1 )
      {
        Region = Alignment[22].Region;
        while ( Alignment[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_61;
          }
          else if ( !Alignment[7].Region )
          {
            Alignment[7].Region = 0LL;
          }
          v23 = (unsigned __int8 *)Alignment[7].Region;
          if ( v23 )
          {
            LODWORD(a2) = *v23;
            if ( (unsigned __int8)((_BYTE)a2 - 17) <= 1u || (_BYTE)a2 == 5 )
            {
              if ( v23 != (unsigned __int8 *)v20 || Alignment[1].Region )
              {
                ++v18;
                v24 = v19;
              }
              else
              {
                ++v17;
                v24 = 24LL;
                v32 = v17;
                ++v18;
              }
              goto LABEL_31;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v31) = *v23;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)Alignment,
                v31);
LABEL_66:
              v17 = v32;
              v20 = v35;
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
              (char)Alignment);
            goto LABEL_66;
          }
LABEL_61:
          v24 = v19 | 4;
LABEL_31:
          Alignment[22].Region = v24;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v25 = v33 - v18;
        LOBYTE(v15) = v38;
        v34 = v33 - v18;
        if ( (Region & 1) == 0 || !v25 )
          goto LABEL_37;
        if ( v38 || v36 )
        {
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !v38 )
            goto LABEL_52;
          goto LABEL_36;
        }
        v36 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v25 = v34;
        if ( CurrentIrql == 2 )
        {
          LOBYTE(v15) = 1;
          v38 = 1;
          a2 = (struct _NET_BUFFER_LIST *)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_36:
          v26 = (_QWORD *)(a2->Link.Alignment + (KeGetPcr()->Prcb.Number << 12));
          *v26 += v25;
          goto LABEL_37;
        }
        LOBYTE(v15) = 0;
        v38 = 0;
        a2 = (struct _NET_BUFFER_LIST *)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_52:
        _InterlockedAdd64((volatile signed __int64 *)&a2->FirstNetBuffer, v25);
LABEL_37:
        v17 = v32;
        v20 = v35;
        v33 = v18;
        if ( !Alignment )
        {
          v7 = a3;
          break;
        }
      }
    }
    v27 = v18 - v17;
    if ( (v19 & 1) == 0 || !v27 )
      goto LABEL_2;
    if ( (_BYTE)v15 || v36 )
    {
      v28 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v15 )
        goto LABEL_45;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v28 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_45:
        _InterlockedAdd64((volatile signed __int64 *)(v28 + 8), v27);
        goto LABEL_2;
      }
      v28 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v29 = (_QWORD *)(*(_QWORD *)v28 + (KeGetPcr()->Prcb.Number << 12));
    *v29 += v27;
  }
LABEL_2:
  if ( byte_1401278B0 )
  {
    v13 = (_SLIST_HEADER *)v6;
    if ( v6 )
    {
      do
      {
        v13[15].Region = 0LL;
        v13 = (_SLIST_HEADER *)v13->Alignment;
      }
      while ( v13 );
    }
  }
  v8 = (unsigned int *)((char *)a4 + 16);
  if ( (*((_DWORD *)a4 + 2) & 0x80u) != 0 )
  {
    if ( *v8 == -1 )
      *v8 = KeGetPcr()->Prcb.Number;
    v9 = *(_QWORD *)a4 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *v8);
    ++*(_QWORD *)(v9 + 56);
  }
  v10 = (unsigned int *)((char *)a4 + 16);
  if ( (*((_DWORD *)a4 + 3) & 0x200) != 0 )
  {
    if ( *v8 == -1 )
    {
      v10 = (unsigned int *)((char *)a4 + 16);
      *v8 = KeGetPcr()->Prcb.Number;
    }
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + (unsigned __int64)(*v8 * ndisPcwPerCpuDataStride) + *(_QWORD *)a4 + 376) = __rdtsc();
  }
  a1->ProtSendNetBufferListsComplete(a1->SendCompleteNetBufferListsContext, v6, v7);
  if ( (*((_DWORD *)a4 + 3) & 0x200) != 0 )
  {
    if ( *v8 == -1 )
    {
      *v8 = KeGetPcr()->Prcb.Number;
      v8 = v10;
    }
    v11 = *(_QWORD *)a4 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *v8);
    v12 = __rdtsc();
    *(_QWORD *)(v11 + 176) += (((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12) - *(_QWORD *)(v11 + 376);
    *(_QWORD *)(v11 + 376) = 0LL;
  }
}
