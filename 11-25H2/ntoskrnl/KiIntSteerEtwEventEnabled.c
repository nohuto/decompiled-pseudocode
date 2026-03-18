/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x1403AF324
 * Callers:
 *     KiIntSteerLogStatus @ 0x1403AE85C (KiIntSteerLogStatus.c)
 *     KeIntSteerPeriodic @ 0x1403AF134 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogMask @ 0x1403AF598 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1403AF60C (KiIntSteerLogProc.c)
 *     KiIntSteerLogState @ 0x140446E50 (KiIntSteerLogState.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 */

char __fastcall KiIntSteerEtwEventEnabled(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11

  if ( !KiIntSteerEtwHandle )
    return 0;
  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(KiIntSteerEtwHandle + 32) + 96LL, *(_BYTE *)(a1 + 4), *(_QWORD *)(a1 + 8))
    || *(_BYTE *)(v2 + 101) != v1
    && EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, *(_BYTE *)(v3 + 4), *(_QWORD *)(v3 + 8)) )
  {
    return 1;
  }
  return v1;
}
