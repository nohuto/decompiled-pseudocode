/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x1402B14A8
 * Callers:
 *     KiIntSteerLogStatus @ 0x1402AF804 (KiIntSteerLogStatus.c)
 *     KeIntSteerPeriodic @ 0x1402B1294 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogMask @ 0x1402B1728 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1402B1848 (KiIntSteerLogProc.c)
 *     KiIntSteerLogState @ 0x1402B2FE4 (KiIntSteerLogState.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 */

char __fastcall KiIntSteerEtwEventEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11

  if ( !KiIntSteerEtwHandle )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a1 + 4);
  if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(KiIntSteerEtwHandle + 32) + 96LL,
                          a2,
                          *(_QWORD *)(a1 + 8),
                          0LL)
    || *(_WORD *)(v4 + 102) != (_WORD)v3
    && (LOBYTE(v2) = *(_BYTE *)(v5 + 4),
        (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, *(_QWORD *)(v5 + 8), v3)) )
  {
    LOBYTE(v3) = 1;
  }
  return v3;
}
