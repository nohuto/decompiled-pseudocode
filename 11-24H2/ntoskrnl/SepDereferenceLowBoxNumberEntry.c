/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x140A45514
 * Callers:
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140AD88D0 (SepTokenDeleteMethod.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     RtlRemoveEntryHashTable @ 0x140357120 (RtlRemoveEntryHashTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x14046DC88 (ExRemoveLowBoxAtomReferences.c)
 *     SepGetTokenSessionMapEntry @ 0x14047F254 (SepGetTokenSessionMapEntry.c)
 *     RtlDereferenceAtomTable @ 0x1405E8D24 (RtlDereferenceAtomTable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2)
{
  unsigned int TokenSessionMapEntry; // r14d
  struct _KTHREAD *v5; // rax
  volatile signed __int32 *v6; // rdi
  ULONG_PTR v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rdi
  ULONG_PTR v14; // rdi
  BOOLEAN v15; // bp
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&LowboxSessionMapLock, 0, v13, (__int64)&LowboxSessionMapLock);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(a1, 0, (__int64 *)&BugCheckParameter2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v5 = KeGetCurrentThread();
  v6 = (volatile signed __int32 *)BugCheckParameter2;
  v7 = BugCheckParameter2;
  --v5->KernelApcDisable;
  v8 = KeAbPreAcquire(v7, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64(v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v8, BugCheckParameter2);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v10 <= 0 )
  {
    if ( v10 )
      __fastfail(0xEu);
    v14 = BugCheckParameter2;
    v15 = RtlRemoveEntryHashTable(
            *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
            (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
            0LL);
    if ( v15 )
      *(_BYTE *)(*(_QWORD *)(v14 + 16) + ((unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 40) - 1) >> 3)) &= ~(1 << ((*(_BYTE *)(a2 + 40) - 1) & 7));
    else
      TokenSessionMapEntry = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( v15 )
    {
      if ( *(_QWORD *)(a2 + 48) )
      {
        ExRemoveLowBoxAtomReferences();
        RtlDereferenceAtomTable();
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    return TokenSessionMapEntry;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
