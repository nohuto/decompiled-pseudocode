/*
 * XREFs of KiFindStandbyThreadForSteal @ 0x1402A6E80
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 * Callees:
 *     KiMayStealStandbyThread @ 0x1402A6F50 (KiMayStealStandbyThread.c)
 */

__int64 __fastcall KiFindStandbyThreadForSteal(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r9
  int v7; // ecx
  _WORD *v8; // r8
  __int64 v9; // rax
  __int64 result; // rax

  if ( !(unsigned __int8)KiMayStealStandbyThread(a2, a1, 1LL) )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = (*(_DWORD *)(v6 + 120) >> 1) & 1;
  if ( (v7 != 1 || *(_QWORD *)(a1 + 36440) != *(_QWORD *)(a2 + 36440)) && v7 > a3 )
    return 0LL;
  if ( *(_QWORD *)(v6 + 568) != KiCpuSetSequence && (*(_DWORD *)(v6 + 116) & 8) == 0 )
    return 0LL;
  v8 = *(_WORD **)(v6 + 576);
  v9 = *(unsigned __int8 *)(a1 + 208);
  if ( (unsigned __int16)v9 >= *v8 || ((*(_QWORD *)&v8[4 * v9 + 4] >> *(_BYTE *)(a1 + 209)) & 1) == 0 )
    return 0LL;
  result = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(v6 + 536) = *(_DWORD *)(a1 + 36);
  return result;
}
