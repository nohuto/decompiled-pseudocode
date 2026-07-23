/*
 * XREFs of PopPepStartDevicePowerOffActivity @ 0x14047E8F0
 * Callers:
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepStartActivity @ 0x1402C2730 (PopPepStartActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPepStartDevicePowerOffActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  *(_BYTE *)(a1 + 136) = 0;
  *(_DWORD *)a3 = 2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
  result = 1;
  *(_BYTE *)(a3 + 16) = 0;
  return result;
}
