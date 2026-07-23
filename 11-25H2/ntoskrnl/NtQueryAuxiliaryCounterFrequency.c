/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407B2510
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x1405ACFB0 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  NTSTATUS result; // eax
  LONGLONG v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency((__int64)AuxiliaryCounterFrequency);
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency((__int64)&v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v3;
  return result;
}
