/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1400138C0
 * Callers:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     RaidNormalizeDeviceQueue @ 0x140013720 (RaidNormalizeDeviceQueue.c)
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1400285A0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x140014570 (RiGetEnqueueReason.c)
 *     RiDecrementDeviceQueueCount @ 0x140014A18 (RiDecrementDeviceQueueCount.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x140055F24 (RaidGetQosEntryForDeviceEntry.c)
 *     GetZoneIndexFromUnitAndLba @ 0x14006CE84 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14013AC9C (PortSrbGetLbaFromCdb.c)
 */

char *__fastcall RiNormalizeDeviceQueue(__int64 a1, char a2)
{
  _QWORD *v2; // r14
  char *v4; // rsi
  _QWORD *v6; // rbx
  ULONG v7; // r9d
  struct _SLIST_ENTRY *v8; // r10
  struct _SLIST_ENTRY *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  PSLIST_ENTRY EntrySList; // rax
  char *v15; // rbx
  PSLIST_ENTRY v17; // rax
  __int64 v18; // rdx
  struct _SLIST_ENTRY *Next; // r8
  char *v20; // rcx
  __int128 *v21; // rdx
  __int128 **v22; // rcx
  __int128 **v23; // rax
  __int64 v24; // rax
  char v25; // al
  char v26; // bp
  __int64 v27; // rax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  char **v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned int v35; // r12d
  unsigned int v36; // ebp
  unsigned int *v37; // r11
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // r9
  unsigned __int8 v43; // r8
  unsigned int v44; // r13d
  unsigned int *v45; // r12
  __int64 v46; // rax
  unsigned __int64 v47; // r11
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rbp
  __int64 LbaFromCdb; // r12
  __int64 ZoneIndexFromUnitAndLba; // r13
  unsigned int v53; // eax
  char v54; // cl
  __int128 v55; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v56; // [rsp+A0h] [rbp+18h]

  v2 = (_QWORD *)(a1 + 144);
  v4 = *(char **)(a1 + 144);
  if ( v4 == (char *)(a1 + 144) )
  {
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
    {
      v55 = 0LL;
      if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 96)) )
      {
        *((_QWORD *)&v55 + 1) = &v55;
        *(_QWORD *)&v55 = &v55;
        v17 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 96));
        if ( v17 )
        {
          do
          {
            v18 = v55;
            Next = v17->Next;
            v20 = (char *)(&v17[-1].Next + 1);
            if ( *(__int128 **)(v55 + 8) != &v55 )
              goto LABEL_53;
            *(_QWORD *)v20 = v55;
            v17->Next = (_SLIST_ENTRY *)&v55;
            v17 = Next;
            *(_QWORD *)(v18 + 8) = v20;
            *(_QWORD *)&v55 = v20;
            v20[20] &= ~2u;
          }
          while ( Next );
        }
        if ( (__int128 *)v55 != &v55 )
        {
          v21 = (__int128 *)(a1 + 128);
          v22 = *(__int128 ***)(a1 + 136);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) != a1 + 128 )
            goto LABEL_53;
          if ( *v22 != v21 )
            goto LABEL_53;
          if ( *(__int128 **)(v55 + 8) != &v55 )
            goto LABEL_53;
          if ( **((__int128 ***)&v55 + 1) != &v55 )
            goto LABEL_53;
          *v22 = &v55;
          v23 = (__int128 **)*((_QWORD *)&v55 + 1);
          *(_QWORD *)(a1 + 136) = *((_QWORD *)&v55 + 1);
          *v23 = v21;
          v24 = v55;
          *((_QWORD *)&v55 + 1) = v22;
          if ( *(__int128 **)(v55 + 8) != &v55 || *v22 != &v55 )
            goto LABEL_53;
          *v22 = (__int128 *)v55;
          *(_QWORD *)(v24 + 8) = v22;
        }
      }
      v6 = (_QWORD *)(a1 + 128);
      if ( (_QWORD *)*v6 != v6 && !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
      {
        v7 = 0;
        v8 = 0LL;
        v9 = 0LL;
        while ( 1 )
        {
          v10 = (_QWORD *)*v6;
          if ( (_QWORD *)*v6 == v6 || v7 >= 0x40 )
            break;
          v11 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            goto LABEL_53;
          v12 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v12 != v10 )
            goto LABEL_53;
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *((_BYTE *)v10 + 20) |= 2u;
          v13 = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v9 )
            v9->Next = (_SLIST_ENTRY *)v13;
          else
            v8 = (struct _SLIST_ENTRY *)v13;
          v9 = (struct _SLIST_ENTRY *)v13;
          ++v7;
        }
        v9->Next = 0LL;
        InterlockedPushListSList((PSLIST_HEADER)(a1 + 112), v8, v9, v7);
      }
    }
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
      return 0LL;
    EntrySList = FirstEntrySList((PSLIST_HEADER)(a1 + 112));
    if ( EntrySList )
      v4 = (char *)(&EntrySList[-1].Next + 1);
    else
      v4 = 0LL;
  }
  v15 = v4;
  if ( !v4 )
    return v15;
  v25 = v4[22];
  v26 = v25 ^ (v25 ^ (16 * a2)) & 0x10;
  v4[22] = v26;
  if ( v25 )
  {
    if ( !v26 )
      --*(_DWORD *)(a1 + 32);
  }
  else if ( v26 )
  {
    ++*(_DWORD *)(a1 + 32);
  }
  if ( (v4[22] & 0x40) != 0 )
  {
    v33 = *(_QWORD *)(*((_QWORD *)v4 + 8) + 8LL);
    if ( *(_BYTE *)(v33 + 2) != 40 )
    {
      v43 = *(_BYTE *)(v33 + 10);
      v34 = v33 + 72;
      goto LABEL_92;
    }
    v34 = 0LL;
    if ( !*(_DWORD *)(v33 + 20) )
    {
      v35 = *(_DWORD *)(v33 + 56);
      v36 = 0;
      if ( v35 )
      {
        v37 = (unsigned int *)(v33 + 120);
        do
        {
          v38 = *v37;
          if ( (unsigned int)v38 >= 0x80 )
          {
            v39 = *(unsigned int *)(v33 + 16);
            if ( (unsigned int)v38 < (unsigned int)v39 )
            {
              v40 = *(_DWORD *)(v38 + v33);
              if ( v40 == 64 )
              {
                if ( v38 + 40 <= v39 )
                {
                  if ( !*(_BYTE *)(v38 + v33 + 10) )
                    break;
LABEL_69:
                  v42 = v33 + 24;
LABEL_70:
                  v34 = v38 + v42;
                  break;
                }
              }
              else
              {
                v41 = v40 - 65;
                if ( v41 )
                {
                  if ( v41 == 1 && v38 + 40 <= v39 )
                  {
                    if ( !*(_DWORD *)(v38 + v33 + 12) )
                      break;
                    v42 = v33 + 32;
                    goto LABEL_70;
                  }
                }
                else if ( v38 + 56 <= v39 )
                {
                  if ( !*(_BYTE *)(v38 + v33 + 10) )
                    break;
                  goto LABEL_69;
                }
              }
            }
          }
          ++v36;
          ++v37;
        }
        while ( v36 < v35 );
      }
    }
    v43 = 0;
    if ( !*(_DWORD *)(v33 + 20) )
    {
      v44 = 0;
      v56 = *(_DWORD *)(v33 + 56);
      if ( v56 )
      {
        v45 = (unsigned int *)(v33 + 120);
        do
        {
          v46 = *v45;
          if ( (unsigned int)v46 >= 0x80 )
          {
            v47 = *(unsigned int *)(v33 + 16);
            if ( (unsigned int)v46 < (unsigned int)v47 )
            {
              v48 = *(_DWORD *)(v33 + v46);
              if ( v48 == 64 )
              {
                if ( v46 + 40 <= v47 )
                {
LABEL_87:
                  v43 = *(_BYTE *)(v33 + v46 + 10);
                  break;
                }
              }
              else
              {
                v49 = v48 - 65;
                if ( v49 )
                {
                  if ( v49 == 1 && v46 + 40 <= v47 )
                    break;
                }
                else if ( v46 + 56 <= v47 )
                {
                  goto LABEL_87;
                }
              }
            }
          }
          ++v44;
          ++v45;
        }
        while ( v44 < v56 );
      }
    }
LABEL_92:
    v50 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + 64LL);
    LbaFromCdb = PortSrbGetLbaFromCdb(v34, v43);
    ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v50, LbaFromCdb);
    v53 = RtlInterlockedSetClearRun(v50 + 3448, ZoneIndexFromUnitAndLba, 1LL);
    if ( v53 == 1 )
    {
      v54 = v4[22];
      v4[22] = v54 & 0xBF;
      if ( v54 )
      {
        if ( (v54 & 0xBF) == 0 )
          --*(_DWORD *)(a1 + 32);
      }
    }
    if ( (qword_140170460 & 0x1000) != 0 )
      DbgLogRequest(
        *(_QWORD *)(v50 + 24),
        48,
        LbaFromCdb,
        ZoneIndexFromUnitAndLba,
        *(unsigned __int8 *)(*(_QWORD *)(v50 + 3440) + ZoneIndexFromUnitAndLba),
        v53,
        0LL);
  }
  if ( (unsigned int)RiGetEnqueueReason(a1, v4) )
    return 0LL;
  if ( (_QWORD *)*v2 == v2 )
  {
    ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
  }
  else
  {
    v31 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_53;
    v32 = (char **)*((_QWORD *)v4 + 1);
    if ( *v32 != v4 )
      goto LABEL_53;
    *v32 = (char *)v31;
    *(_QWORD *)(v31 + 8) = v32;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 4uLL);
  RiDecrementDeviceQueueCount(a1, v4);
  v4[20] &= 0xFCu;
  v27 = ((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF;
  if ( (int)v27 > *(_DWORD *)(a1 + 184) )
    *(_DWORD *)(a1 + 184) = v27;
  if ( (v4[22] & 1) != 0 )
    *(_BYTE *)(a1 + 38) = 1;
  if ( (v4[22] & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v4);
    v29 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v30 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v30 == QosEntryForDeviceEntry )
      {
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        return v15;
      }
    }
LABEL_53:
    __fastfail(3u);
  }
  return v15;
}
