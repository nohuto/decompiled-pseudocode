/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404ADA9C
 * Callers:
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1403A5854 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1404B92BC (PopFxEndDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140F0C3F0;
  qword_140F0C410 += v1;
  if ( v1 > qword_140F0C400 )
    qword_140F0C400 = v1;
  if ( v1 < qword_140F0C408 )
    qword_140F0C408 = v1;
  ++dword_140F0C418;
  qword_140F0C3F0 = 0LL;
}
