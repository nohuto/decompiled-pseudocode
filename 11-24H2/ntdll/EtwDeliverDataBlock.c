/*
 * XREFs of EtwDeliverDataBlock @ 0x18004AB50
 * Callers:
 *     EtwpNotificationThread @ 0x18004A9F0 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x1800A7C18 (EtwpSendSessionNotification.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x18004A5B0 (EtwpFindGuidEntry.c)
 *     EtwpFindRegistration @ 0x18004B080 (EtwpFindRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpProcessNotification @ 0x18004D190 (EtwpProcessNotification.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EB60 (RtlSetThreadSubProcessTag.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x1800A7AB0 (EtwpGetNextRegistration.c)
 *     EtwProcessPrivateLoggerRequest @ 0x1800A8130 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpProcessInternalNotification @ 0x1800F5184 (EtwpProcessInternalNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180105730 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1801057CC (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x180106CD4 (EtwpAllocateUmGuidEntry.c)
 *     _tlgKeywordOn @ 0x1801081C8 (_tlgKeywordOn.c)
 *     EtwpReferenceUmGuidEntry @ 0x18010853C (EtwpReferenceUmGuidEntry.c)
 *     EtwReplyNotification @ 0x180109CF0 (EtwReplyNotification.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG Timeout; // eax
  ULONG v3; // esi
  BOOLEAN ReplyRequested; // r13
  char v5; // r14
  char v6; // r15
  bool v7; // zf
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rbx
  void *v10; // rcx
  PVOID v11; // rax
  ETW_NOTIFICATION_TYPE NotificationType; // r8d
  __int16 v13; // cx
  __int16 v14; // cx
  ULONGLONG v15; // r12
  char v16; // r15
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  _QWORD *GuidEntry; // r15
  char v22; // r9
  __int64 i; // rdx
  _QWORD *v24; // r8
  ULONGLONG *v25; // r8
  __int64 j; // rdx
  __int16 v27; // cx
  char v28[4]; // [rsp+38h] [rbp-49h] BYREF
  ULONG Reserved2; // [rsp+3Ch] [rbp-45h] BYREF
  ETW_NOTIFICATION_TYPE v30; // [rsp+40h] [rbp-41h] BYREF
  ULONGLONG v31; // [rsp+48h] [rbp-39h] BYREF
  PVOID SubProcessTag; // [rsp+50h] [rbp-31h]
  __int64 v33[10]; // [rsp+58h] [rbp-29h] BYREF

  Timeout = Notification->Timeout;
  v3 = 0;
  ReplyRequested = Notification->ReplyRequested;
  v5 = 0;
  v6 = 0;
  v7 = Notification->NotificationType == EtwNotificationTypeEnable;
  v31 = 0LL;
  Reserved2 = 0;
  v28[0] = 0;
  v30 = Timeout;
  if ( v7 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v6 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid);
    NextRegistration = (__int64)Registration;
    if ( !Registration )
      goto LABEL_17;
    RtlAcquireSRWLockExclusive(Registration + 8);
    v5 = 1;
    v10 = (void *)*(unsigned int *)(NextRegistration + 248);
    *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    v11 = RtlSetThreadSubProcessTag(v10);
    NotificationType = Notification->NotificationType;
    v13 = *(_WORD *)(NextRegistration + 86);
    SubProcessTag = v11;
    if ( NotificationType == EtwNotificationTypeEnable )
    {
      v14 = v13 & 0x3FFF;
      if ( v14 == 3 || v14 == 2 )
      {
        if ( (Notification[1].NotificationSize & 0x80000000) != 0 && PrivateLoggerNotificationEntry )
          v15 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        else
          v15 = *(_QWORD *)(NextRegistration + 88);
        Notification->Reserved2 = v15;
        EtwpUpdateEnableInfoAndCallback(NextRegistration, Notification);
        v16 = 1;
        goto LABEL_11;
      }
LABEL_27:
      v15 = v31;
      v16 = v28[0];
LABEL_11:
      v3 = Reserved2;
      goto LABEL_12;
    }
    if ( NotificationType == EtwNotificationTypePrivateLogger )
    {
      v27 = v13 & 0x3FFF;
      if ( v27 != 3 && v27 != 2 )
        goto LABEL_27;
      v15 = *(_QWORD *)(NextRegistration + 88);
      v3 = EtwProcessPrivateLoggerRequest(Notification, 0x3FFFLL);
      v16 = 1;
    }
    else if ( (v13 & 0x3FFF) == NotificationType )
    {
      v15 = *(_QWORD *)(NextRegistration + 88);
      Notification->Reserved2 = v15;
      v3 = (*(__int64 (__fastcall **)(PETW_NOTIFICATION_HEADER, _QWORD))(NextRegistration + 48))(
             Notification,
             *(_QWORD *)(NextRegistration + 56));
      v16 = 1;
    }
    else
    {
      if ( (v13 & 0x3FFF) != 0xA
        || NotificationType != EtwNotificationTypeSession
        || Notification->SourcePID != (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
      {
        goto LABEL_27;
      }
      v15 = v31;
      v3 = EtwpProcessInternalNotification(NextRegistration, Notification);
      v16 = 1;
    }
LABEL_12:
    RtlSetThreadSubProcessTag(SubProcessTag);
    if ( v16 )
      goto LABEL_13;
    goto LABEL_17;
  }
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
    goto LABEL_42;
  do
  {
    v20 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v20 )
      v20 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v20 )
      goto LABEL_39;
    if ( *(_DWORD *)(NextRegistration + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v5 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(
                            NextRegistration,
                            (_DWORD)Notification,
                            (unsigned int)&v31,
                            (unsigned int)&Reserved2,
                            (__int64)v28) )
      break;
    if ( v5 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v5 = 0;
    }
LABEL_39:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = Reserved2;
  if ( v28[0] )
  {
    v15 = v31;
    goto LABEL_13;
  }
LABEL_42:
  if ( !v6
    || !PrivateLoggerNotificationEntry
    || (v15 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88),
        Notification[1].NotificationType == EtwNotificationTypeLegacyEnable)
    || (GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid.Data1)) == 0LL
    && (!Notification[1].NotificationType
     || (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(&Notification->DestinationGuid)) == 0LL) )
  {
LABEL_17:
    v3 = 4201;
    if ( ReplyRequested && (unsigned int)dword_1801CB6F0 > 3 && (unsigned __int8)tlgKeywordOn(&dword_1801CB6F0, 9LL) )
    {
      v33[5] = 16LL;
      v33[4] = (__int64)&Notification->DestinationGuid;
      v30 = Notification->NotificationType;
      v33[6] = (__int64)&v30;
      Reserved2 = Notification->Reserved2;
      v33[8] = (__int64)&Reserved2;
      v33[7] = 4LL;
      v33[9] = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_1801CB6F0, (int)&dword_1801A1693, v18, v19, 5u, (__int64)v33);
    }
    goto LABEL_14;
  }
  EtwpAcquireGuidEntryExclusive(GuidEntry);
  v22 = BYTE2(Notification[1].NotificationSize);
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v24 = &GuidEntry[3 * i];
    if ( *((_BYTE *)v24 + 76) && *((_BYTE *)v24 + 78) == v22 )
    {
      v25 = v24 + 7;
      if ( v25 )
      {
LABEL_51:
        *v25 = Notification[1].Reserved2;
        v25[1] = *(_QWORD *)&Notification[1].Timeout;
        *((_BYTE *)v25 + 21) = Notification[1].NotificationSize;
        *((_DWORD *)v25 + 4) = Notification[1].Offset;
        *((_BYTE *)v25 + 20) = Notification[1].NotificationType != 0;
        goto LABEL_52;
      }
      break;
    }
  }
  if ( Notification[1].NotificationType )
  {
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      if ( !BYTE4(GuidEntry[3 * j + 9]) )
      {
        if ( &GuidEntry[3 * j] == (_QWORD *)-56LL )
          break;
        BYTE6(GuidEntry[3 * j + 9]) = v22;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_51;
      }
    }
  }
LABEL_52:
  if ( HIBYTE(Notification[1].TargetPID) == 1 )
  {
    GuidEntry[19] = *(_QWORD *)&Notification[1].TargetPID;
    *((_DWORD *)GuidEntry + 40) = Notification[1].NotificationType;
  }
  *((_DWORD *)GuidEntry + 12) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
  EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
LABEL_13:
  if ( ReplyRequested == 1 )
  {
    if ( v3 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
    }
    else if ( Notification->NotificationType != EtwNotificationTypeEnable )
    {
LABEL_62:
      Notification->Timeout = v30;
      Notification->ReplyRequested = 0;
      Notification->Reserved2 = v15;
      v3 = EtwReplyNotification(Notification);
      goto LABEL_14;
    }
    Notification->NotificationSize = 72;
    goto LABEL_62;
  }
LABEL_14:
  if ( v5 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v3;
}
