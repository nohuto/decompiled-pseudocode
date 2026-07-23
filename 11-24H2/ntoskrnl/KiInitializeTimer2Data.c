/*
 * XREFs of KiInitializeTimer2Data @ 0x1405C2708
 * Callers:
 *     KeInitializeTimerTable @ 0x140A75E0C (KeInitializeTimerTable.c)
 * Callees:
 *     <none>
 */

_QWORD *KiInitializeTimer2Data()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = qword_140F221F0;
  v1 = 7LL;
  do
  {
    *(result - 2) = 0LL;
    *(result - 1) = 0LL;
    *result = -1LL;
    result += 3;
    --v1;
  }
  while ( v1 );
  KiNextTimer2DueTime = -1LL;
  return result;
}
