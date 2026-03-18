/*
 * XREFs of SetWindowState @ 0x1C02233A0
 * Callers:
 *     NtUserSetWindowState @ 0x1C01DCEF0 (NtUserSetWindowState.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C0223318 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(__int64 a1, __int16 a2)
{
  unsigned __int16 v2; // r10
  __int64 *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL) && ValidateState(a2) )
    SetOrClrWF(1, v3, v2, 1);
  return 1LL;
}
