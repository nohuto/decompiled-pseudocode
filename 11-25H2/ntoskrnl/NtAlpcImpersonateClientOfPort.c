/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140859580
 * Callers:
 *     NtImpersonateClientOfPort @ 0x140A9F320 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403614B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     PspUnlockThreadSecurityShared @ 0x14041DA20 (PspUnlockThreadSecurityShared.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     AlpcpReferenceConnectedPort @ 0x1408A6120 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14098BD84 (AlpcpLockBlobExclusive.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // r15
  PVOID v6; // rsi
  KPROCESSOR_MODE PreviousMode; // r9
  char v8; // cl
  unsigned int MessageId; // edi
  unsigned int CallbackId; // eax
  unsigned __int64 v11; // r12
  void *v12; // r14
  int ClientSecurity; // ebx
  ULONG_PTR v14; // r14
  char v15; // si
  ULONG_PTR v16; // rdi
  signed __int64 *v17; // rbx
  signed __int64 v18; // r8
  ULONG_PTR HandlePointer; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // r13
  signed __int64 v24; // rax
  void ***v25; // rbx
  int v26; // r13d
  _BYTE *v27; // rsi
  __int64 *v28; // r14
  void ***v29; // rcx
  _DWORD *v30; // rcx
  __int64 v32; // r13
  _DWORD *v33; // rax
  __int64 v34; // rbx
  char v35; // r13
  struct _KTHREAD *v36; // rax
  PSID *v37; // rbx
  BOOLEAN v38; // r9^1
  int v39; // eax
  _BYTE *v40; // rcx
  ULONG_PTR v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  signed __int32 v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  BOOLEAN v47; // r9^1
  signed __int32 v48[8]; // [rsp+0h] [rbp-1B8h] BYREF
  unsigned __int8 v49; // [rsp+60h] [rbp-158h] BYREF
  char v50[3]; // [rsp+61h] [rbp-157h] BYREF
  int v51; // [rsp+64h] [rbp-154h]
  unsigned int v52; // [rsp+68h] [rbp-150h]
  PVOID Object; // [rsp+70h] [rbp-148h] BYREF
  PVOID v54; // [rsp+78h] [rbp-140h]
  unsigned int v55; // [rsp+80h] [rbp-138h]
  _KPROCESS *Process; // [rsp+88h] [rbp-130h]
  PVOID v57; // [rsp+90h] [rbp-128h]
  int v58; // [rsp+98h] [rbp-120h]
  PVOID v59; // [rsp+A0h] [rbp-118h]
  PSID SourceSid; // [rsp+A8h] [rbp-110h] BYREF
  struct _KTHREAD *v61; // [rsp+B0h] [rbp-108h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[4]; // [rsp+C0h] [rbp-F8h]
  PACCESS_TOKEN Token[2]; // [rsp+D0h] [rbp-E8h]
  unsigned __int64 v64; // [rsp+110h] [rbp-A8h]
  __int64 v65; // [rsp+120h] [rbp-98h] BYREF
  int v66; // [rsp+12Ch] [rbp-8Ch]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v52 = 0;
  v55 = 0;
  v6 = 0LL;
  v59 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Message )
  {
    v61 = KeGetCurrentThread();
    v8 = v61->PreviousMode;
    if ( v8 && ((unsigned __int8)Message & 3) != 0 )
LABEL_4:
      ExRaiseDatatypeMisalignment();
    if ( _bittest16(&Message->u2.s2.Type, 0xCu) )
    {
      MessageId = *((_DWORD *)&Message->DoNotUseThisField + 2);
      v52 = MessageId;
      CallbackId = *((_DWORD *)&Message->DoNotUseThisField + 3);
    }
    else
    {
      if ( v8 && ((unsigned __int8)Message & 3) != 0 )
        goto LABEL_4;
      MessageId = Message->MessageId;
      v52 = MessageId;
      CallbackId = Message->CallbackId;
    }
    v55 = CallbackId;
    if ( !MessageId )
    {
LABEL_151:
      ClientSecurity = -1073741811;
      goto LABEL_58;
    }
  }
  else
  {
    MessageId = v52;
  }
  v11 = (unsigned __int64)Flags >> 2;
  v64 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_151;
  Process = (_KPROCESS *)((unsigned __int8)Flags & 1);
  v12 = (void *)((unsigned int)Flags & ((4 * (_DWORD)v11) | 2));
  v59 = v12;
  Object = 0LL;
  ClientSecurity = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v54 = Object;
  if ( ClientSecurity < 0 )
    goto LABEL_58;
  if ( MessageId )
  {
    if ( (MessageId & 0x80000000) != 0 )
    {
      if ( !Object )
      {
        ClientSecurity = -1073740030;
        goto LABEL_58;
      }
      v41 = 0LL;
      v42 = *((_QWORD *)Object + 2);
      if ( v42 )
      {
        v43 = MessageId;
        LODWORD(v43) = MessageId & 0x7FFFFFFF;
        v41 = AlpcReferenceBlobByHandle(v42 + 40, v43, AlpcReserveType);
      }
      if ( !v41 )
      {
        ClientSecurity = -1073741072;
        goto LABEL_58;
      }
      HandlePointer = *(_QWORD *)(v41 + 24);
      AlpcpLockForCachedReferenceBlob(HandlePointer);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 40), 1, 0) )
      {
        AlpcpUnlockMessage(HandlePointer);
        AlpcpDereferenceBlobEx(v41);
        ClientSecurity = -1073740024;
        goto LABEL_58;
      }
      *(_DWORD *)(HandlePointer + 264) &= ~0x80000000;
      do
        v44 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v44 );
      *(_DWORD *)(HandlePointer + 272) = v44;
      goto LABEL_115;
    }
    if ( (MessageId & 0xFC000000) != 0 )
    {
      if ( AlpcpSecondaryMessageTables )
        v14 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)MessageId >> 26));
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
      goto LABEL_58;
    }
    v15 = KeGetCurrentThread()->PreviousMode;
    v16 = v52 & 0x3FFFFFF;
    if ( (v52 & 0x3FC) != 0 )
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
              goto LABEL_23;
          }
          if ( !v18 )
            break;
          ExpBlockOnLockedHandleEntry(v14, v17, v18);
        }
      }
    }
    v17 = 0LL;
    ExHandleLogBadReference(v14, v16, v15);
