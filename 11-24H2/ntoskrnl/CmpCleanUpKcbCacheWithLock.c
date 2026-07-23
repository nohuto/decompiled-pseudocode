/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x140874810
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140875130 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140965154 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140965224 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409E014C (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v2; // rsi
  __int64 (__fastcall *v5)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rdi
  __int64 v6; // rcx
  void *v7; // rbp
  _QWORD *v8; // rcx
  ULONG_PTR v9; // rdi
  _DWORD *v10; // r15
  __int64 *i; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  bool v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r10
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdx
  bool v26; // r8
  unsigned __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _OWORD v32[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _KAPC_STATE v33; // [rsp+60h] [rbp-68h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)BugCheckParameter4 )
    return;
  v5 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(&v33, 0, sizeof(v33));
    memset(v32, 0, sizeof(v32));
    CmpAttachToRegistryProcess(&v33);
    v7 = (void *)CmpConstructName(BugCheckParameter4);
    if ( v7 )
    {
      LOBYTE(v6) = 23;
      if ( v5 == EtwpTraceRegistry )
        EtwpTraceRegistry(v6, (unsigned int)v32, 0, 0, BugCheckParameter4, (__int64)v7);
      else
        guard_dispatch_icall_no_overrides(v6, v32);
      CmpFreeTransientPoolWithTag(v7, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&v33);
  }
  if ( (*(_WORD *)(BugCheckParameter4 + 186) & 0x40) == 0 && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) != 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter4 + 104));
    *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
    *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
  }
  CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 80));
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
  v8 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v8 )
  {
    v29 = v8[3];
    if ( v29 )
    {
      v30 = *v8;
      v2 = *(_QWORD *)(v29 + 16);
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_36;
      v31 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v31 != v8 )
        goto LABEL_36;
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
    }
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
  }
  v9 = *(_QWORD *)(BugCheckParameter4 + 72);
  v10 = (_DWORD *)(BugCheckParameter4 + 16);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
  {
    CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
    CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
    CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
  }
  else
  {
    for ( i = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                        + 8
                        * (3
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v10 ^ (*v10 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v10 ^ (*v10 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v12 + 8) )
    {
      v12 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v12 == v10 )
      {
        *i = *(_QWORD *)(v12 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
  if ( !v2 )
    goto LABEL_31;
  v13 = *(_QWORD *)(v2 + 32);
  v14 = *(_QWORD *)v2;
  do
  {
    v15 = v14;
    if ( v14 <= 1 )
    {
      v16 = (_QWORD *)(v2 + 224);
      if ( (_QWORD *)*v16 != v16 )
        KeBugCheckEx(0x51u, 0x34uLL, v2, 1uLL, 0LL);
      v28 = *(_QWORD **)(a2 + 8);
      if ( *v28 == a2 )
      {
        *v16 = a2;
        *(_QWORD *)(v2 + 232) = v28;
        *v28 = v16;
        *(_QWORD *)(a2 + 8) = v16;
        *(_BYTE *)(v2 + 64) |= 1u;
        goto LABEL_31;
      }
LABEL_36:
      __fastfail(3u);
    }
    v17 = v14 - 1;
    v18 = v14 == 3 && (*(_DWORD *)(v2 + 184) & 0x40000) != 0 && *(_BYTE *)(v13 + 2944) == 1;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v2, v17, v14);
    v14 = v19;
  }
  while ( v19 != v15 );
  if ( v19 < v17 )
    KeBugCheckEx(0x51u, 0x25uLL, v2, 0LL, 0LL);
  if ( v18 )
    CmpDoQueueLateUnloadWorker(v13);
LABEL_31:
  if ( !v9 )
    return;
  v20 = *(_QWORD *)(v9 + 32);
  v21 = *(_QWORD *)v9;
  while ( 2 )
  {
    v22 = v21;
    if ( v21 <= 1 )
    {
      v23 = (_QWORD *)(v9 + 224);
      if ( (_QWORD *)*v23 != v23 )
        KeBugCheckEx(0x51u, 0x34uLL, v9, 1uLL, 0LL);
      v24 = *(_QWORD **)(a2 + 8);
      if ( *v24 == a2 )
      {
        *v23 = a2;
        *(_QWORD *)(v9 + 232) = v24;
        *v24 = v23;
        *(_QWORD *)(a2 + 8) = v23;
        *(_BYTE *)(v9 + 64) |= 1u;
        return;
      }
      goto LABEL_36;
    }
    v25 = v21 - 1;
    v26 = v21 == 3 && (*(_DWORD *)(v9 + 184) & 0x40000) != 0 && *(_BYTE *)(v20 + 2944) == 1;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v25, v21);
    v21 = v27;
    if ( v27 != v22 )
      continue;
    break;
  }
  if ( v27 < v25 )
    KeBugCheckEx(0x51u, 0x25uLL, v9, 0LL, 0LL);
  if ( v26 )
    CmpDoQueueLateUnloadWorker(v20);
}
