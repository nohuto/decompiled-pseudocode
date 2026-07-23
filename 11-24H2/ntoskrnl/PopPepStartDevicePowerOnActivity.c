/*
 * XREFs of PopPepStartDevicePowerOnActivity @ 0x140478D00
 * Callers:
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepStartActivity @ 0x1402C2730 (PopPepStartActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPepStartDevicePowerOnActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  *(_DWORD *)a3 = 2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
  result = 1;
  *(_BYTE *)(a3 + 16) = 1;
  return result;
}
