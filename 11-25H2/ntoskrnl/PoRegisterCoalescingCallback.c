/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140744CF0
 * Callers:
 *     CmpCmdInit @ 0x1407C603C (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140C1D890 (PopCoalescingInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(__int64 a1, char a2, __int64 *a3, __int64 a4)
{
  __int64 Pool2; // rbx
  __int64 result; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 8) = PopCoalescingCallback;
  *(_QWORD *)(Pool2 + 40) = a4;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)Pool2 = 0LL;
  *(_BYTE *)(Pool2 + 32) = a2 != 0;
  if ( !ExCompareExchangeCallBack((signed __int64 *)(Pool2 + 64), (struct _EX_RUNDOWN_REF *)Pool2, 0LL) )
    return 3221225485LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoalRegistrationListLock);
  v10 = off_140E074F8;
  v11 = (_QWORD *)(Pool2 + 48);
  if ( *(_UNKNOWN ***)off_140E074F8 != &PopCoalRegistrationList )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 56) = off_140E074F8;
  *v11 = &PopCoalRegistrationList;
  *v10 = v11;
  off_140E074F8 = (_UNKNOWN *)(Pool2 + 48);
  PopReleaseRwLock(&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = Pool2;
  return result;
}
