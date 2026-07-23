/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x14089F010
 * Callers:
 *     NtImpersonateClientOfPort @ 0x140A9FE40 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403E3A30 (SepReconcileTrustSidWithProcessProtection.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14089E840 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089EB0C (AlpcpLockBlobExclusive.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     SeCreateClientSecurityEx @ 0x14089FB40 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     AlpcpReferenceConnectedPort @ 0x1408E89B0 (AlpcpReferenceConnectedPort.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // r13
  PVOID v6; // rsi
  KPROCESSOR_MODE PreviousMode; // r9
  char v8; // cl
  signed int MessageId; // edi
  unsigned int CallbackId; // eax
  unsigned __int64 v11; // r12
  void *v12; // r14
  int ClientSecurity; // ebx
  ULONG_PTR v14; // r15
  char v15; // si
  ULONG_PTR v16; // rdi
  signed __int64 *v17; // rbx
  signed __int64 v18; // r8
  ULONG_PTR HandlePointer; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  char *v23; // r14
  signed __int64 v24; // rax
  void ***v25; // rbx
  int v26; // r15d
  _BYTE *v27; // rsi
  __int64 *v28; // r14
  void ***v29; // rcx
  _DWORD *v30; // rcx
  __int64 v32; // r15
  _DWORD *v33; // rax
  __int64 v34; // rbx
  char v35; // r12
  struct _KTHREAD *v36; // rax
  PSID *v37; // rbx
  BOOLEAN v38; // r9^1
  int v39; // eax
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  ULONG_PTR v42; // rbx
  __int64 v43; // rcx
  signed __int32 v44; // eax
  __int64 v45; // rax
  BOOLEAN v46; // r9^1
  signed __int32 v47[8]; // [rsp+0h] [rbp-1B8h] BYREF
  unsigned __int8 v48; // [rsp+60h] [rbp-158h] BYREF
  char v49[3]; // [rsp+61h] [rbp-157h] BYREF
  int v50; // [rsp+64h] [rbp-154h]
  signed int v51; // [rsp+68h] [rbp-150h]
  PVOID Object; // [rsp+70h] [rbp-148h] BYREF
  PVOID v53; // [rsp+78h] [rbp-140h]
  unsigned int v54; // [rsp+80h] [rbp-138h]
  _KPROCESS *Process; // [rsp+88h] [rbp-130h]
  PVOID v56; // [rsp+90h] [rbp-128h]
  int v57; // [rsp+98h] [rbp-120h]
  PVOID v58; // [rsp+A0h] [rbp-118h]
  PSID SourceSid; // [rsp+A8h] [rbp-110h] BYREF
  struct _KTHREAD *v60; // [rsp+B0h] [rbp-108h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[4]; // [rsp+C0h] [rbp-F8h]
  PACCESS_TOKEN Token[2]; // [rsp+D0h] [rbp-E8h]
  unsigned __int64 v63; // [rsp+110h] [rbp-A8h]
  __int64 v64; // [rsp+120h] [rbp-98h] BYREF
  int v65; // [rsp+12Ch] [rbp-8Ch]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v51 = 0;
  v54 = 0;
  v6 = 0LL;
  v58 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Message )
  {
    v60 = KeGetCurrentThread();
    v8 = v60->PreviousMode;
    if ( v8 && ((unsigned __int8)Message & 3) != 0 )
LABEL_4:
      ExRaiseDatatypeMisalignment();
    if ( _bittest16(&Message->u2.s2.Type, 0xCu) )
    {
      MessageId = *((_DWORD *)&Message->DoNotUseThisField + 2);
      v51 = MessageId;
      CallbackId = *((_DWORD *)&Message->DoNotUseThisField + 3);
    }
    else
    {
      if ( v8 && ((unsigned __int8)Message & 3) != 0 )
        goto LABEL_4;
      MessageId = Message->MessageId;
      v51 = MessageId;
      CallbackId = Message->CallbackId;
    }
    v54 = CallbackId;
    if ( !MessageId )
    {
LABEL_153:
      ClientSecurity = -1073741811;
      goto LABEL_59;
    }
  }
  else
  {
    MessageId = v51;
  }
  v11 = (unsigned __int64)Flags >> 2;
  v63 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_153;
  Process = (_KPROCESS *)((unsigned __int8)Flags & 1);
  v12 = (void *)((unsigned int)Flags & ((4 * (_DWORD)v11) | 2));
  v58 = v12;
  Object = 0LL;
  ClientSecurity = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v53 = Object;
  if ( ClientSecurity < 0 )
    goto LABEL_59;
  if ( MessageId )
  {
    if ( MessageId < 0 )
    {
      if ( !Object )
      {
        ClientSecurity = -1073740030;
        goto LABEL_59;
      }
      v42 = 0LL;
      v43 = *((_QWORD *)Object + 2);
      if ( v43 )
        v42 = AlpcReferenceBlobByHandle((_QWORD *)(v43 + 40), MessageId & 0x7FFFFFFF, AlpcReserveType);
      if ( !v42 )
      {
        ClientSecurity = -1073741072;
        goto LABEL_59;
      }
      HandlePointer = *(_QWORD *)(v42 + 24);
      AlpcpLockForCachedReferenceBlob(HandlePointer);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 40), 1, 0) )
      {
        AlpcpUnlockMessage(HandlePointer);
        AlpcpDereferenceBlobEx(v42, 1);
        ClientSecurity = -1073740024;
        goto LABEL_59;
      }
      *(_DWORD *)(HandlePointer + 264) &= ~0x80000000;
      do
        v44 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v44 );
      *(_DWORD *)(HandlePointer + 272) = v44;
      goto LABEL_120;
    }
    if ( (MessageId & 0xFC000000) != 0 )
    {
      if ( AlpcpSecondaryMessageTables )
        v14 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)MessageId >> 26));
      else
        v14 = 0LL;
    }
    else
    {
      v14 = AlpcMessageTable;
    }
    if ( !v14 )
    {
      ClientSecurity = -1073740030;
      goto LABEL_59;
    }
    v15 = KeGetCurrentThread()->PreviousMode;
    v16 = v51 & 0x3FFFFFF;
    if ( (v51 & 0x3FC) != 0 )
    {
      v17 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v14, (unsigned int)v16);
      if ( v17 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            _m_prefetchw(v17);
            v18 = *v17;
            if ( (*v17 & 1) == 0 )
              break;
            if ( v18 == _InterlockedCompareExchange64(v17, v18 - 1, v18) )
              goto LABEL_24;
          }
          if ( !v18 )
            break;
          ExpBlockOnLockedHandleEntry(v14, v17, v18);
        }
      }
    }
    v17 = 0LL;
    ExHandleLogBadReference(v14, v16, v15);
