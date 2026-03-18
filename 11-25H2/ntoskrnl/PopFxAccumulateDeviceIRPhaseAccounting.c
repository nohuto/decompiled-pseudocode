/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404B308C
 * Callers:
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140355A34 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1404BF82C (PopFxEndDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140F0A750;
  qword_140F0A770 += v1;
  if ( v1 > qword_140F0A760 )
    qword_140F0A760 = v1;
  if ( v1 < qword_140F0A768 )
    qword_140F0A768 = v1;
  ++dword_140F0A778;
  qword_140F0A750 = 0LL;
}
