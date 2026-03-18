/*
 * XREFs of MiUnlockImageSection @ 0x1402C7130
 * Callers:
 *     MiLockPagableImageSection @ 0x1402C70A0 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(__int64 a1, volatile signed __int32 *a2, ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // r8d
  __int64 result; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6 + 8LL * *(unsigned int *)a2;
  v8 = v6 + 8LL * *((unsigned int *)a2 + 1);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v10 = _InterlockedDecrement(a2 + 2);
  result = (unsigned int)(v10 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, v7 << 25 >> 16, a3, v10);
  if ( v10 == 1 )
  {
    result = MiUnlockCodePage(v7, v8, 0LL);
    _InterlockedAdd(a2 + 2, 0xFFFFFFFF);
    _InterlockedOr(v12, 0);
    if ( qword_140E2D878 )
      result = ExpUnblockPushLock(&qword_140E2D878, 0LL, 0LL);
  }
  if ( !CurrentIrql )
    return KeLeaveCriticalRegionThread();
  return result;
}
