/*
 * XREFs of MiCauseOverCommitPopup @ 0x14047AF98
 * Callers:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x14046F624 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x1404A88B0 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  __int64 v1; // r9
  NTSTATUS v2; // r10d
  signed __int32 v3; // eax
  signed __int32 v4; // r8d

  v1 = 16848LL;
  v2 = -1073741523;
  if ( *(_QWORD *)(a1 + 19608) != *(_QWORD *)(a1 + 16840) )
  {
    v1 = 16852LL;
    v2 = -1073741112;
  }
  v3 = *(_DWORD *)(v1 + a1);
  do
  {
    if ( v3 == -1 )
      break;
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + a1), v3 + 1, v3);
  }
  while ( v4 != v3 );
  if ( !v3 )
    LOBYTE(v3) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
  return v3;
}
