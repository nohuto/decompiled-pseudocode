/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18001B304 (-RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z @ 0x18001D7D4 (-RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800604F0 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeUnapplyUnusedGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060734 (-RmpGameModeUnapplyUnusedGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800607B0 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180060854 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060C38 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z @ 0x1800637BC (-RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x1800652CC (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x180065448 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180071A24 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072CD4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008C5F0 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18008C6AC (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18008CFD0 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008D024 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D710 (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall RmpGameModePolicyWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_GAME_MODE_CONTEXT *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // r15
  char v5; // cl
  char v6; // al
  void *v7; // r14
  char *v8; // rsi
  char *v9; // rsi
  unsigned __int64 v10; // rbx
  char *v11; // r11
  char *i; // r10
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // esi
  int v16; // eax
  __int64 v17; // rbx
  unsigned int v18; // ebx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v21; // rax
  bool v22; // zf
  char v23; // dl
  unsigned __int64 v24; // rax
  char v25; // dl
  unsigned __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int8 v28[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-CCh]
  _LIST_ENTRY v30; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v32; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+120h] [rbp+20h] BYREF
  void *v39; // [rsp+130h] [rbp+30h]
  int v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+13Ch] [rbp+3Ch]

  memset_0(v33, 0, 0x88uLL);
  v28[0] = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v35 = &unk_1800D9159;
    UserData.Reserved = 2;
    v36 = 25;
    v37 = 1;
    v29 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *(_QWORD *)a2;
  v30.Blink = &v30;
  v30.Flink = &v30;
  RmpGameModeAcquireLock(a2);
  v5 = *((_BYTE *)a2 + 148);
  if ( (v5 & 1) != 0 )
  {
    while ( 1 )
    {
      v6 = v5 & 0xFE ^ (v5 & 0xFE ^ (2 * (v5 & 0xFE))) & 8;
      *((_BYTE *)a2 + 148) = v6;
      if ( (v6 & 8) != 0 )
      {
        v7 = 0LL;
      }
      else
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive((char *)a2 + 72);
        RmpSystemNotificationAcquireInputFocusLock((struct _RM_SYSTEM_NOTIFICATION_CONTEXT *)(v4 + 576));
        v7 = (void *)*(unsigned int *)(v4 + 640);
        *(_DWORD *)(v4 + 648) = 0;
        RtlReleaseSRWLockExclusive(v4 + 592);
        RmpGameModeAcquireLock(a2);
      }
      RmpGameModeDemoteActiveRecipients(a2, (unsigned int)v7, v28);
      RmpGameModeUnapplyUnusedGlobalPolicies(a2);
      RmpGameModeReleaseUnusedGlobalResources(a2);
      if ( !v28[0] && *((_BYTE *)a2 + 140) )
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive((char *)a2 + 72);
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          NotifyGameModeExtensionRecipientsPresent(0LL);
        *((_BYTE *)a2 + 140) = 0;
        RmpGameModeAcquireLock(a2);
      }
      if ( (*((_BYTE *)a2 + 148) & 8) != 0 )
        goto LABEL_30;
      v8 = (char *)*((_QWORD *)a2 + 11);
      v28[0] = *((_DWORD *)a2 + 34) != 0;
      if ( v8 != (char *)a2 + 88 )
        break;
      v13 = (unsigned __int64)a2 + 8;
      v14 = *((_QWORD *)a2 + 1);
      v15 = *((_BYTE *)a2 + 16) & 1;
      if ( (*((_BYTE *)a2 + 16) & 1) == 0 )
        goto LABEL_24;
      if ( v14 )
      {
LABEL_42:
        v14 ^= v13;
LABEL_24:
        while ( v14 )
        {
          v16 = RmpGameModeCompareRecipientProcessNode(v7, (struct _RTL_BALANCED_NODE *)v14);
          if ( v16 < 0 )
          {
            v13 = *(_QWORD *)v14;
          }
          else
          {
            if ( v16 <= 0 )
              break;
            v13 = *(_QWORD *)(v14 + 8);
          }
          if ( v15 && v13 )
            goto LABEL_42;
          v14 = v13;
        }
        if ( v14 )
        {
          v9 = (char *)(v14 - 8);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 - 8)) <= 1 )
            __fastfail(0xEu);
          if ( v14 != 8 )
          {
            if ( (v9[170] & 5) == 1 && RmpGameModeIsProcessPrimary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 8)) )
            {
              *((_DWORD *)v9 + 26) = 0;
              v9[171] |= 1u;
              v19 = (struct _LIST_ENTRY *)(v9 + 88);
              Blink = v30.Blink;
              if ( v30.Blink->Flink != &v30 )
                __fastfail(3u);
              *((_QWORD *)v9 + 12) = v30.Blink;
              v19->Flink = &v30;
              Blink->Flink = v19;
              v30.Blink = (struct _LIST_ENTRY *)(v9 + 88);
              goto LABEL_10;
            }
            RmpGameModeDereferenceRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 8));
          }
        }
      }
