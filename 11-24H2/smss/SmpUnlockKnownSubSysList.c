/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x1400079F0
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmpWaitForSingleSubSys @ 0x140006EC0 (SmpWaitForSingleSubSys.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140007A20 (SmpSearchKnownSubSysDatabase.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x140019398 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( *(_DWORD *)a1 == 1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
