/*
 * XREFs of EtwDeliverDataBlock @ 0x1800443B0
 * Callers:
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x1800B4E14 (EtwpSendSessionNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpProcessNotification @ 0x1800421A0 (EtwpProcessNotification.c)
 *     RtlSetThreadSubProcessTag @ 0x180043C00 (RtlSetThreadSubProcessTag.c)
 *     EtwpFindRegistration @ 0x1800448E0 (EtwpFindRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpFindGuidEntry @ 0x180045DA0 (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     EtwProcessPrivateLoggerRequest @ 0x1800B5320 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpGetNextRegistration @ 0x1800E63E0 (EtwpGetNextRegistration.c)
 *     EtwpProcessInternalNotification @ 0x1800FC324 (EtwpProcessInternalNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010D324 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18010D3C0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x18010E41C (EtwpAllocateUmGuidEntry.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     EtwpReferenceUmGuidEntry @ 0x1801100D4 (EtwpReferenceUmGuidEntry.c)
 *     EtwReplyNotification @ 0x180111A80 (EtwReplyNotification.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwDeliverDataBlock(int *a1)
{
  int v1; // eax
  unsigned int v3; // esi
  char v4; // r13
  char v5; // r14
  char v6; // r15
  bool v7; // zf
  __int64 Registration; // rax
  __int64 NextRegistration; // rbx
  void *v10; // rcx
  void *v11; // rax
  int v12; // r8d
  __int16 v13; // cx
  __int16 v14; // cx
  __int64 v15; // r12
  char v16; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 GuidEntry; // r15
  char v22; // r9
  __int64 i; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 j; // rdx
  __int16 v27; // cx
  char v28[4]; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-45h] BYREF
  int v30; // [rsp+40h] [rbp-41h] BYREF
  __int64 v31; // [rsp+48h] [rbp-39h] BYREF
  void *v32; // [rsp+50h] [rbp-31h]
  char v33[32]; // [rsp+58h] [rbp-29h] BYREF
  int *v34; // [rsp+78h] [rbp-9h]
  __int64 v35; // [rsp+80h] [rbp-1h]
  int *v36; // [rsp+88h] [rbp+7h]
  __int64 v37; // [rsp+90h] [rbp+Fh]
  unsigned int *v38; // [rsp+98h] [rbp+17h]
  __int64 v39; // [rsp+A0h] [rbp+1Fh]

  v1 = a1[4];
  v3 = 0;
  v4 = *((_BYTE *)a1 + 12);
  v5 = 0;
  v6 = 0;
  v7 = *a1 == 3;
  v31 = 0LL;
  v29 = 0;
  v28[0] = 0;
  v30 = v1;
  if ( v7 && *((__int16 *)a1 + 39) < 0 )
  {
    v6 = 1;
    a1[6] = -1;
  }
  if ( a1[6] != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 10);
    NextRegistration = Registration;
    if ( !Registration )
      goto LABEL_17;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(Registration + 64));
    v5 = 1;
    v10 = (void *)*(unsigned int *)(NextRegistration + 248);
    *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    v11 = RtlSetThreadSubProcessTag(v10);
    v12 = *a1;
    v13 = *(_WORD *)(NextRegistration + 86);
    v32 = v11;
    if ( v12 == 3 )
    {
      v14 = v13 & 0x3FFF;
      if ( v14 == 3 || v14 == 2 )
      {
        if ( *((__int16 *)a1 + 39) < 0 && PrivateLoggerNotificationEntry )
          v15 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        else
          v15 = *(_QWORD *)(NextRegistration + 88);
        *((_QWORD *)a1 + 3) = v15;
        EtwpUpdateEnableInfoAndCallback(NextRegistration, a1);
        v16 = 1;
        goto LABEL_11;
      }
LABEL_27:
      v15 = v31;
      v16 = v28[0];
LABEL_11:
      v3 = v29;
      goto LABEL_12;
    }
    if ( v12 == 4 )
    {
      v27 = v13 & 0x3FFF;
      if ( v27 != 3 && v27 != 2 )
        goto LABEL_27;
      v15 = *(_QWORD *)(NextRegistration + 88);
      v3 = EtwProcessPrivateLoggerRequest(a1);
      v16 = 1;
    }
    else if ( (v13 & 0x3FFF) == v12 )
    {
      v15 = *(_QWORD *)(NextRegistration + 88);
      *((_QWORD *)a1 + 3) = v15;
      v3 = (*(__int64 (__fastcall **)(int *, _QWORD))(NextRegistration + 48))(a1, *(_QWORD *)(NextRegistration + 56));
      v16 = 1;
    }
    else
    {
      if ( (v13 & 0x3FFF) != 0xA || v12 != 7 || a1[9] != (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
        goto LABEL_27;
      v15 = v31;
      v3 = EtwpProcessInternalNotification(NextRegistration, a1);
      v16 = 1;
    }
LABEL_12:
    RtlSetThreadSubProcessTag(v32);
    if ( v16 )
      goto LABEL_13;
    goto LABEL_17;
  }
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
    goto LABEL_42;
  do
  {
    v20 = *((_QWORD *)a1 + 5) - *(_QWORD *)(NextRegistration + 32);
    if ( !v20 )
      v20 = *((_QWORD *)a1 + 6) - *(_QWORD *)(NextRegistration + 40);
    if ( v20 )
      goto LABEL_39;
    if ( *(_DWORD *)(NextRegistration + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(NextRegistration + 64));
      v5 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, (__int16 *)a1, &v31, &v29, v28) )
      break;
    if ( v5 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
      v5 = 0;
    }
LABEL_39:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v29;
  if ( v28[0] )
  {
    v15 = v31;
    goto LABEL_13;
  }
LABEL_42:
  if ( !v6
    || !PrivateLoggerNotificationEntry
    || (v15 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88), a1[18] == 2)
    || (GuidEntry = EtwpFindGuidEntry(a1 + 10)) == 0 && (!a1[18] || (GuidEntry = EtwpAllocateUmGuidEntry(a1 + 10)) == 0) )
  {
LABEL_17:
    v3 = 4201;
    if ( v4 && (unsigned int)dword_1801CE6F0 > 3 && (unsigned __int8)tlgKeywordOn(&dword_1801CE6F0, 9LL) )
    {
      v35 = 16LL;
      v34 = a1 + 10;
      v30 = *a1;
      v36 = &v30;
      v29 = a1[6];
      v38 = &v29;
      v37 = 4LL;
      v39 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CE6F0, byte_1801A453B, v18, v19, 5, (__int64)v33);
    }
    goto LABEL_14;
  }
  EtwpAcquireGuidEntryExclusive(GuidEntry);
  v22 = *((_BYTE *)a1 + 78);
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v24 = GuidEntry + 24 * i;
    if ( *(_BYTE *)(v24 + 76) && *(_BYTE *)(v24 + 78) == v22 )
    {
      v25 = v24 + 56;
      if ( v25 )
      {
LABEL_51:
        *(_QWORD *)v25 = *((_QWORD *)a1 + 12);
        *(_QWORD *)(v25 + 8) = *((_QWORD *)a1 + 11);
        *(_BYTE *)(v25 + 21) = *((_BYTE *)a1 + 76);
        *(_DWORD *)(v25 + 16) = a1[20];
        *(_BYTE *)(v25 + 20) = a1[18] != 0;
        goto LABEL_52;
      }
      break;
    }
  }
  if ( a1[18] )
  {
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      if ( !*(_BYTE *)(GuidEntry + 24 * j + 76) )
      {
        if ( GuidEntry + 24 * j == -56 )
          break;
        *(_BYTE *)(GuidEntry + 24 * j + 78) = v22;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_51;
      }
    }
  }
LABEL_52:
  if ( *((_BYTE *)a1 + 107) == 1 )
  {
    *(_QWORD *)(GuidEntry + 152) = *((_QWORD *)a1 + 13);
    *(_DWORD *)(GuidEntry + 160) = a1[18];
  }
  *(_DWORD *)(GuidEntry + 48) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(GuidEntry + 40));
  EtwpDereferenceUmGuidEntry(GuidEntry);
LABEL_13:
  if ( v4 == 1 )
  {
    if ( v3 )
    {
      *a1 = 1;
    }
    else if ( *a1 != 3 )
    {
LABEL_62:
      a1[4] = v30;
      *((_BYTE *)a1 + 12) = 0;
      *((_QWORD *)a1 + 3) = v15;
      v3 = EtwReplyNotification(a1);
      goto LABEL_14;
    }
    a1[1] = 72;
    goto LABEL_62;
  }
LABEL_14:
  if ( v5 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared(NextRegistration + 72);
  }
  return v3;
}
