/*
 * XREFs of HalpDmaDequeueAdapter @ 0x14038A5E0
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x14038C0D8 (HalpDmaProcessMapRegisterQueueV3.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall HalpDmaDequeueAdapter(__int64 a1, char a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD **v9; // rcx
  _QWORD *v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !HalpDmaCvmConfiguration )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    if ( a2 )
      v9 = (_QWORD **)(a1 + 184);
    else
      v9 = (_QWORD **)(a1 + 168);
    v7 = *v9;
    if ( *v9 == v9 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    if ( (_QWORD **)v7[1] == v9 )
    {
      v10 = (_QWORD *)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) == v7 )
      {
        *v9 = v10;
        v10[1] = v9;
        goto LABEL_13;
      }
    }
LABEL_18:
    __fastfail(3u);
  }
  v6 = (_QWORD *)(a1 + (a2 != 0 ? 184LL : 168LL));
  if ( (_QWORD *)*v6 == v6 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 160), &LockHandle);
  v7 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 != v6 )
  {
    if ( (_QWORD *)v7[1] == v6 )
    {
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) == v7 )
      {
        *v6 = v8;
        *(_QWORD *)(v8 + 8) = v6;
LABEL_13:
        v3 = v7 - 21;
        goto LABEL_14;
      }
    }
    goto LABEL_18;
  }
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
