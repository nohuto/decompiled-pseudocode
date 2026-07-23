/*
 * XREFs of FsRtlDisallowLegacyFilterOnDevice @ 0x14057EFE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall FsRtlDisallowLegacyFilterOnDevice(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  KIRQL v4; // al

  v1 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v1 > 0x35 )
    return 3221225485LL;
  v3 = 0x20000100100108LL;
  if ( !_bittest64(&v3, v1) )
    return 3221225485LL;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x2000u;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return 0LL;
}
