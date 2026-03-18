/*
 * XREFs of ExpPrivatePoolGetNext @ 0x140A49750
 * Callers:
 *     ExpCompactPrivatePools @ 0x140A496F8 (ExpCompactPrivatePools.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExpAcquirePoolListLockShared @ 0x140493144 (ExpAcquirePoolListLockShared.c)
 */

__int64 __fastcall ExpPrivatePoolGetNext(int a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _EX_RUNDOWN_REF *v3; // rbp
  char v4; // r14
  __int64 *v5; // rsi
  __int64 *Count; // rbx

  v3 = 0LL;
  v4 = 0;
  if ( a2 )
    a1 = (unsigned __int8)BYTE1(a2[1].Count);
  v5 = &qword_140E6B928[2 * a1];
  ExpAcquirePoolListLockShared();
  if ( a2 )
    Count = (__int64 *)a2[4].Count;
  else
    Count = (__int64 *)*v5;
  while ( Count != v5 )
  {
    v3 = (struct _EX_RUNDOWN_REF *)(Count - 4);
    if ( *((_DWORD *)Count - 8) != -1347437123 )
      __fastfail(5u);
    if ( ExAcquireRundownProtection_0(v3 + 3) )
    {
      v4 = 1;
      break;
    }
    Count = (__int64 *)*Count;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E6B920, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E6B920);
  KeAbPostRelease((ULONG_PTR)&qword_140E6B920);
  KeLeaveCriticalRegion();
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 3);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
