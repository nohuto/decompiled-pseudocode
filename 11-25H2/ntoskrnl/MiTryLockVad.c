/*
 * XREFs of MiTryLockVad @ 0x1402A30DC
 * Callers:
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  int v2; // edi
  volatile signed __int32 *v5; // rsi
  unsigned int v6; // ebx
  __int64 *v7; // rax

  v2 = *(_DWORD *)(a1 + 1448);
  if ( (v2 & 0x80u) != 0 )
    return 0LL;
  v5 = (volatile signed __int32 *)(a2 + 40);
  v6 = 1;
  v7 = KeAbPreAcquire(a2 + 40, 0LL);
  if ( _interlockedbittestandset64(v5, 0LL) )
  {
    if ( v7 )
      KeAbPostReleaseEx((ULONG_PTR)v5, (ULONG_PTR)v7);
    return 0;
  }
  else
  {
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    *(_DWORD *)(a1 + 1448) = v2 | 0x80;
  }
  return v6;
}
