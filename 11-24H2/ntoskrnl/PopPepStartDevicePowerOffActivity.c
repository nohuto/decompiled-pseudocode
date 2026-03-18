/*
 * XREFs of PopPepStartDevicePowerOffActivity @ 0x1403156D0
 * Callers:
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopPepStartActivity @ 0x140319BA0 (PopPepStartActivity.c)
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
