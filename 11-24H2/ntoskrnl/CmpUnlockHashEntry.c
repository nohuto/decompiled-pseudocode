/*
 * XREFs of CmpUnlockHashEntry @ 0x1408446B0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntry(PVOID P, unsigned int a2)
{
  __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt
  __int64 result; // rax

  v3 = (__int64 *)(*((_QWORD *)P + 206)
                 + 24
                 * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9))));
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v4 = *v3;
  v5 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(P);
  return result;
}