LABEL_24:
    if ( !v17 )
    {
      ClientSecurity = -1073740030;
      v6 = v53;
      goto LABEL_59;
    }
    HandlePointer = ExGetHandlePointer(v17);
    if ( *(_DWORD *)(HandlePointer + 264) != v51 || v54 && *(_DWORD *)(HandlePointer + 272) != v54 )
    {
      _InterlockedIncrement64(v17);
      _InterlockedOr(v47, 0);
      if ( *(_QWORD *)(v14 + 48) )
        ExfUnblockPushLock(v14 + 48, 0LL);
LABEL_68:
      ClientSecurity = -1073740030;
      v6 = v53;
      goto LABEL_59;
    }
    _m_prefetchw((const void *)(HandlePointer - 24));
    v20 = *(_QWORD *)(HandlePointer - 24);
    while ( v20 > 0 )
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer - 24), v20 + 1, v20);
      if ( v20 == v21 )
      {
        if ( v20 != -1 )
        {
          v22 = (char *)KeAbPreAcquire(HandlePointer - 16, 0LL);
          v23 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer - 16), v22, HandlePointer - 16);
          if ( v23 )
            v23[10] = 1;
          *(_BYTE *)(HandlePointer - 32) |= 1u;
          v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer - 24), 0x10000uLL) + 0x10000;
          if ( v24 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HandlePointer, 0x26uLL, v24);
          --*(_WORD *)(HandlePointer - 30);
          _InterlockedIncrement64(v17);
          _InterlockedOr(v47, 0);
          if ( *(_QWORD *)(v14 + 48) )
            ExfUnblockPushLock(v14 + 48, 0LL);
          if ( *(_DWORD *)(HandlePointer + 264) != v51 )
          {
            AlpcpUnlockMessage(HandlePointer);
            ClientSecurity = -1073740030;
            v6 = v53;
            goto LABEL_59;
          }
          if ( v54 && *(_DWORD *)(HandlePointer + 272) != v54
            || !*(_QWORD *)(HandlePointer + 24) && !*(_QWORD *)(HandlePointer + 16) )
          {
            AlpcpUnlockMessage(HandlePointer);
            goto LABEL_68;
          }
          v25 = (void ***)Object;
          if ( Object )
          {
            if ( *(_QWORD *)(HandlePointer + 184) == *((_QWORD *)Object + 2)
              || *(PVOID *)(HandlePointer + 192) == Object )
            {
LABEL_46:
              v65 = 0;
              memset_0(&v64, 0, 0x44uLL);
              v26 = 0;
              v50 = 0;
              v27 = 0LL;
              v28 = 0LL;
              if ( (*(_BYTE *)(HandlePointer + 40) & 7) != 3
                || _bittest16((const signed __int16 *)(HandlePointer + 244), 0xEu)
                || (v29 = *(void ****)(HandlePointer + 16), v29 != v25) && (((_BYTE)v25[52] & 6) != 6 || v29 != *v25[2]) )
              {
LABEL_51:
                ClientSecurity = -1073741790;
                goto LABEL_52;
              }
              v32 = *(_QWORD *)(HandlePointer + 136);
              if ( v32 )
              {
                AlpcpLockBlobExclusive(*(_QWORD *)(HandlePointer + 136));
                v39 = *(_DWORD *)(v32 + 104);
                if ( (v39 & 1) != 0 )
                {
                  AlpcpUnlockBlobUncachedExclusive(v32);
                  ClientSecurity = -1073741790;
                  goto LABEL_58;
                }
                *(_DWORD *)(v32 + 104) = v39 | 2;
                AlpcpUnlockBlobUncachedExclusive(v32);
                v28 = (__int64 *)(v32 + 32);
                v26 = 0;
              }
              else
              {
                v33 = (_DWORD *)AlpcpReferenceConnectedPort(v25);
                v27 = v33;
                if ( !v33 || (v33[64] & 0x10000) == 0 )
                  goto LABEL_106;
                if ( (v33[104] & 0x400) != 0 )
                {
                  v34 = *(_QWORD *)(HandlePointer + 32);
                  if ( v34 && (!v58 || v33[66] >= (int)v11) )
                  {
                    if ( (_DWORD)Process )
                    {
                      ClientSecurity = SeCreateClientSecurityEx(*(_QWORD *)(HandlePointer + 32));
                    }
                    else
                    {
                      v35 = 0;
                      v57 = 0;
                      v48 = 0;
                      v49[0] = 0;
                      SourceSid = 0LL;
                      v36 = KeGetCurrentThread();
                      if ( (struct _KTHREAD *)v34 == v36 )
                        Process = v36->ApcState.Process;
                      else
                        Process = *(_KPROCESS **)(v34 + 544);
                      if ( (*(_DWORD *)(v34 + 1440) & 8) == 0 )
                        goto LABEL_82;
                      Object = *(PVOID *)(v34 + 544);
                      v60 = KeGetCurrentThread();
                      --v60->KernelApcDisable;
                      v40 = KeAbPreAcquire(v34 + 1424, 0LL);
                      v56 = v40;
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 1424), 17LL, 0LL) )
                      {
                        ExfAcquirePushLockSharedEx((signed __int64 *)(v34 + 1424), 0, v40, v34 + 1424);
                        v40 = v56;
                      }
                      if ( v40 )
                        v40[10] = 1;
                      if ( (*(_DWORD *)(v34 + 1440) & 8) != 0 )
                      {
                        v56 = (PVOID)(*(_QWORD *)(v34 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
                        ObfReferenceObjectWithTag(v56, 0x63436553u);
                        v57 = *(_DWORD *)(v34 + 1336) & 3;
                        v48 = *((_BYTE *)Object + 1530);
                        v35 = (*(_BYTE *)(v34 + 1336) & 4) != 0;
                      }
                      else
                      {
                        v56 = 0LL;
                      }
                      PspUnlockThreadSecurityShared(v34);
                      v37 = (PSID *)v56;
                      if ( v56 )
                      {
                        LODWORD(Object) = 2;
                      }
                      else
                      {
LABEL_82:
                        v37 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
                        v56 = v37;
                        LODWORD(Object) = 1;
                        v35 = 0;
                        v48 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
                      }
                      SepReconcileTrustSidWithProcessProtection(v37[138], &v48, v49, &SourceSid);
                      ClientSecurity = SepCreateClientSecurityEx(
                                         (int)v37,
                                         (int)v27 + 260,
                                         0,
                                         (int)Object,
                                         v35,
                                         v57,
                                         0,
                                         0LL,
                                         v49[0],
                                         SourceSid,
                                         (__int64)&v64);
                      if ( ClientSecurity < 0 || !v27[268] )
                        ObfDereferenceObjectWithTag(v56, 0x63436553u);
                      LODWORD(v11) = v63;
                    }
                    if ( ClientSecurity >= 0 )
                    {
                      v28 = &v64;
                      v26 = 1;
                      goto LABEL_88;
                    }
LABEL_107:
                    v26 = 0;
LABEL_52:
                    if ( v27 )
                      ObfDereferenceObject(v27);
                    if ( v26 )
                    {
                      v30 = (_DWORD *)v28[2];
                      if ( v30[48] == 1 || v30 )
                        ObfDereferenceObjectWithTag(v30, 0x63436553u);
                    }
LABEL_58:
                    AlpcpUnlockMessage(HandlePointer);
                    v6 = v53;
                    goto LABEL_59;
                  }
LABEL_106:
                  ClientSecurity = -1073741790;
                  goto LABEL_107;
                }
                v28 = (__int64 *)(v33 + 16);
                v26 = v50;
              }
LABEL_88:
              *(_OWORD *)ImpersonationLevel = *(_OWORD *)v28;
              *(_OWORD *)Token = *((_OWORD *)v28 + 1);
              if ( v58 )
              {
                if ( (int)v11 > *((_DWORD *)v28 + 1) )
                  goto LABEL_51;
                ImpersonationLevel[1] = v11;
              }
              v38 = BYTE1(Token[1]);
              if ( !LOBYTE(Token[1]) )
                v38 = BYTE1(ImpersonationLevel[2]);
              ClientSecurity = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v38, ImpersonationLevel[1]);
              goto LABEL_52;
            }
