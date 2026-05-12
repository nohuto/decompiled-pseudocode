/*
 * XREFs of RaidAdapterRemoveNormalChildren @ 0x140027258
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1400531A0 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x14005C5F4 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     StorRemoveDictionary @ 0x140027378 (StorRemoveDictionary.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterRemoveNormalChildren(__int64 a1, __int64 (__fastcall *a2)(_QWORD *))
{
  _QWORD **v2; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // rcx
  KIRQL v8; // bl
  __int64 v9; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_QWORD **)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    v5 = *v2;
    if ( *v2 == v2 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v5[1] != v2 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v2 = v7;
      v6 = v5 - 8;
      v7[1] = v2;
      --*(_DWORD *)(a1 + 160);
      v8 = RaidAdapterAcquireInterruptLock(a1);
      StorRemoveDictionary(
        a1 + 168,
        (unsigned __int8)BYTE2(*((_DWORD *)v6 + 26)) | (unsigned __int64)(((unsigned __int8)BYTE1(*((_DWORD *)v6 + 26)) | ((unsigned __int8)*((_DWORD *)v6 + 26) << 8)) << 8));
      LOBYTE(v9) = v8;
      RaidAdapterReleaseInterruptLock(a1, v9);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v6 )
      break;
    if ( a2 )
    {
      result = a2(v6);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
