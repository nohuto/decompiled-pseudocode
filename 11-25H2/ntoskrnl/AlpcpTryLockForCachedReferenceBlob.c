/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x14098B0C0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rax
  signed __int64 BugCheckParameter4; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2 - 16, (ULONG_PTR)v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}
