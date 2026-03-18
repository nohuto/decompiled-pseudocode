/*
 * XREFs of KiRcuStartGracePeriodEnumCallback @ 0x1404C63DC
 * Callers:
 *     KiRcuForEachParticipatingCpu @ 0x1404C6AD8 (KiRcuForEachParticipatingCpu.c)
 * Callees:
 *     KiRcuCheckQuiescentForIdle @ 0x1404D5EA8 (KiRcuCheckQuiescentForIdle.c)
 */

__int64 __fastcall KiRcuStartGracePeriodEnumCallback(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_BYTE *)(v2 + 14567) == 0;
  *(_BYTE *)(v2 + 14565) = 1;
  if ( v4 && (unsigned int)KiRcuCheckQuiescentForIdle() )
    *a2 = 1;
  return 1LL;
}
