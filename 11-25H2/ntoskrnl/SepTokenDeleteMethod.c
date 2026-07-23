/*
 * XREFs of SepTokenDeleteMethod @ 0x1409A7370
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x1403EA340 (RtlRemoveEntryHashTable.c)
 *     SepDereferenceLuidToIndexEntry @ 0x140456084 (SepDereferenceLuidToIndexEntry.c)
 *     ExRemoveLowBoxAtomReferences @ 0x14046F158 (ExRemoveLowBoxAtomReferences.c)
 *     SepFreeTokenCapabilities @ 0x140471AA8 (SepFreeTokenCapabilities.c)
 *     SepGetTokenSessionMapEntry @ 0x14047E744 (SepGetTokenSessionMapEntry.c)
 *     SepCloseCachedTokenHandles @ 0x14049845C (SepCloseCachedTokenHandles.c)
 *     RtlDereferenceAtomTable @ 0x1405DCBD0 (RtlDereferenceAtomTable.c)
 *     SepModifyTokenPolicyCounter @ 0x140780880 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x140783DBC (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x140784688 (SepRemoveTokenLogonSession.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A06268 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SepDeleteClaimAttributes @ 0x140A752F0 (SepDeleteClaimAttributes.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rsi
  struct _KTHREAD *v5; // rax
  volatile signed __int32 *v6; // rsi
  ULONG_PTR v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rbp
  signed __int64 v10; // rax
  bool v11; // cc
  signed __int64 v12; // rax
  char v13; // al
  ULONG_PTR v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rsi
  struct _KTHREAD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // r14
  signed __int64 v20; // rax
  signed __int64 v21; // rax
  _QWORD *v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  void *v25; // rcx
  void *v26; // rcx
  __int64 v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  struct _ERESOURCE *v30; // rcx
  void *v31; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  BOOLEAN v36; // r14
  void *v37; // rcx
  void *v38; // rcx
  ULONG_PTR v39; // rsi
  BOOLEAN v40; // bp
  char v41; // al
  ULONG_PTR v42; // rsi
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+8h] BYREF
  __int64 v44; // [rsp+68h] [rbp+10h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v38 = *(void **)(a1 + 1144);
    if ( v38 )
      ExFreePoolWithTag(v38, 0);
  }
  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x1000000) != 0 )
    _InterlockedDecrement(&SepLearningModeTokenCount);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 1080);
    if ( v3 )
    {
      v4 = *(unsigned int *)(a1 + 120);
      BugCheckParameter2 = 0LL;
      if ( (unsigned int)v4 >= 5 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v33 = KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&LowboxSessionMapLock,
            0,
            v33,
            (unsigned __int64)&LowboxSessionMapLock);
        if ( v33 )
          *((_BYTE *)v33 + 10) = 1;
        SepGetTokenSessionMapEntry(v4, 0, (__int64 *)&BugCheckParameter2);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
        KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else
      {
        BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * v4;
      }
      v5 = KeGetCurrentThread();
      v6 = (volatile signed __int32 *)BugCheckParameter2;
      v7 = BugCheckParameter2;
      --v5->KernelApcDisable;
      v8 = KeAbPreAcquire(v7, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64(v6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v8, BugCheckParameter2);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      v11 = v10 <= 1;
      v12 = v10 - 1;
      if ( v11 )
      {
        if ( v12 )
          __fastfail(0xEu);
        v39 = BugCheckParameter2;
        v40 = RtlRemoveEntryHashTable(
                *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
                (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3,
                0LL);
        if ( v40 )
          *(_BYTE *)(*(_QWORD *)(v39 + 16) + ((unsigned __int64)(unsigned int)(*(_DWORD *)(v3 + 40) - 1) >> 3)) &= ~(1 << ((*(_BYTE *)(v3 + 40) - 1) & 7));
        v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL);
        v42 = BugCheckParameter2;
        if ( (v41 & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(v42);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v40 )
        {
          if ( *(_QWORD *)(v3 + 48) )
          {
            ExRemoveLowBoxAtomReferences();
            RtlDereferenceAtomTable(*(void **)(v3 + 48));
          }
          ExFreePoolWithTag((PVOID)v3, 0);
        }
      }
      else
      {
        v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
        v14 = BugCheckParameter2;
        if ( (v13 & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(v14);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    v15 = *(_QWORD *)(a1 + 1088);
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 216) + 88LL;
      if ( *(_QWORD *)(a1 + 216) != -88LL )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = KeAbPreAcquire(v16, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16, v18, v16);
        if ( v19 )
          *((_BYTE *)v19 + 10) = 1;
        v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v11 = v20 <= 1;
        v21 = v20 - 1;
        if ( v11 )
        {
          if ( v21 )
            __fastfail(0xEu);
          v36 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v16 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v15, 0LL);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v16);
          KeAbPostRelease(v16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v36 )
          {
            SepCloseCachedTokenHandles(*(_DWORD *)(v15 + 56), *(HANDLE **)(v15 + 64));
            v37 = *(void **)(v15 + 64);
            if ( v37 )
              ExFreePoolWithTag(v37, 0);
            ExFreePoolWithTag((PVOID)v15, 0);
          }
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v16);
          KeAbPostRelease(v16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
    if ( *(_QWORD *)(a1 + 1152) )
      SepDereferenceCachedHandlesEntryInternal(*(_QWORD *)(a1 + 216) + 88LL);
    v22 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v22 + 3);
    v23 = v22[3];
    while ( v23 - 1 > 0 )
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange64(v22 + 3, v23 - 1, v23);
      if ( v24 == v23 )
        goto LABEL_37;
    }
    if ( v23 != 1 )
      __fastfail(0xEu);
    v34 = v22[1];
    v35 = v22[20];
    v44 = v34;
    SepDeReferenceLogonSession(&v44, v35);
  }
LABEL_37:
  v25 = *(void **)(a1 + 1160);
  if ( v25 )
    ObfDereferenceObject(v25);
  v26 = *(void **)(a1 + 1112);
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( *(_BYTE *)(a1 + 119) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0);
  v27 = *(_QWORD *)(a1 + 1136);
  if ( v27 )
    SepDereferenceLuidToIndexEntry(v27);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v28 = *(void **)(a1 + 176);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v29 = *(void **)(a1 + 784);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  v30 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v30 )
  {
    ExDeleteResourceLite(v30);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v31 = *(void **)(a1 + 1104);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}