LABEL_23:
    if ( !v17 )
    {
      ClientSecurity = -1073740030;
      v6 = v54;
      goto LABEL_58;
    }
    HandlePointer = ExGetHandlePointer(v17);
    if ( *(_DWORD *)(HandlePointer + 264) != v52 || v55 && *(_DWORD *)(HandlePointer + 272) != v55 )
    {
      _InterlockedIncrement64(v17);
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(v14 + 48) )
        ExfUnblockPushLock(v14 + 48, 0LL);
LABEL_67:
      ClientSecurity = -1073740030;
      v6 = v54;
      goto LABEL_58;
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
          v22 = KeAbPreAcquire(HandlePointer - 16, 0LL);
          v23 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer - 16), v22, HandlePointer - 16);
          if ( v23 )
            *((_BYTE *)v23 + 10) = 1;
          *(_BYTE *)(HandlePointer - 32) |= 1u;
          v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer - 24), 0x10000uLL) + 0x10000;
          if ( v24 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HandlePointer, 0x26uLL, v24);
          --*(_WORD *)(HandlePointer - 30);
          _InterlockedIncrement64(v17);
          _InterlockedOr(v48, 0);
          if ( *(_QWORD *)(v14 + 48) )
            ExfUnblockPushLock(v14 + 48, 0LL);
          if ( *(_DWORD *)(HandlePointer + 264) != v52 )
          {
            AlpcpUnlockMessage(HandlePointer);
            ClientSecurity = -1073740030;
            v6 = v54;
            goto LABEL_58;
          }
          if ( v55 && *(_DWORD *)(HandlePointer + 272) != v55
            || !*(_QWORD *)(HandlePointer + 24) && !*(_QWORD *)(HandlePointer + 16) )
          {
            AlpcpUnlockMessage(HandlePointer);
            goto LABEL_67;
          }
          v25 = (void ***)Object;
          if ( Object )
          {
            if ( *(_QWORD *)(HandlePointer + 184) == *((_QWORD *)Object + 2)
              || *(PVOID *)(HandlePointer + 192) == Object )
            {
LABEL_45:
              v66 = 0;
              memset_0(&v65, 0, 0x44uLL);
              v26 = 0;
              v51 = 0;
              v27 = 0LL;
              v28 = 0LL;
              if ( (*(_BYTE *)(HandlePointer + 40) & 7) != 3
                || _bittest16((const signed __int16 *)(HandlePointer + 244), 0xEu)
                || (v29 = *(void ****)(HandlePointer + 16), v29 != v25) && (((_BYTE)v25[52] & 6) != 6 || v29 != *v25[2]) )
              {
LABEL_50:
                ClientSecurity = -1073741790;
                goto LABEL_51;
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
                  goto LABEL_57;
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
                  goto LABEL_104;
                if ( (v33[104] & 0x400) != 0 )
                {
                  v34 = *(_QWORD *)(HandlePointer + 32);
                  if ( v34 && (!v59 || v33[66] >= (int)v11) )
                  {
                    if ( (_DWORD)Process )
                    {
                      ClientSecurity = SeCreateClientSecurityEx(*(_QWORD *)(HandlePointer + 32));
                    }
                    else
                    {
                      v35 = 0;
                      v58 = 0;
                      v49 = 0;
                      v50[0] = 0;
                      SourceSid = 0LL;
                      v36 = KeGetCurrentThread();
                      if ( (struct _KTHREAD *)v34 == v36 )
                        Process = v36->ApcState.Process;
                      else
                        Process = *(_KPROCESS **)(v34 + 544);
                      if ( (*(_DWORD *)(v34 + 1440) & 8) == 0 )
                        goto LABEL_81;
                      Object = *(PVOID *)(v34 + 544);
                      v61 = KeGetCurrentThread();
                      --v61->KernelApcDisable;
                      v40 = KeAbPreAcquire(v34 + 1424, 0LL);
                      v57 = v40;
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 1424), 17LL, 0LL) )
                      {
                        ExfAcquirePushLockSharedEx((signed __int64 *)(v34 + 1424), 0, (__int64 *)v40, v34 + 1424);
                        v40 = v57;
                      }
                      if ( v40 )
                        v40[10] = 1;
                      if ( (*(_DWORD *)(v34 + 1440) & 8) != 0 )
                      {
                        v57 = (PVOID)(*(_QWORD *)(v34 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
                        ObfReferenceObjectWithTag(v57, 0x63436553u);
                        v58 = *(_DWORD *)(v34 + 1336) & 3;
                        v49 = *((_BYTE *)Object + 1530);
                        v35 = (*(_BYTE *)(v34 + 1336) & 4) != 0;
                      }
                      else
                      {
                        v57 = 0LL;
                      }
                      PspUnlockThreadSecurityShared(v34, (__int64)v61);
                      v37 = (PSID *)v57;
                      if ( v57 )
                      {
                        LODWORD(Object) = 2;
                      }
                      else
                      {
LABEL_81:
                        v37 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
                        v57 = v37;
                        LODWORD(Object) = 1;
                        v35 = 0;
                        v49 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
                      }
                      SepReconcileTrustSidWithProcessProtection(v37[138], &v49, v50, &SourceSid);
                      ClientSecurity = SepCreateClientSecurityEx(
                                         (int)v37,
                                         v35,
                                         v58,
                                         0,
                                         0LL,
                                         v50[0],
                                         SourceSid,
                                         (__int64)&v65);
                      if ( ClientSecurity < 0 || !v27[268] )
                        ObfDereferenceObjectWithTag(v57, 0x63436553u);
                    }
                    if ( ClientSecurity >= 0 )
                    {
                      v28 = &v65;
                      v26 = 1;
                      LODWORD(v11) = v64;
                      goto LABEL_86;
                    }
LABEL_105:
                    v26 = 0;
LABEL_51:
                    if ( v27 )
                      ObfDereferenceObject(v27);
                    if ( v26 )
                    {
                      v30 = (_DWORD *)v28[2];
                      if ( v30[48] == 1 || v30 )
                        ObfDereferenceObjectWithTag(v30, 0x63436553u);
                    }
LABEL_57:
                    AlpcpUnlockMessage(HandlePointer);
                    v6 = v54;
                    goto LABEL_58;
                  }
LABEL_104:
                  ClientSecurity = -1073741790;
                  goto LABEL_105;
                }
                v28 = (__int64 *)(v33 + 16);
                v26 = v51;
              }
LABEL_86:
              *(_OWORD *)ImpersonationLevel = *(_OWORD *)v28;
              *(_OWORD *)Token = *((_OWORD *)v28 + 1);
              if ( v59 )
              {
                if ( (int)v11 > *((_DWORD *)v28 + 1) )
                  goto LABEL_50;
                ImpersonationLevel[1] = v11;
              }
              v38 = BYTE1(Token[1]);
              if ( !LOBYTE(Token[1]) )
                v38 = BYTE1(ImpersonationLevel[2]);
              ClientSecurity = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v38, ImpersonationLevel[1]);
              goto LABEL_51;
            }
