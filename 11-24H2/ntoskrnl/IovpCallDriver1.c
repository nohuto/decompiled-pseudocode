/*
 * XREFs of IovpCallDriver1 @ 0x140B8ECB4
 * Callers:
 *     VfBeforeCallDriver @ 0x140B8FC68 (VfBeforeCallDriver.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     MdlInvariantPreProcessing1 @ 0x14061029C (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x140B8EB2C (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x140B8F5AC (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8F650 (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x140B8F88C (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x140B93A70 (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x140B93BC8 (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x140B93CD4 (VfPendingStartLogging.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B94A30 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B94A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140B94B44 (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorIsNewRequest @ 0x140B94F34 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x140B951AC (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x140B9533C (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x140B953EC (VfMajorVerifyNewRequest.c)
 *     VfPacketCreateAndLock @ 0x140B9D430 (VfPacketCreateAndLock.c)
 *     VfIrpLogRecordEvent @ 0x140B9D684 (VfIrpLogRecordEvent.c)
 *     IovpSessionDataCreate @ 0x140B9E70C (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x140B9E880 (IovpSessionDataReference.c)
 *     ViWdBeforeCallDriver @ 0x140B9EA10 (ViWdBeforeCallDriver.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 */

int __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // eax
  int v8; // ecx
  unsigned __int8 *v9; // r12
  int v10; // r9d
  int ShouldForce; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  void *v14; // rdi
  int v15; // eax
  int *v16; // r13
  int v17; // eax
  __int64 v18; // rbx
  void *BottomDeviceObjectWithTag; // rdi
  __int64 v20; // rdi
  _QWORD *v21; // r13
  int v22; // r8d
  int IsNewRequest; // eax
  char v24; // dl
  int v25; // eax
  __int64 v26; // rdi
  bool v27; // zf
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  void *v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r8
  volatile signed __int32 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  int v40; // ebx
  __int64 v41; // rdx
  char v42; // al
  __int64 v43; // rcx
  const void *v45; // [rsp+28h] [rbp-41h]
  __int64 v46; // [rsp+28h] [rbp-41h]
  __int64 v47; // [rsp+40h] [rbp-29h] BYREF
  __int64 v48; // [rsp+48h] [rbp-21h]
  __int64 v49; // [rsp+50h] [rbp-19h] BYREF
  __int64 started; // [rsp+58h] [rbp-11h]
  PVOID Object; // [rsp+60h] [rbp-9h]
  __int128 v52; // [rsp+68h] [rbp-1h] BYREF
  __int64 v53; // [rsp+78h] [rbp+Fh]
  int v54; // [rsp+D0h] [rbp+67h]
  int v55; // [rsp+D8h] [rbp+6Fh] BYREF
  int v56; // [rsp+E0h] [rbp+77h]
  const void *v57; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 168);
  v49 = 0LL;
  v47 = 0LL;
  v55 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0LL;
  LODWORD(v5) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( !(_DWORD)v5 )
  {
    v4 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v4;
    if ( v4 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = VfPacketCreateAndLock(v1);
      v4 = v6;
      v7 = *(_DWORD *)(v1 + 16);
      if ( !v6 )
      {
        LODWORD(v5) = v7 | 0x80000000;
        *(_DWORD *)(v1 + 16) = v5;
        return v5;
      }
      *(_DWORD *)(v1 + 16) = v7 | 0x40000000;
    }
LABEL_10:
    v8 = *(_DWORD *)(v4 + 232);
    *(_BYTE *)(v4 + 61) = CurrentIrql;
    *(_BYTE *)(v4 + 60) = CurrentIrql;
    v45 = *(const void **)(a1 + 176);
    v9 = (unsigned __int8 *)(*(_QWORD *)(v1 + 184) - 72LL);
    v10 = *(_DWORD *)(v1 + 184) - 72;
    started = 0LL;
    v57 = v45;
    ShouldForce = VfPendingShouldForce(v8, CurrentIrql, v1, v10, v4, (__int64)v45);
    v12 = *(_QWORD *)(v4 + 240);
    v13 = ShouldForce;
    v14 = *(void **)(a1 + 160);
    v56 = ShouldForce;
    v48 = v12;
    Object = v14;
    if ( v12 )
    {
      v15 = 0;
      v16 = (int *)(v6 + 56);
    }
    else
    {
      v16 = (int *)(v4 + 56);
      v17 = *(_DWORD *)(v4 + 56);
      if ( (v17 & 1) == 0 )
      {
        v54 = 1;
        *v16 = v17 | 1;
        v12 = IovpSessionDataCreate(v14, v4, v13);
        v48 = v12;
        v15 = 1;
LABEL_16:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 16) = v4;
        if ( v12 )
        {
          v18 = MEMORY[0xFFFFF78000000014];
          if ( v15 )
          {
            BottomDeviceObjectWithTag = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
            VfIrpLogRecordEvent(*(unsigned int *)(v4 + 232), BottomDeviceObjectWithTag, v1);
            ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
            _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
            v20 = v48;
            ++*(_DWORD *)(v4 + 24);
            IovpSessionDataReference(v20);
          }
          else
          {
            v20 = v48;
          }
          if ( *(_QWORD *)(v1 + 104) )
          {
            ViErrorReport1(0x203u, v57, (const void *)v1);
            *(_QWORD *)(v1 + 104) = 0LL;
          }
          if ( (*v16 & 0x10) != 0 )
            ViErrorReport1(0x205u, v57, (const void *)v1);
          if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
            && (unsigned __int8)(*v9 - 3) <= 1u
            && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
            && (MmVerifierData & 0x6000) != 0 )
          {
            MdlInvariantPreProcessing1(a1, v4, (__int64)v9);
          }
          v21 = Object;
          *(_DWORD *)(v20 + 56) = IovpExamineDevObjForwarding(Object, *(_QWORD *)(v20 + 48));
          IovpExamineIrpStackForwarding(v4, v54, v22, v1, (__int64)v57, (__int64)v9, (__int64)&v47, (__int64)&v55);
          if ( v56 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
            ++*(_DWORD *)(v4 + 24);
            *(_QWORD *)(v4 + 216) = v9;
            started = VfPendingStartLogging(v1);
          }
          IsNewRequest = VfMajorIsNewRequest(v47, v9);
          v24 = *(_BYTE *)(v1 + 67);
          v56 = IsNewRequest;
          v25 = IovpAdvanceStackDownwards(v48 + 80, v24, (__int64)v9, v47, v55, IsNewRequest, 1, &v49);
          v26 = v49;
          *(_QWORD *)(v49 + 48) = v18;
          if ( !v25 )
          {
            *(_DWORD *)(a1 + 24) |= 0x4000000u;
            v27 = v56 == 0;
            *(_QWORD *)(a1 + 40) = a1 + 32;
            *(_QWORD *)(a1 + 32) = a1 + 32;
            *(_QWORD *)(v26 + 56) = v18;
            v26 = v49;
            *(_QWORD *)(v49 + 112) = KeGetCurrentThread();
            if ( !v27 )
            {
              *(_OWORD *)(v26 + 80) = *(_OWORD *)(v1 + 48);
              *(_OWORD *)(v26 + 96) = *(_OWORD *)(v1 + 48);
              if ( v54 )
                *(_DWORD *)(v26 + 4) |= 0x8000000u;
            }
          }
          LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v21);
          if ( LowerDeviceObjectWithTag )
            ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
          else
            *(_DWORD *)(v26 + 4) |= 0x10000000u;
          *(_QWORD *)(v26 + 40) = VfGetPristineDispatchRoutine(v21[1], *v9);
          v29 = (_QWORD *)(a1 + 32);
          *(_DWORD *)(v26 + 4) &= ~0x40000000u;
          v30 = (_QWORD *)(v26 + 16);
          v31 = *(_QWORD *)(v26 + 16);
          if ( *(_QWORD *)(v31 + 8) != v26 + 16 )
            __fastfail(3u);
          *v29 = v31;
          *(_QWORD *)(a1 + 40) = v30;
          *(_QWORD *)(v31 + 8) = v29;
          *v30 = v29;
          *(_QWORD *)(a1 + 8) = v26;
          *(_QWORD *)(a1 + 72) = v1;
          v32 = *(_QWORD *)(v1 + 184);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)(v32 - 72);
          *(_OWORD *)(a1 + 96) = *(_OWORD *)(v32 - 56);
          *(_OWORD *)(a1 + 112) = *(_OWORD *)(v32 - 40);
          *(_OWORD *)(a1 + 128) = *(_OWORD *)(v32 - 24);
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(v32 - 8);
          if ( (v9[3] & 1) != 0 )
            *(_DWORD *)(a1 + 24) |= 0x1000000u;
          if ( *v9 == 27 && v9[1] == 2 )
          {
            *(_DWORD *)(a1 + 24) |= 0x20000000u;
            v33 = (void *)IovUtilGetBottomDeviceObjectWithTag(v21);
            *(_QWORD *)(a1 + 64) = v33;
            ObfDereferenceObjectWithTag(v33, 0x49667256u);
            v34 = v21;
            LOBYTE(v35) = KeAcquireQueuedSpinLock(0xAuLL);
            do
            {
              if ( (unsigned int)IovUtilIsDeviceObjectMarked(v34, 1LL, v35) )
                break;
              v34 = *(_QWORD **)(v34[39] + 48LL);
            }
            while ( v34 );
            KeReleaseQueuedSpinLock(0xAuLL, v35);
            if ( v34 && !(unsigned int)IovUtilIsDeviceObjectMarked(v21, 3LL, v36) )
              *(_DWORD *)(a1 + 24) |= 0x10000000u;
            v53 = 0LL;
            v52 = 0LL;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              VfAvlInitializeLockContext((__int64)&v52, 1);
              v37 = (volatile signed __int32 *)VfAvlLookupTreeNode(
                                                 ViDevObjAvl,
                                                 (__int64)&v52,
                                                 (unsigned __int64)v21,
                                                 0LL);
              if ( v37 )
              {
                _InterlockedOr(v37 + 4, 2u);
                v26 = v49;
              }
              VfAvlCleanupLockContext((__int64)&v52, v38);
            }
          }
          v39 = (__int64)v57;
          if ( v54 )
            VfMajorVerifyNewIrp(v4, v1, (_DWORD)v9, v26, (__int64)v57);
          if ( !v56 || (*(_DWORD *)(v4 + 56) & 0x80000) != 0 )
          {
            v40 = v47;
          }
          else
          {
            v46 = v39;
            v40 = v47;
            VfMajorVerifyNewRequest(v4, (_DWORD)v21, v47, (_DWORD)v9, v26, v46);
          }
          VfMajorVerifyIrpStackDownward(v4, (_DWORD)v21, v40, (_DWORD)v9, v26, (__int64)v57);
          v41 = v48;
          *(_QWORD *)(v48 + 48) = v21;
          *(_BYTE *)(v4 + 186) = *(_BYTE *)(v1 + 67);
          *(_OWORD *)(*(_QWORD *)(v26 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
          v42 = *(_BYTE *)(v1 + 67);
          if ( v42 > 2 )
          {
            v43 = *(_QWORD *)(v1 + 184);
            *(_BYTE *)(v1 + 67) = v42 - 1;
            *(_QWORD *)(v1 + 184) = v43 - 72;
            *(_BYTE *)(v43 - 141) |= 0x10u;
            ++*(_BYTE *)(v1 + 67);
            *(_QWORD *)(v1 + 184) += 72LL;
          }
          IovpSessionDataReference(v41);
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
          if ( VfWdCancelTimeoutTicks )
            ViWdBeforeCallDriver(v1, *(_QWORD *)(a1 + 48), v4 + 248);
        }
        VfIrpDatabaseEntryReleaseLock(v4);
        LODWORD(v5) = started;
        if ( started )
          LODWORD(v5) = VfPendingFinishLogging(started);
        return v5;
      }
      v15 = 0;
    }
    v54 = 0;
    goto LABEL_16;
  }
  if ( (_DWORD)v5 == 0x40000000 )
  {
    v5 = VfIrpDatabaseEntryFindAndLock(v1);
    v4 = v5;
  }
  v6 = v4;
  if ( v4 )
    goto LABEL_10;
  return v5;
}
