/*
 * XREFs of ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1400409C0
 * Callers:
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400CA3A8 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 */

void __fastcall ndisReplaySendNbls(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2, unsigned __int8 a3)
{
  struct _NET_BUFFER_LIST *v3; // r13
  struct _NDIS_MINIPORT_BLOCK *v5; // r10
  struct _NET_BUFFER_LIST *v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rbp
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  char v11; // r12
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v17; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned int Scratch; // ebx
  __int64 v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  unsigned __int64 v28; // [rsp+48h] [rbp-60h]
  char v30; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v31; // [rsp+C0h] [rbp+18h]

  v31 = a3;
  v3 = 0LL;
  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v8 = 0LL;
    v9 = 0LL;
    NblTracker = v5->NblTracker;
    v11 = 0;
    v12 = ndisNblTrackerEpoch;
    v13 = 0LL;
    v27 = 0LL;
    v30 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)a2, 0LL, 0x92u, NblTracker, 0);
      v8 = 0LL;
    }
    v14 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v15 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v14 = (2 * v12) ^ ((unsigned __int64)NblTracker ^ (2 * v12)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v15 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v28 = v15;
    Alignment = a2;
    if ( a2 )
    {
      while ( 1 )
      {
        v17 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v17 )
        {
          if ( v17 )
          {
            if ( (v17 & 4) != 0 )
              goto LABEL_50;
          }
          else if ( !Alignment->SourceHandle )
          {
            Alignment->SourceHandle = 0LL;
          }
          SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            LODWORD(v6) = *SourceHandle;
            if ( (unsigned __int8)((_BYTE)v6 - 17) <= 1u || (_BYTE)v6 == 5 )
            {
              if ( SourceHandle != (unsigned __int8 *)v15 || Alignment->ParentNetBufferList )
              {
                ++v9;
                v19 = v14;
              }
              else
              {
                ++v8;
                v19 = 24LL;
                v27 = v8;
                ++v9;
              }
              goto LABEL_15;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)Alignment,
                v26);
LABEL_57:
              v8 = v27;
              v15 = v28;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v6,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)Alignment);
            goto LABEL_57;
          }
LABEL_50:
          v19 = v14 | 4;
LABEL_15:
          Alignment->NetBufferListInfo[27] = (void *)v19;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v20 = v13 - v9;
        if ( (v17 & 1) == 0 || !v20 )
          goto LABEL_21;
        if ( v11 || v30 )
        {
          v6 = (struct _NET_BUFFER_LIST *)(16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !v11 )
            goto LABEL_41;
          goto LABEL_20;
        }
        v30 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v11 = 1;
          v6 = (struct _NET_BUFFER_LIST *)(16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_20:
          v21 = (_QWORD *)(v6->Link.Alignment + (KeGetPcr()->Prcb.Number << 12));
          *v21 += v20;
          goto LABEL_21;
        }
        v11 = 0;
        v6 = (struct _NET_BUFFER_LIST *)(16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_41:
        _InterlockedAdd64((volatile signed __int64 *)&v6->FirstNetBuffer, v20);
LABEL_21:
        v8 = v27;
        v13 = v9;
        v15 = v28;
        if ( !Alignment )
        {
          v3 = 0LL;
          break;
        }
      }
    }
    v22 = v9 - v8;
    if ( (v14 & 1) == 0 || !v22 )
      goto LABEL_28;
    if ( v11 || v30 )
    {
      v23 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v11 )
      {
LABEL_37:
        _InterlockedAdd64((volatile signed __int64 *)(v23 + 8), v22);
        goto LABEL_28;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v23 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_37;
      }
      v23 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v24 = (_QWORD *)(*(_QWORD *)v23 + (KeGetPcr()->Prcb.Number << 12));
    *v24 += v22;
LABEL_28:
    v7 = 0;
    v6 = 0LL;
    a3 = v31;
    v5 = a1;
  }
  for ( ; a2; a2 = (struct _NET_BUFFER_LIST *)a2->Link.Alignment )
  {
    Scratch = (unsigned int)a2->Scratch;
    if ( v3 )
    {
      if ( Scratch == v7 )
        goto LABEL_32;
      v6->Link.Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(v5, v3, v7, 0, a3);
      v5 = a1;
      a3 = v31;
    }
    v3 = a2;
    v7 = Scratch;
LABEL_32:
    v6 = a2;
  }
  ndisMSendNBLToMiniportInternal(v5, v3, v7, 0, a3);
}
