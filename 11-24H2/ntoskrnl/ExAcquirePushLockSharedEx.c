/*
 * XREFs of ExAcquirePushLockSharedEx @ 0x14031F960
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquirePushLockSharedEx(volatile signed __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // edi
  _QWORD *v4; // rbx
  __int64 result; // rax

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  result = _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, v4, BugCheckParameter2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
