/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x140874D50
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpUnlockHashEntryByIndex(__int64 a1, unsigned int a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // r8
  signed __int64 v6; // rtt

  v3 = (signed __int64 *)(*(_QWORD *)(a1 + 1648) + 24LL * a2);
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v4 = *v3;
  v5 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return CmpDereferenceHive((volatile signed __int32 *)a1);
}
