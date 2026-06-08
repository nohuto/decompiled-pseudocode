/*
 * XREFs of AmdConfigureEmu @ 0x140022690
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctPlatformCounterState @ 0x140002D84 (AmdPctPlatformCounterState.c)
 */

__int64 __fastcall AmdConfigureEmu(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r10

  result = AmdPctPlatformCounterState(a1, a2);
  *(_QWORD *)(result + 32) = v3;
  return result;
}
