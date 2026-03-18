/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x1409E6B60
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x140A25B50 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1409E6C18 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 *v4; // rdi
  int v7; // esi
  _QWORD *v8; // rbx
  __int64 *i; // rbx

  v4 = (signed __int64 *)(a1 + 328);
  v7 = 0;
  v8 = KeAbPreAcquire(a1 + 328, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (__int64)v4);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = *(__int64 **)(a1 + 336); i != (__int64 *)(a1 + 336); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v7 = AlpcpViewSearchCallbackFunction(i + 6, a4);
      if ( v7 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 328), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 328));
  KeAbPostRelease(a1 + 328);
  return (unsigned int)v7;
}
