/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x140A4F298
 * Callers:
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407E0F1C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408704E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140870910 (CmpRemoveFromDelayedClose.c)
 *     CmpUnlockHashEntryByIndex @ 0x140870A20 (CmpUnlockHashEntryByIndex.c)
 *     CmpDecommisssionKcb @ 0x140870D10 (CmpDecommisssionKcb.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  char v8; // bl
  unsigned int i; // ebp
  __int64 v10; // r12
  __int64 v11; // r14
  _QWORD *v12; // r13
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+30h] [rbp-A8h]
  __int64 v21; // [rsp+50h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-80h] BYREF

  v5 = *(_QWORD *)(a2 + 1648);
  v6 = *(_DWORD *)(a2 + 1656);
  v21 = v5;
  memset(&ApcState, 0, sizeof(ApcState));
  v18 = v6;
  CmpAttachToRegistryProcess(&ApcState);
  v8 = 0;
  for ( i = 0; i < v6; ++i )
  {
    if ( a5 )
      CmpLockHashEntryByIndexExclusive(a2, i);
    v10 = v5 + 24LL * i;
LABEL_6:
    v11 = *(_QWORD *)(v10 + 16);
    v12 = (_QWORD *)(v10 + 16);
    while ( v11 )
    {
      v13 = (_QWORD *)(v11 - 16);
      if ( a5 )
        CmpLockKcbExclusive(v11 - 16);
      v14 = v11 - 16;
      if ( !*v13 )
      {
        CmpRemoveFromDelayedClose(v14);
        CmpCleanUpKcbCacheWithLock(v11 - 16, a3);
        v15 = v11 - 16;
        if ( a5 )
          CmpUnlockKcb(v15);
        else
          CmpDecommisssionKcb(v15);
        goto LABEL_6;
      }
      v11 = v13[3];
      v16 = guard_dispatch_icall_no_overrides(v14, a2, a3, a4);
      switch ( v16 )
      {
        case 1:
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v13);
          v8 = 1;
          goto LABEL_32;
        case 3:
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v13);
LABEL_32:
          CmpUnlockHashEntryByIndex(a2, i);
          return v8;
        case 2:
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v13);
          *v12 = v11;
          break;
        default:
          v12 = v13 + 3;
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v13);
          v11 = v13[3];
          break;
      }
    }
    if ( a5 )
      CmpUnlockHashEntryByIndex(a2, i);
    v6 = v18;
    v5 = v21;
  }
  CmpDetachFromRegistryProcess(&ApcState);
  return 1;
}