LABEL_111:
            AlpcpUnlockMessage(HandlePointer);
            ClientSecurity = -1073741790;
            v6 = v53;
            goto LABEL_59;
          }
          v41 = *(_QWORD *)(HandlePointer + 16);
          if ( !v41 || *(_KPROCESS **)(v41 + 24) != KeGetCurrentThread()->ApcState.Process )
            goto LABEL_111;
LABEL_120:
          v25 = (void ***)Object;
          goto LABEL_46;
        }
LABEL_121:
        ExUnlockHandleTableEntry(v14, v17);
        ClientSecurity = -1073740030;
        v6 = v53;
        goto LABEL_59;
      }
    }
    if ( v20 )
      KeBugCheckEx(0x18u, 0LL, HandlePointer, 0x20uLL, v20);
    goto LABEL_121;
  }
  v45 = AlpcpReferenceConnectedPort(Object);
  v5 = (void *)v45;
  if ( !v45 )
  {
    ClientSecurity = -1073741790;
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(v45 + 256) & 0x10000) == 0 )
  {
    ClientSecurity = -1073741790;
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(v45 + 416) & 0x400) != 0 )
  {
    ClientSecurity = -1073741790;
    goto LABEL_59;
  }
  *(_OWORD *)ImpersonationLevel = *(_OWORD *)(v45 + 64);
  *(_OWORD *)Token = *(_OWORD *)(v45 + 80);
  if ( v12 )
  {
    if ( (int)v11 > ImpersonationLevel[1] )
    {
      ClientSecurity = -1073741790;
      goto LABEL_59;
    }
    ImpersonationLevel[1] = v11;
  }
  v46 = BYTE1(Token[1]);
  if ( !LOBYTE(Token[1]) )
    v46 = BYTE1(ImpersonationLevel[2]);
  ClientSecurity = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v46, ImpersonationLevel[1]);
LABEL_59:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegionThread();
  return ClientSecurity;
}
