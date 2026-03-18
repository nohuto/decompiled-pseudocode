/*
 * XREFs of ExpPrivatePoolGetNext @ 0x140A4AEE4
 * Callers:
 *     ExpCompactPrivatePools @ 0x140A4AE8C (ExpCompactPrivatePools.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExpAcquirePoolListLockShared @ 0x140491580 (ExpAcquirePoolListLockShared.c)
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
  v5 = &qword_140E6BBE8[2 * a1];
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
    if ( ExAcquireRundownProtection(v3 + 3) )
    {
      v4 = 1;
      break;
    }
    Count = (__int64 *)*Count;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E6BBE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E6BBE0);
  KeAbPostRelease((ULONG_PTR)&qword_140E6BBE0);
  KeLeaveCriticalRegion();
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 3);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
