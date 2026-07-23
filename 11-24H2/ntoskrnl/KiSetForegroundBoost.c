/*
 * XREFs of KiSetForegroundBoost @ 0x14044762C
 * Callers:
 *     KiInitializeForegroundBoostThread @ 0x1403A2590 (KiInitializeForegroundBoostThread.c)
 *     KiSetDisableBoostThread @ 0x140446F84 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiSetForegroundBoost(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  char v4; // r8
  int v5; // ecx

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 8) == 0 )
  {
    *(_WORD *)(a1 + 518) = *(_WORD *)(a1 + 518) & 0xFFF0 | PsPrioritySeparation & 0xF;
    result = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(65520LL);
    if ( (_DWORD)result )
    {
      if ( *(_BYTE *)(a1 + 870) )
      {
        result = (unsigned int)*(char *)(a1 + 563);
        v3 = *(_WORD *)(a1 + 518) & 0xF;
        v4 = *(_BYTE *)(a1 + 563) + v3;
        if ( (int)result + v3 >= 16 )
          v4 = 15;
        v5 = v3 + result + *(char *)(a1 + 870);
        if ( v5 >= 16 )
          LOBYTE(v5) = 15;
        *(_BYTE *)(a1 + 870) = v5 - v4;
      }
    }
  }
  return result;
}
