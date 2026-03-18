/*
 * XREFs of PopPepStartDevicePowerOffActivity @ 0x14034E320
 * Callers:
 *     PopPepStartActivity @ 0x1402BC628 (PopPepStartActivity.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepWork @ 0x14034D020 (PopPepWork.c)
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