LABEL_118:
            AlpcpUnlockMessage(HandlePointer);
            ClientSecurity = -1073741790;
            v6 = v54;
            goto LABEL_58;
          }
          v45 = *(_QWORD *)(HandlePointer + 16);
          if ( !v45 || *(_KPROCESS **)(v45 + 24) != KeGetCurrentThread()->ApcState.Process )
            goto LABEL_118;
LABEL_115:
          v25 = (void ***)Object;
          goto LABEL_45;
        }
LABEL_139:
        ExUnlockHandleTableEntry(v14, v17);
        ClientSecurity = -1073740030;
        v6 = v54;
        goto LABEL_58;
      }
    }
    if ( v20 )
      KeBugCheckEx(0x18u, 0LL, HandlePointer, 0x20uLL, v20);
    goto LABEL_139;
  }
  v46 = AlpcpReferenceConnectedPort(Object);
  v5 = (void *)v46;
  if ( !v46 )
  {
    ClientSecurity = -1073741790;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(v46 + 256) & 0x10000) == 0 )
  {
    ClientSecurity = -1073741790;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(v46 + 416) & 0x400) != 0 )
  {
    ClientSecurity = -1073741790;
    goto LABEL_58;
  }
  *(_OWORD *)ImpersonationLevel = *(_OWORD *)(v46 + 64);
  *(_OWORD *)Token = *(_OWORD *)(v46 + 80);
  if ( v12 )
  {
    if ( (int)v11 > ImpersonationLevel[1] )
    {
      ClientSecurity = -1073741790;
      goto LABEL_58;
    }
    ImpersonationLevel[1] = v11;
  }
  v47 = BYTE1(Token[1]);
  if ( !LOBYTE(Token[1]) )
    v47 = BYTE1(ImpersonationLevel[2]);
  ClientSecurity = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v47, ImpersonationLevel[1]);
LABEL_58:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ClientSecurity;
}
