/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x1403536D8
 * Callers:
 *     KeIntSteerPeriodic @ 0x1403534C4 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogMask @ 0x140353958 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x140353A78 (KiIntSteerLogProc.c)
 *     KiIntSteerLogStatus @ 0x140354250 (KiIntSteerLogStatus.c)
 *     KiIntSteerLogState @ 0x1403552B4 (KiIntSteerLogState.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 */

char __fastcall KiIntSteerEtwEventEnabled(__int64 a1)
{
  __int16 v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11

  if ( !KiIntSteerEtwHandle )
    return 0;
  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(KiIntSteerEtwHandle + 32) + 96LL, *(_BYTE *)(a1 + 4), *(_QWORD *)(a1 + 8))
    || *(_WORD *)(v2 + 102) != v1
    && EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, *(_BYTE *)(v3 + 4), *(_QWORD *)(v3 + 8)) )
  {
    LOBYTE(v1) = 1;
  }
  return v1;
}