LABEL_26:
      if ( v28[0] )
        RmpGameModeNotifyExtensionRecipientsPresent(a2, v28[0]);
      if ( v30.Flink != &v30 )
      {
        RmpGameModeAcquireGlobalResources(a2, &v30);
        RmpGameModeApplyNewRecipientPolicies(a2, &v30);
        RmpGameModeApplyGlobalPolicies(a2);
        RmpGameModeReleaseUnusedGlobalResources(a2);
      }
LABEL_30:
      v17 = *((_QWORD *)a2 + 11);
      if ( (struct _RM_GAME_MODE_CONTEXT *)v17 == (struct _RM_GAME_MODE_CONTEXT *)((char *)a2 + 88)
        || (*(_BYTE *)(v17 + 56) & 0x10) != 0 )
      {
        v18 = 0;
      }
      else
      {
        v18 = *(_DWORD *)(v17 + 20);
      }
      if ( v18 != *((_DWORD *)a2 + 36) )
      {
        RmpSystemPublishGlobalGameModeState(v18);
        *((_DWORD *)a2 + 36) = v18;
      }
      v5 = *((_BYTE *)a2 + 148);
      if ( (v5 & 1) == 0 )
        goto LABEL_35;
    }
    v9 = v8 - 88;
LABEL_10:
    v10 = *((_QWORD *)v9 + 9);
    if ( v10 )
    {
      while ( 1 )
      {
LABEL_11:
        if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v10, &v30) < 0 )
          goto LABEL_12;
        v21 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          break;
        v22 = (v9[80] & 1) == 0;
LABEL_58:
        if ( v22 )
          v10 = v21;
        else
          v10 ^= v21;
      }
      v21 = *(_QWORD *)(v10 + 8);
      v23 = v9[80];
      if ( v21 )
      {
        v22 = (v23 & 1) == 0;
        goto LABEL_58;
      }
      v24 = v10;
      v25 = v23 & 1;
      while ( 2 )
      {
        v24 = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v25 )
        {
          if ( !v24 )
            break;
          v24 ^= v10;
        }
        if ( !v24 )
          break;
        v26 = *(_QWORD *)(v24 + 8);
        if ( v25 )
        {
          if ( v26 )
          {
            v26 ^= v24;
            goto LABEL_69;
          }
        }
        else
        {
LABEL_69:
          if ( v26 && v26 != v10 )
          {
            v10 = v26;
            goto LABEL_11;
          }
        }
        v10 = v24;
        continue;
      }
    }
LABEL_12:
    v11 = (char *)a2 + 24;
    for ( i = (char *)*((_QWORD *)a2 + 3); i != v11; i = *(char **)v27 )
    {
      if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56))
        && (*(_BYTE *)(v27 + 114) & 8) == 0 )
      {
        RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v27 - 56), &v30);
      }
    }
    goto LABEL_26;
  }
LABEL_35:
  *((_DWORD *)a2 + 20) = 0;
  *((_BYTE *)a2 + 148) = v5 & 0xFD;
  RtlReleaseSRWLockExclusive((char *)a2 + 72);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    *(_DWORD *)&v32.Level = 516;
    v38.Ptr = (ULONGLONG)off_1800E8280;
    *(_DWORD *)&v32.Id = 184549376;
    v32.Keyword = 1LL;
    v38.Size = *(unsigned __int16 *)off_1800E8280;
    v39 = &unk_1800D9426;
    v38.Reserved = 2;
    v40 = 25;
    v41 = 1;
    v29 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &v32, 0LL, 0LL, 2u, &v38);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
