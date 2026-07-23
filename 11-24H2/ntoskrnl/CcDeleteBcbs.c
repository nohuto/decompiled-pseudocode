/*
 * XREFs of CcDeleteBcbs @ 0x1404B21D4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeductDirtyPages @ 0x1402E53FC (CcDeductDirtyPages.c)
 *     CcDeallocateBcb @ 0x1402E5568 (CcDeallocateBcb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustVacbLevelLockCount @ 0x1403EAB94 (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbp
  struct _KEVENT *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v5 = v3;
    if ( v3 == v2 )
      break;
    v6 = v3 - 2;
    v3 = (_QWORD *)*v3;
    if ( *(_WORD *)v6 == 765 )
    {
      if ( *((_DWORD *)v6 + 16) )
        KeBugCheckEx(0x34u, 0xFE3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v3[1] != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v3;
      v3[1] = v7;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, v6[1], -1);
      if ( v6[23] )
      {
        v8 = *(_QWORD *)(v6[7] + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v6[7] + 16LL)) )
        {
          v9 = *(struct _KEVENT **)(v8 + 192);
          if ( v9 )
            KeSetEvent(v9, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 552));
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
      if ( *((_BYTE *)v6 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v6 + 1) >> 12);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      CcDeallocateBcb((char *)v6);
    }
  }
}
