/*
 * XREFs of EtwDeliverDataBlock @ 0x18001E150
 * Callers:
 *     EtwpNotificationThread @ 0x18001DFF0 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x18008C158 (EtwpSendSessionNotification.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x18001DBB0 (EtwpFindGuidEntry.c)
 *     EtwpFindRegistration @ 0x18001E680 (EtwpFindRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpProcessNotification @ 0x180020790 (EtwpProcessNotification.c)
 *     RtlSetThreadSubProcessTag @ 0x180022160 (RtlSetThreadSubProcessTag.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x18008BFF0 (EtwpGetNextRegistration.c)
 *     EtwProcessPrivateLoggerRequest @ 0x18008C670 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpProcessInternalNotification @ 0x1800FA424 (EtwpProcessInternalNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010ABC0 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18010AC5C (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x18010C304 (EtwpAllocateUmGuidEntry.c)
 *     _tlgKeywordOn @ 0x18010D208 (_tlgKeywordOn.c)
 *     EtwpReferenceUmGuidEntry @ 0x18010D65C (EtwpReferenceUmGuidEntry.c)
 *     EtwReplyNotification @ 0x18010ED10 (EtwReplyNotification.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  __int16 v13; // cx
  __int16 v14; // cx
  __int64 v15; // r12
  char v16; // r15
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  _QWORD *GuidEntry; // r15
  char v22; // r9
  __int64 i; // rdx
  _QWORD *v24; // r8
  _QWORD *v25; // r8
  __int64 j; // rdx
  __int16 v27; // cx
  char v28[4]; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-45h] BYREF
  int v30; // [rsp+40h] [rbp-41h] BYREF
  __int64 v31; // [rsp+48h] [rbp-39h] BYREF
  __int64 v32; // [rsp+50h] [rbp-31h]
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
    RtlAcquireSRWLockExclusive(Registration + 64);
    v5 = 1;
    v10 = *(unsigned int *)(NextRegistration + 248);
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
      v3 = EtwProcessPrivateLoggerRequest(a1, 0x3FFFLL);
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
      RtlAcquireSRWLockExclusive(NextRegistration + 64);
      v5 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(
                            NextRegistration,
                            (_DWORD)a1,
                            (unsigned int)&v31,
                            (unsigned int)&v29,
                            (__int64)v28) )
      break;
    if ( v5 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive(NextRegistration + 64);
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
    || (GuidEntry = EtwpFindGuidEntry((_QWORD *)a1 + 5)) == 0LL
    && (!a1[18] || (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 10)) == 0LL) )
  {
LABEL_17:
    v3 = 4201;
    if ( v4 && (unsigned int)dword_1801CC6F0 > 3 && (unsigned __int8)tlgKeywordOn(&dword_1801CC6F0, 9LL) )
    {
      v35 = 16LL;
      v34 = a1 + 10;
      v30 = *a1;
      v36 = &v30;
      v29 = a1[6];
      v38 = &v29;
      v37 = 4LL;
      v39 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer(
        (unsigned int)&dword_1801CC6F0,
        (unsigned int)&unk_1801A24F3,
        v18,
        v19,
        5,
        (__int64)v33);
    }
    goto LABEL_14;
  }
  EtwpAcquireGuidEntryExclusive(GuidEntry);
  v22 = *((_BYTE *)a1 + 78);
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v24 = &GuidEntry[3 * i];
    if ( *((_BYTE *)v24 + 76) && *((_BYTE *)v24 + 78) == v22 )
    {
      v25 = v24 + 7;
      if ( v25 )
      {
LABEL_51:
        *v25 = *((_QWORD *)a1 + 12);
        v25[1] = *((_QWORD *)a1 + 11);
        *((_BYTE *)v25 + 21) = *((_BYTE *)a1 + 76);
        *((_DWORD *)v25 + 4) = a1[20];
        *((_BYTE *)v25 + 20) = a1[18] != 0;
        goto LABEL_52;
      }
      break;
    }
  }
  if ( a1[18] )
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
  if ( *((_BYTE *)a1 + 107) == 1 )
  {
    GuidEntry[19] = *((_QWORD *)a1 + 13);
    *((_DWORD *)GuidEntry + 40) = a1[18];
  }
  *((_DWORD *)GuidEntry + 12) = 0;
  RtlReleaseSRWLockExclusive(GuidEntry + 5);
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
    RtlReleaseSRWLockExclusive(NextRegistration + 64);
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v3;
}
