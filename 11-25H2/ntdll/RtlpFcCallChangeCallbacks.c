/*
 * XREFs of RtlpFcCallChangeCallbacks @ 0x1800A0254
 * Callers:
 *     RtlpFcWnfCallback @ 0x1800A0220 (RtlpFcWnfCallback.c)
 * Callees:
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpFcCallChangeCallbacks(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v1 = (volatile signed __int64 *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 264);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 256));
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    TpPostWork(i[5]);
  return RtlReleaseSRWLockShared(v1);
}
