/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x1409E1B20
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x140A19B40 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1409E1BD8 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 *v4; // rdi
  int v7; // esi
  char *v8; // rbx
  __int64 *i; // rbx

  v4 = (signed __int64 *)(a1 + 328);
  v7 = 0;
  v8 = (char *)KeAbPreAcquire(a1 + 328, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (__int64)v4);
  if ( v8 )
    v8[10] = 1;
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
