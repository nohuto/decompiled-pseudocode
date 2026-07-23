/*
 * XREFs of CcGetNumberOfMappedPages @ 0x1404BC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall CcGetNumberOfMappedPages(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  signed __int64 *v6; // rbx
  char *v7; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt

  v3 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    v6 = (signed __int64 *)(v3 + 104);
    v7 = (char *)KeAbPreAcquire(v3 + 104, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 104), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v3 + 104), 0, v7, v3 + 104);
    if ( v7 )
      v7[10] = 1;
    *a2 = (unsigned __int64)*(unsigned int *)(v3 + 548) << 6;
    *a3 = (unsigned __int64)*(unsigned int *)(v3 + 552) << 6;
    _m_prefetchw(v6);
    v8 = *v6;
    v9 = *v6 - 16;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v9 = 0LL;
    if ( (v8 & 2) != 0 || (v10 = *v6, v10 != _InterlockedCompareExchange64(v6, v9, v8)) )
      ExfReleasePushLock((_QWORD *)(v3 + 104));
    KeAbPostRelease(v3 + 104);
  }
}
