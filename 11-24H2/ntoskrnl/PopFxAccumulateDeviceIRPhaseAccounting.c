/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404B328C
 * Callers:
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1403CACC0 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1404BE100 (PopFxEndDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140F0BF70;
  qword_140F0BF90 += v1;
  if ( v1 > qword_140F0BF80 )
    qword_140F0BF80 = v1;
  if ( v1 < qword_140F0BF88 )
    qword_140F0BF88 = v1;
  ++dword_140F0BF98;
  qword_140F0BF70 = 0LL;
}
