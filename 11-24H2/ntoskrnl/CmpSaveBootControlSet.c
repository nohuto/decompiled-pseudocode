/*
 * XREFs of CmpSaveBootControlSet @ 0x1407CCC54
 * Callers:
 *     CmpAcceptBoot @ 0x1407CFA84 (CmpAcceptBoot.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1406AA0B0 (ZwQuerySecurityObject.c)
 *     CmpInvalidateSubtree @ 0x1407DB530 (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407E1740 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E192C (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     CmpRebuildKcbCache @ 0x14087F358 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140AB45A0 (CmpRetryBackOff.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  _QWORD *v3; // rdi
  char v4; // r14
  ULONG_PTR *v5; // rsi
  struct _PRIVILEGE_SET *Pool; // r15
  NTSTATUS v7; // ebx
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r8
  ULONG_PTR v12; // r15
  NTSTATUS v13; // r12d
  bool v14; // r12
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // edx
  ULONG_PTR v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  int v22; // r9d
  ULONG_PTR v23; // r9
  char *v24; // rdx
  char v26; // [rsp+48h] [rbp-C0h]
  ULONG v27; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v39; // [rsp+138h] [rbp+30h]
  int v40; // [rsp+140h] [rbp+38h]
  int v41; // [rsp+144h] [rbp+3Ch]
  __int64 *v42; // [rsp+148h] [rbp+40h]
  int v43; // [rsp+150h] [rbp+48h]
  int v44; // [rsp+154h] [rbp+4Ch]
  char v45; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  v3 = 0LL;
  memset(v32, 0, sizeof(v32));
  Disposition[1] = 0;
  v4 = 0;
  v34 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v29 = 0LL;
  Pool = 0LL;
  Length[0] = 0;
  v27 = 0;
  CmpInitializeDelayDerefContext(&v34);
  v26 = CmpAcquireShutdownRundown();
  if ( !v26 )
  {
    v7 = -1073741431;
    goto LABEL_33;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
    {
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, Length[0], 0x20204D43u);
      if ( Pool )
      {
        if ( ZwQuerySecurityObject(KeyHandle, 4u, Pool, Length[0], Length) < 0 )
        {
          CmSiFreeMemory(Pool);
          Pool = 0LL;
        }
      }
    }
    DestinationString.MaximumLength = 256;
    DestinationString.Buffer = (wchar_t *)&v45;
    RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = Pool;
    v7 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
    if ( Pool )
      CmSiFreeMemory(Pool);
    if ( v7 >= 0 )
    {
      v7 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v8, 0, (__int64)v32, 0LL);
      if ( v7 >= 0 )
      {
        v7 = CmObReferenceObjectByHandle((_DWORD)Handle, 131078, v9, 0, (__int64)&v29, 0LL);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = (_QWORD *)v32[0];
          v5 = (ULONG_PTR *)v29;
          while ( 1 )
          {
            v7 = CmpPerformKeyBodyDeletionCheck(v3, 0LL);
            if ( v7 < 0
              || (v7 = CmpPerformKeyBodyDeletionCheck(v5, 0LL), v7 < 0)
              || (v12 = v5[1],
                  LOBYTE(v10) = 1,
                  v7 = CmpTryAcquireKcbIXLocks(v12, v10, v11, &v32[1]),
                  v13 = v7,
                  (int)(v7 + 0x80000000) >= 0)
              && v7 != -1073741267 )
            {
LABEL_30:
              v4 = 1;
              goto LABEL_33;
            }
            v7 = CmpPrepareToInvalidateAllHigherLayerKcbs(v12, 0LL, &v32[1]);
            if ( v7 == -1073741267 )
            {
              v14 = 1;
            }
            else
            {
              v14 = v13 == -1073741267;
              if ( v7 < 0 )
                goto LABEL_30;
            }
            v15 = CmpPrepareForSubtreeInvalidation(v12, 0LL, &v32[1]);
            v7 = v15;
            if ( v15 != -1073741267 )
            {
              if ( v15 < 0 )
                goto LABEL_30;
              if ( !v14 )
                break;
            }
            CmpLogTransactionAbortedWithChildName(v12, 0LL, 12LL);
            CmpUnlockRegistry();
            v7 = CmpAbortRollbackPacket(&v32[1], 0LL);
            if ( v7 < 0 )
              goto LABEL_33;
            CmpRetryBackOff(&v27);
            CmpCleanupRollbackPacket(&v32[1]);
            *(_OWORD *)&v32[1] = 0LL;
            CmpLockRegistryExclusive();
          }
          CmpInvalidateAllHigherLayerKcbs(v12, 8LL, 0LL, &v34);
          CmpInvalidateSubtree(v12, 8, 0, (unsigned int)&v34, (__int64)&Disposition[1]);
          CmpAttachToRegistryProcess(&ApcState);
          v2 = 1;
          v16 = v3[1];
          v17 = *(_QWORD *)(v16 + 32);
          v18 = *(_DWORD *)(v16 + 40);
          if ( Disposition[0] == 1 )
          {
            v19 = v5[1];
            v20 = 0;
            v21 = *(_QWORD *)(v19 + 32);
            v22 = *(_DWORD *)(v19 + 40);
          }
          else
          {
            v23 = v5[1];
            v20 = 1;
            v21 = *(_QWORD *)(v23 + 32);
            v22 = *(_DWORD *)(v23 + 40);
          }
          v7 = CmpCopySyncTree(v17, v18, v21, v22, 2, v20);
          CmpRebuildKcbCache(v5[1]);
          v4 = 1;
          goto LABEL_33;
        }
        v5 = (ULONG_PTR *)v29;
      }
      v3 = (_QWORD *)v32[0];
    }
  }
LABEL_33:
  CmpDrainDelayDerefContext((_QWORD **)&v34);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess(&ApcState);
  CmpCleanupRollbackPacket(&v32[1]);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    CmpReleaseShutdownRundown();
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
    {
      v27 = v7;
      v24 = byte_140054F91;
      goto LABEL_54;
    }
  }
  else if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
  {
    v24 = byte_140054F3D;
    v27 = Disposition[1];
LABEL_54:
    v41 = 0;
    v44 = 0;
    v39 = &v27;
    v40 = 4;
    v42 = &v29;
    v29 = 0x1000000LL;
    v43 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)v24, 0LL, 0LL, 4u, &v38);
  }
  return (unsigned int)v7;
}
