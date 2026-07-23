/*
 * XREFs of HalpInterruptIsGsiValid @ 0x1406FB550
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 */

bool __fastcall HalpInterruptIsGsiValid(unsigned int a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return (int)HalpInterruptGsiToLine(a1, &v2) >= 0;
}
