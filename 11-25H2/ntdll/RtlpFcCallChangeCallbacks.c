/*
 * XREFs of RtlpFcCallChangeCallbacks @ 0x1800A0254
 * Callers:
 *     RtlpFcWnfCallback @ 0x1800A0220 (RtlpFcWnfCallback.c)
 * Callees:
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpFcCallChangeCallbacks(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *v1; // rsi
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rbx

  v1 = a1 + 32;
  v2 = (unsigned __int64 *)&a1[33];
  RtlAcquireSRWLockShared(a1 + 32);
  for ( i = *v2; (unsigned __int64 *)i != v2; i = *(_QWORD *)i )
    TpPostWork(*(PTP_WORK *)(i + 40));
  RtlReleaseSRWLockShared(v1);
}
