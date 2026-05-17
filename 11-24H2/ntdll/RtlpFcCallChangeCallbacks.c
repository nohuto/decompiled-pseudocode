/*
 * XREFs of RtlpFcCallChangeCallbacks @ 0x1800D6B60
 * Callers:
 *     RtlpFcWnfCallback @ 0x1800D6100 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 */

__int64 __fastcall RtlpFcCallChangeCallbacks(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *i; // rbx

  v1 = (volatile signed __int64 *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 264);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 256));
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    TpPostWork(i[5], v3, v4, v5);
  return RtlReleaseSRWLockShared(v1);
}
